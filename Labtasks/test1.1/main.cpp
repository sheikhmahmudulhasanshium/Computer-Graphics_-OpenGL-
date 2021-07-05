#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(10.0);
// Draw a Red 1x1 Square centered at origin
glColor3ub(255.0f,34.0f,99.0f);
glBegin(GL_LINES);
glVertex2f(0.0f,0.0f);
glVertex2f(0.0f,2.0f);

glVertex2f(0.0f,2.0f);
glVertex2f(2.0f,2.0f);

glVertex2f(2.0f,2.0f);
glVertex2f(2.0f,0.0f);

glVertex2f(0.0f,0.0f);
glVertex2f(2.0f,0.0f);
glEnd();


glFlush(); // Render now
}


/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
glutInitWindowSize(320, 320);
gluOrtho2D(-5.0,5.0,-5.0,5.0);
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
