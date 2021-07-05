#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(40.0);
// Draw a Red 1x1 Square centered at origin
glColor3ub(0.0f,0.0f,0.0f);//black
glBegin(GL_LINES);


glVertex2f(0.0f,0.0f);
glVertex2f(5.0f,0.0f);

glVertex2f(5.0f,0.0f);
glVertex2f(5.0f,7.0f);

glVertex2f(5.0f,7.0f);
glVertex2f(0.0f,7.0f);

glVertex2f(0.0f,7.0f);
glVertex2f(0.0f,0.0f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(255.0f,0.0f,0.0f);//red
glVertex2f(0.0f,0.0f);
glVertex2f(5.0f,0.0f);
glVertex2f(5.0f,1.0f);
glVertex2f(0.0f,1.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(	255, 127, 0);//orange
glVertex2f(0.0f,1.0f);
glVertex2f(5.0f,1.0f);
glVertex2f(5.0f,2.0f);
glVertex2f(0.0f,2.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(	255, 255, 0);//yellow
glVertex2f(0.0f,2.0f);
glVertex2f(5.0f,2.0f);
glVertex2f(5.0f,3.0f);
glVertex2f(0.0f,3.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 255, 0);//Green
glVertex2f(0.0f,3.0f);
glVertex2f(5.0f,3.0f);
glVertex2f(5.0f,4.0f);
glVertex2f(0.0f,4.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 255);//blue
glVertex2f(0.0f,4.0f);
glVertex2f(5.0f,4.0f);
glVertex2f(5.0f,5.0f);
glVertex2f(0.0f,5.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(75, 0, 130);//indigo
glVertex2f(0.0f,5.0f);
glVertex2f(5.0f,5.0f);
glVertex2f(5.0f,6.0f);
glVertex2f(0.0f,6.0f);
glEnd();

glBegin(GL_QUADS);
glColor3ub(148, 0, 211);//violate
glVertex2f(0.0f,6.0f);
glVertex2f(5.0f,6.0f);
glVertex2f(5.0f,7.0f);
glVertex2f(0.0f,7.0f);
glEnd();

glBegin(GL_LINES);
glPointSize(40.0);
glColor3ub(0,0,0);
glVertex2f(0.0f,1.0f);
glVertex2f(5.0f,1.0f);

glVertex2f(0.0f,2.0f);
glVertex2f(5.0f,2.0f);

glVertex2f(0.0f,3.0f);
glVertex2f(5.0f,3.0f);

glVertex2f(0.0f,4.0f);
glVertex2f(5.0f,4.0f);

glVertex2f(0.0f,5.0f);
glVertex2f(5.0f,5.0f);

glVertex2f(0.0f,6.0f);
glVertex2f(5.0f,6.0f);
glEnd();
 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Rainbow Flag"); // Create a window with the given title
glutInitWindowSize(320, 320);
gluOrtho2D(-2.0,10.0,-2.0,10.0);
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
