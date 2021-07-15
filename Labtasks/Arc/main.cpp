//Doesnt_work

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void    arc()
{
     int   numPoints=4;
     float    points[4][2];
     glColor3ub(255,0,0);
  for (int i = 0; (i + 3) < numPoints; i += 3) {
    // The evaluator with a stride of 3 and an order of 4
    glMap1f(GL_MAP1_VERTEX_3, 255.0, 256.0, 258, 259, &points[i][0]);

    // Draw the curve
    glBegin(GL_POINTS);  // Use GL_LINE_STRIP instead to fill the gaps
    {
      for (int i = 0; i < 100; i++) {
        glEvalCoord1f(((float) i) / 100.0);
      }
    }
    glEnd();
  }
}

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
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
