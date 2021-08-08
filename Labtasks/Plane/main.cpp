#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

void Plane2() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

  int i1;

	GLfloat x=.466f; GLfloat y=-.498f; GLfloat radius =.035f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i1 = 0; i1<= triangleAmount; i1++)
            {
			glVertex2f(
		            x + (radius * cos(i1 *  twicePi / triangleAmount)),
			    y + (radius * sin(i1 * twicePi / triangleAmount))
			);
		}
	glEnd();
//glLoadIdentity();

	int i2;

	GLfloat x2=.266f; GLfloat y2=-.298f; GLfloat radius2 =.055f;
	int triangleAmount2 = 21; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(242, 66, 245);
		glVertex2f(x2, y2); // center of circle
		for(i2 = 0; i2<= triangleAmount;i2++) {
			glVertex2f(
		            x2 + (radius * cos(i2 *  twicePi / triangleAmount)),
			    y2 + (radius * sin(i2 * twicePi / triangleAmount))
			);
		}
	glEnd();






    glBegin(GL_QUADS);   // body
glColor3ub(255, 255, 255);
glVertex2f(.666f,-.435f);
glVertex2f(.5f,-.262f);
glVertex2f(-.6f,-.262f);
glVertex2f(-.166f,-.435f);
glEnd();

glBegin(GL_QUADS); //cockpit
glColor3ub(0, 0, 0);
glVertex2f(.579f,-.353f);
glVertex2f(.546f,-.318f);
glVertex2f(.466f,-.318f);
glVertex2f(.466f,-.353f);
glEnd();

//windows
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(.308f,-.353f);
glVertex2f(.308f,-.318f);
glVertex2f(.278f,-.318f);
glVertex2f(.278f,-.353f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(.258f,-.353f);
glVertex2f(.258f,-.318f);
glVertex2f(.218f,-.318f);
glVertex2f(.218f,-.353f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(.188f,-.353f);
glVertex2f(.188f,-.318f);
glVertex2f(.158f,-.318f);
glVertex2f(.158f,-.353f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(.128f,-.353f);
glVertex2f(.128f,-.318f);
glVertex2f(.098f,-.318f);
glVertex2f(.098f,-.353f);
glEnd();


glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(.078f,-.353f);
glVertex2f(.078f,-.318f);
glVertex2f(.048f,-.318f);
glVertex2f(.048f,-.353f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex2f(.018f,-.353f);
glVertex2f(.018f,-.318f);
glVertex2f(-.008f,-.318f);
glVertex2f(-.008f,-.353f);
glEnd();

//wings last
glBegin(GL_QUADS);
glColor3f(1, 0, 0);
glVertex2f(-.464f,-.1f);
glVertex2f(-.464f,-.262f);
glVertex2f(-.302f,-.262f);
glVertex2f(-.398f,-.1f);
glEnd();

glBegin(GL_QUADS); //Cross line
glColor3f(1, 0, 0);
glVertex2f(-.384f,-.262f);
glVertex2f(-.464f,-.262f);
glVertex2f(-.02f,-.435f);
glVertex2f(.06f,-.435f);
glEnd();


//Wings down
glBegin(GL_QUADS);
glColor3f(1, 0, 0);
glVertex2f(.308f,-.383f);
glVertex2f(.108f,-.383f);
glVertex2f(-.278f,-.628f);
glVertex2f(-.274f,-.628f);
glEnd();

//Wings up
glBegin(GL_QUADS);
glColor3f(1, 0, 0);
glVertex2f(.148f,-.262f);
glVertex2f(.305f,-.262f);
glVertex2f(-.108f,-.015f);
glVertex2f(-.107f,-.01f);
glEnd();

glFlush();
}

void scaledPlane2(float x,float y,float a,float b)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(a,b,0);//scale:a,b//position:x,y
    glTranslatef(x,y,0);
    Plane2();
    glPopMatrix();
}
void display()
{
    scaledPlane2(0,0,.1,.1);//scale:a,b//position:x,y
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(display);
	//glLoadIdentity();
	glutMainLoop();
	return 0;
}
