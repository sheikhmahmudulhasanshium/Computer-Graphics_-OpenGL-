#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void StreetLight() {

float x=10,y=10;//Scale

glutInitWindowSize(320,320);
gluOrtho2D(-20,20,-20,20);
glPointSize(200);
glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to violate and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(200.0);
// Draw a Red 1x1 Square centered at origin
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-pillar
glVertex2f(-(0.1*x),(0.0*y));
glVertex2f((0.1*x),(0.0*y));
glVertex2f((0.1*x),(8.0*y));
glVertex2f(-(0.1*x),(8.0*y));
glEnd();
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p1
glVertex2f(-(0.1*x),(8.0*y));
glVertex2f((0.1*x),(7.8*y));
glVertex2f((0.9*x),(9.3*y));
glVertex2f((0.7*x),(9.5*y));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f((0.7*x),(9.5*y));
glVertex2f((0.9*x),(9.3*y));
glVertex2f((2.0*x),(9.3*y));
glVertex2f((1.8*x),(9.5*y));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f((2.0*x),(9.3*y));
glVertex2f((2.0*x),(9.0*y));
glVertex2f((1.3*x),(9.0*y));
glVertex2f((1.3*x),(9.3*y));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255.0f,255.0f,0.0f);//bright-yellow-light
glVertex2f((1.3*x),(9.0*y));
glVertex2f((1.5*x),(8.6*y));
glVertex2f((1.8*x),(8.5*y));
glVertex2f((2.0*x),(9.0*y));
glEnd();


glColor3ub(67.0f,	75.0f,	75.0f);//steel-blue-pillar

glBegin(GL_QUADS);
glVertex2f(-(0.3*x),(0.0*y));
glVertex2f((0.3*x),(0.0*y));
glVertex2f((0.2*x),(1.5*y));
glVertex2f(-(0.2*x),(1.5*y));

glEnd();

glColor3ub(1.0f,1.0f,1.0f);
glBegin(GL_LINES);
glVertex2f(-(5.0*x),(0.0*y));
glVertex2f((5.0*x),(0.0*y));
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
