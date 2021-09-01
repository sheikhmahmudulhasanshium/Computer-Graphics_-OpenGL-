
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Grass() {
    glColor3ub(0,255,0);

    glBegin(GL_TRIANGLES);//low-leaf-left
    glVertex2f(75,100);
    glVertex2f(50,175);
    glVertex2f(100,100);
    glEnd();
    glBegin(GL_TRIANGLES);//low-leaf-right
    glVertex2f(125,100);
    glVertex2f(150,175);
    glVertex2f(100,100);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(87.5,100);//mid-leaf-left
    glVertex2f(75,225);
    glVertex2f(100,100);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(112.5,100);//mid-leaf-right
    glVertex2f(125,225);
    glVertex2f(100,100);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(92.5,100);//top-leaf-mid
    glVertex2f(100,275);
    glVertex2f(107.5,100);
    glEnd();

}
void Display() {



	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0); // Red

	glVertex2f(250.0f, 0.0f);    // x, y
	glVertex2f(250.0f,500.0f);    // x, y

	glVertex2f(0.0f,250.0f);    // x, y
	glVertex2f(500.0f, 250.0f);    // x, y

    glEnd();

        Grass();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Grass"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(Display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}