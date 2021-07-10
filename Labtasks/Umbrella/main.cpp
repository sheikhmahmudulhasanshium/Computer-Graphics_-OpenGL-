
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void UmbrellaFrameLeft()
{
    glBegin(GL_TRIANGLES);//p
	glColor3f(1, 1, 0); // Yellow
	glVertex2f(250, 120);    // x, y
	glVertex2f(229, 70);    // x, y
	glVertex2f(250, 70);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
	glColor3f(1, 0, 1); // Purple
	glVertex2f(249, 120);    // x, y
	glVertex2f(209.0, 80);    // x, y
	glVertex2f(230,70);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
	glColor3f(0, 1, 1); // Red
	glVertex2f(249, 120);    // x, y
	glVertex2f(189,90);    // x, y
	glVertex2f(210, 80);    // x, y
    glEnd();

}


void UmbrellaFrameRight()
{
    glBegin(GL_TRIANGLES);//p
	glColor3f(0, 1, 0); // Green
	glVertex2f(251, 120);    // x, y
	glVertex2f(251, 70);    // x, y
	glVertex2f(270, 70);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
	glColor3f(0, 0, 1); // Blue
	glVertex2f(251, 120);    // x, y
	glVertex2f(271, 70);    // x, y
	glVertex2f(290, 80);    // x, y
    glEnd();

    glBegin(GL_TRIANGLES);//p
	glColor3f(1, 0, 0); // Red
	glVertex2f(251, 120);    // x, y
	glVertex2f(291, 80);    // x, y
	glVertex2f(310, 90);    // x, y
    glEnd();

}
void UmbrellaBody()
{
    glBegin(GL_POLYGON);//Handle
	glColor3f(0, 0, 0); // Red
	glVertex2f(249, 40);    // x, y
	glVertex2f(249, 130);    // x, y
	glVertex2f(251, 130);    // x, y
    glVertex2f(251, 40);    // x, y
	glEnd();
	 UmbrellaFrameRight();
	 UmbrellaFrameLeft();


}

void Umbrella() {
	glClearColor(1, 1, 1, 1); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1, 0, 0); // Red
    glVertex2f(0, 250);    // x, y
	glVertex2f(500,250);    // x, y
	glVertex2f(250, 0);    // x, y
	glVertex2f(250, 500);    // x, y
	glEnd();
    UmbrellaBody();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Umbrella"); // Create a window with the given title
	glutInitWindowSize(1024,800);   // Set the window's initial width & height
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(Umbrella); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}