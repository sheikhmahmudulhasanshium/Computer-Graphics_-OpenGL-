#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void plot(float x,float y,float a,float b)
{
    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
    glVertex2f(((-5.0*x)+a),(b+(0.0*y)));
    glVertex2f(((5.0*x)+a),(b+(y*0.0)));
    glVertex2f(((0.0*x)+a),(b+(-y*5.0)));
    glVertex2f(((0.0*x)+a),(b+(y*10.0)));
    glEnd();

}
void Body(float x,float y,float a,float b)
{
    glColor3ub(210.0f,105.0,30.0);//RGB chocholate
    glBegin(GL_QUADS);//body
    glVertex2f(((-1.0*x)+a),(b+(-y*2.0f)));
    glVertex2f(((0.5*x)+a),(b+(y*0.0f)));
    glVertex2f(((0.80*x)+a),(b+(y*8.0f)));
    glVertex2f(((-0.5*x)+a),(b+(y*6.0f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Left_Branch
    glVertex2f(((-0.5*x)+a),(b+(y*6.0f)));
    glVertex2f(((-3.5*x)+a),(b+(y*9.0f)));
    glVertex2f(((-0.5*x)+a),(b+(y*5.4f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Right_Branch
    glVertex2f(((0.5*x)+a),(b+(y*5.8f)));
    glVertex2f(((5.0*x)+a),(b+(y*11.5f)));
    glVertex2f(((0.7*x)+a),(b+(y*5.3f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Right_root
    glVertex2f(((0.5*x)+a),(b+(y*0.0f)));
    glVertex2f(((0.4*x)+a),(b+(y*1.0f)));
    glVertex2f(((4.0*x)+a),(b+(y*0.0f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Left_root
    glVertex2f(((-0.5*x)+a),(b+(y*0.5f)));
    glVertex2f(((-0.4*x)+a),(b+(y*1.5f)));
    glVertex2f(((-4.0*x)+a),(b+(y*0.0f)));
    glEnd();

}
void Leaf(float x,float y,float a,float b)
{

    glBegin(GL_POLYGON);// Draw a green circle centered at up left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(a+(x*( (r * cos(A))-5)));
            float q =(b+(y*( 10+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(a+(x*((r * cos(A))-4)));
            float q =(b+(q*(13+r * sin(A))));
            glVertex2f(p,q);
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up Right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (a+(x*((r * cos(A))+5)));
            float q = (b+(y*(10+r * sin(A))));
            glVertex2f(p,q);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (a+(x*((r * cos(A))-4)));
            float q = (b+(y*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

		glBegin(GL_POLYGON);// Draw a green circle centered at upper right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (a+(x*((r * cos(A))+4)));
            float q = (b+(y*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up middle
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.5;
            float p = (a+(x*(r * cos(A))));
            float q = (b+(y*(13+r * sin(A))));
            glVertex2f(p,q);
        }

	glEnd();

	glFlush();  // Render now

}
void Tree() {

glutInitWindowSize(320,320);
gluOrtho2D(-20.0,20.0,-20.0,20.0);

glPointSize(200);
float x=20,y=20;//Scale
float a=12,b=16;//Position
glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to violate and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(20.0);
Body(x,y,a,b);
Leaf(x,y,a,b);
//plot(x,y);

 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Tree-3.0"); // Create a window with the given title

glutDisplayFunc(Tree); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}

