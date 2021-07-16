#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void TropicalTreeLeafCircle()
{
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
        {
            glColor3ub(0.0,255,0.0);//green-leaf
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=15.85;
            float x =2* r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

	glEnd();

}
void TropicalTreeLeafCircles()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(215,360,0);//lower-branch
    TropicalTreeLeafCircle();
    glTranslatef(20,-15,0);
    TropicalTreeLeafCircle();
    glTranslatef(0,20,0);
    TropicalTreeLeafCircle();
    glTranslatef(70,20,0);//middle-branch
    TropicalTreeLeafCircle();
    glTranslatef(20,20,0);
    TropicalTreeLeafCircle();
    glTranslatef(20,-20,0);
    TropicalTreeLeafCircle();
    glTranslatef(-50,60,0);//Upper-branch
    TropicalTreeLeafCircle();
    glTranslatef(-30,20,0);
    TropicalTreeLeafCircle();
    glTranslatef(-30,-10,0);//Upper-branch
    TropicalTreeLeafCircle();
    glTranslatef(-30,-10,0);//Upper-branch
    TropicalTreeLeafCircle();
    glTranslatef(25,-10,0);//Upper-branch
    TropicalTreeLeafCircle();

    glPopMatrix();
}
void TropicalTreeBranch()
{
    glColor3ub(128,0,0);
    glBegin(GL_POLYGON);//maroon-lower-branch-1
    glVertex2f(240,300);
    glVertex2f(260,300);
    glVertex2f(230,330);
    glVertex2f(235,335);
    glEnd();

    glBegin(GL_POLYGON);//maroon-lower-branch-2
    glVertex2f(230,330);
    glVertex2f(235,335);
    glVertex2f(215,360);
    glEnd();

    glBegin(GL_POLYGON);//maroon-middle-branch-p-3
    glVertex2f(280,350);
    glVertex2f(270,355);
    glVertex2f(320,390);
    glEnd();

    glBegin(GL_POLYGON);//maroon-middle-branch-p-4
    glVertex2f(260,390);
    glVertex2f(270,395);
    glVertex2f(230,430);
    glEnd();


}
void TropicalTreeLog()
{
    glColor3ub(128,0,0);
    glBegin(GL_POLYGON);//maroon-log-p-1
    glVertex2f(250,250);
    glVertex2f(240,300);
    glVertex2f(260,300);
    glVertex2f(270,250);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-2
    glVertex2f(240,300);
    glVertex2f(260,300);
    glVertex2f(280,350);
    glVertex2f(270,355);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-3
    glVertex2f(280,350);
    glVertex2f(270,355);
    glVertex2f(260,390);
    glVertex2f(270,395);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-4
    glVertex2f(260,390);
    glVertex2f(270,395);
    glVertex2f(280,450);
    glVertex2f(275,435);
    glEnd();
}
void TropicalTree()

{
    TropicalTreeLog();
    TropicalTreeBranch();
    TropicalTreeLeafCircles();
}
void ScaledTropicalTree()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.5,0.5,0);
    glTranslatef(-200,400,0);
    TropicalTree();
    glPopMatrix();

}
void TropicalTreeLoop()
{


    glPushMatrix();
    for(int tree=0;tree<05;tree++)
    {
        ScaledTropicalTree();
        glTranslatef(40,0,0);
    }

    glPopMatrix();

}

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.0f, 250.0f);    // x, y
	glVertex2f(500.0f,250.0f);    // x, y
	glVertex2f(250.0f, 0.0f);    // x, y
	glVertex2f(250.0f, 500.0f);    // x, y
	glEnd();
    TropicalTreeLoop();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
