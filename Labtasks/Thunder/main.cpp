
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void ThunderInverse()
{
    glColor3ub(255,255,0);
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
void Thunder()
{
   // ThunderInverse();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(250,250,0);
    glScalef(-0.5,-0.5,0);
    glTranslatef(-250,-250,0);
    ThunderInverse();
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
    Thunder();
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
