#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void CoconutLeaf()
{
    glBegin(GL_POLYGON);//lower-left-p-1
    glColor3b(0.4, 19.6, 12.5);//leaf-stick
    glVertex2f(255,400);
    glVertex2f(275,380);
    glVertex2f(255,395);
    glEnd();

    glBegin(GL_POLYGON);//lower-left-p-2
    glColor3b(0.4, 19.6, 12.5);//leaf-stick
    glVertex2f(273,384);
    glVertex2f(295,324);
    glVertex2f(273,379-10);
    glEnd();
    glBegin(GL_POLYGON);//mid-left-p-1
    glColor3b(0.4, 19.6, 12.5);//leaf-stick
    glVertex2f(255,400);
    glVertex2f(275,420);
    glVertex2f(255,395);
    glEnd();

    glBegin(GL_POLYGON);//mid-left-p-2
    glColor3b(0.4, 19.6, 12.5);//leaf-stick
    glVertex2f(273,420);
    glVertex2f(295,360);
    glVertex2f(273,410-5);
    glEnd();

    glBegin(GL_POLYGON);//upper-left-p-1
    glColor3b(0.4, 19.6, 12.5);//leaf-stick
    glVertex2f(255,400);
    glVertex2f(275,440);
    glVertex2f(255,395);
    glEnd();
    glBegin(GL_POLYGON);//upper-left-p-2
    glColor3b(0.4, 19.6, 12.5);//leaf-stick
    glVertex2f(273,440);
    glVertex2f(295,415);
    glVertex2f(273,430);
    glEnd();

}
void CurvedLeaf()
{
    CoconutLeaf();
}

void CoconutLeafLoop()
{
    //CoconutLeaf();
    CurvedLeaf();
   // /*
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
        glTranslatef(255, 395, 0);
        glScalef(-1,1,0);
        glTranslatef(-255, -395, 0);
        CurvedLeaf();


    glPopMatrix();
   // */
}
void CoconutLog()
{
    glBegin(GL_POLYGON);
    glColor3ub(139,69,19);//brown-log
    glVertex2f(250.0f, 250.0f);    // x, y
	glVertex2f(253.0f, 400.0f);    // x, y

	glVertex2f(255.0f, 400.0f);    // x, y-center
	glVertex2f(260.0f, 250.0f);    // x, y

    glEnd();

}

void Coconuts()
{

    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 62);//green-coconut
    for(int i=0;i<300;i++)
    {
        float r=5;
        float pi=3.1416;
        float A=i*2*pi/200;
        float x=255+r*cos(A);
        float y=380+r*sin(A);
        glVertex2f(x,y);
    }
    glEnd();

}
void CoconutTree()
{
    //CurvedLeaf();
    Coconuts();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-8,6,0);
    //glColor3b(150,90,62);//brown-coconut
    Coconuts();
    glPopMatrix();
    CoconutLeafLoop();

    CoconutLog();
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
    CoconutTree();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	//gluOrtho2D(-500,500,-500,1000);
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
