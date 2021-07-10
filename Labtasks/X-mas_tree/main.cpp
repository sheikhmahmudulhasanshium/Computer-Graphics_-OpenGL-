#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
//float _move = 15.0f;
//float _scale = 0.85f;
void TreeLeaf()
{
    glBegin(GL_POLYGON);
    glColor3ub(0,85,0);
    glVertex2f(00.0f, 260.0f);    // x, y
    glVertex2f(35.0f, 240.0f);    // x, y
	glVertex2f(70.0f, 260.0f);    // x, y
    glVertex2f(35.0f, 290.0f);    // x, y
    glVertex2f(35.0f, 290.0f);    // x, y
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(00.0f, 260.0f);    // x, y
    glVertex2f(35.0f, 240.0f);    // x, y
    glVertex2f(35.0f, 240.0f);    // x, y
	glVertex2f(70.0f, 260.0f);    // x, y
    glVertex2f(70.0f, 260.0f);    // x, y
    glVertex2f(35.0f, 290.0f);    // x, y
    glVertex2f(35.0f, 290.0f);    // x, y
    glVertex2f(35.0f, 290.0f);    // x, y
    glVertex2f(35.0f, 290.0f);    // x, y
    glVertex2f(00.0f, 260.0f);    // x, y
    glEnd();

}


void TreeLeafLoop()
{

       TreeLeaf();
        glMatrixMode(GL_MODELVIEW);
        glPushMatrix();

    for(int i=0;i<7;i++)
    {


        glTranslatef(35,0,0);
        glScalef(0.75,1,0);
        glTranslatef(-35,0,0);
        glTranslatef(0,15,0);
        TreeLeaf();
    }
        glPopMatrix();

}
void TreeLog()
{
    glBegin(GL_POLYGON);
    glColor3ub(24.71,0,5.88);
    glVertex2f(32.0f, 200.0f);    // x, y
	glVertex2f(38.0f, 200.0f);    // x, y
    glVertex2f(38.0f, 370.0f);    // x, y
    glVertex2f(32.0f, 370.0f);    // x, y
    glEnd();
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

    TreeLog();
    TreeLeafLoop();
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
