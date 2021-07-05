#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(5.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, 5.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-5.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, -5.0f);

	glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-4.0f,1.0f);
    glVertex2f(-2.0f,1.0f);

    glVertex2f(-2.0f,3.0f);
    glVertex2f(-4.0f,3.0f);


    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0f, 1.0f, 0.0f); // green
    glVertex2f(1.0f,2.0f);
    glVertex2f(3.0f,2.0f);
    glVertex2f(3.0f,4.0f);
    glVertex2f(1.0f,4.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f); // green
    glVertex2f(3.0f,1.0f);
    glVertex2f(5.0f,3.0f);
    glVertex2f(3.0f,5.0f);

     glBegin(GL_TRIANGLES);
    glColor3f(1.0f,1.0f,0.0f); //Yellow
    glVertex2f(1.0f,-4.0f);
    glVertex2f(3.0f,-4.0f);
    glVertex2f(2.0f,-2.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(152.0f,28.0f,235.0f); // Violate
    glVertex2f(-2.0f,-1.0f);
    glVertex2f(-2.0f,-4.0f);
    glVertex2f(-4.0f,-3.0f);
    glEnd();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(-5.0,5.0,-5.0,5.0);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}


