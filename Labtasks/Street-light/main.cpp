#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void StreetLight() {
glutInitWindowSize(320,320);
gluOrtho2D(-5.0,5.0,-1.0,10.0);
glPointSize(200);
glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to violate and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(20.0);
// Draw a Red 1x1 Square centered at origin
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-pillar
glVertex2f(-0.1f,0.0f);
glVertex2f(0.1f,0.0f);
glVertex2f(0.1f,8.0f);
glVertex2f(-0.1f,8.0f);
glEnd();
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p1
glVertex2f(-0.1f,8.0f);
glVertex2f(0.1f,7.8f);
glVertex2f(0.9f,9.3f);
glVertex2f(0.7f,9.5f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f(0.7f,9.5f);
glVertex2f(0.9f,9.3f);
glVertex2f(2.0f,9.3f);
glVertex2f(1.8f,9.5f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f(2.0f,9.3f);
glVertex2f(2.0f,9.0);
glVertex2f(1.3f,9.0f);
glVertex2f(1.3f,9.3f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255.0f,255.0f,0.0f);//bright-yellow-light
glVertex2f(1.3f,9.0f);
glVertex2f(1.5f,8.6f);
glVertex2f(1.8f,8.5f);
glVertex2f(2.0f,9.0f);
glEnd();


glColor3ub(67.0f,	75.0f,	75.0f);//steel-blue-pillar

glBegin(GL_QUADS);
glVertex2f(-0.3f,0.0f);
glVertex2f(0.3f,0.0f);
glVertex2f(0.2f,1.5f);
glVertex2f(-0.2f,1.5f);

glEnd();

glColor3ub(1.0f,1.0f,1.0f);
glBegin(GL_LINES);
glVertex2f(-5.0f,0.0f);
glVertex2f(5.0f,0.0f);
glEnd();


 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Street Light"); // Create a window with the given title

glutDisplayFunc(StreetLight); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
