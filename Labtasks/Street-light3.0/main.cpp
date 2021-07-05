#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Body(float x,float y,float a,float b) {
// Draw a Red 1x1 Square centered at origin
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-pillar
glVertex2f((a+(-0.1*x)),(b+(0.0*y)));
glVertex2f((a+(0.1*x)),(b+(0.0*y)));
glVertex2f((a+(0.1*x)),(b+(8.0*y)));
glVertex2f((a+(-0.1*x)),(b+(8.0*y)));
glEnd();
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p1
glVertex2f((a+(-0.1*x)),(b+(8.0*y)));
glVertex2f((a+(0.1*x)),(b+(7.8*y)));
glVertex2f((a+(0.9*x)),(b+(9.3*y)));
glVertex2f((a+(0.7*x)),(b+(9.5*y)));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f((a+(0.7*x)),(b+(9.5*y)));
glVertex2f((a+(0.9*x)),(b+(9.3*y)));
glVertex2f((a+(2.0*x)),(b+(9.3*y)));
glVertex2f((a+(1.8*x)),(b+(9.5*y)));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f((a+(2.0*x)),(b+(9.3*y)));
glVertex2f((a+(2.0*x)),(b+(9.0*y)));
glVertex2f((a+(1.3*x)),(b+(9.0*y)));
glVertex2f((a+(1.3*x)),(b+(9.3*y)));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255.0f,255.0f,0.0f);//bright-yellow-light
glVertex2f((a+(1.3*x)),(b+(9.0*y)));
glVertex2f((a+(1.5*x)),(b+(8.6*y)));
glVertex2f((a+(1.8*x)),(b+(8.5*y)));
glVertex2f((a+(2.0*x)),(b+(9.0*y)));
glEnd();


glColor3ub(67.0f,	75.0f,	75.0f);//steel-blue-pillar

glBegin(GL_QUADS);
glVertex2f((a+(-0.3*x)),(b+(0.0*y)));
glVertex2f((a+(0.3*x)),(b+(0.0*y)));
glVertex2f((a+(0.2*x)),(b+(1.5*y)));
glVertex2f((a+(-0.2*x)),(b+(1.5*y)));

glEnd();

glColor3ub(1.0f,1.0f,1.0f);
glBegin(GL_LINES);
glVertex2f((a+(-5.0*x)),(b+(0.0*y)));
glVertex2f((a+(5.0*x)),(b+(0.0*y)));
glEnd();

}

void StreetLight() {

float x=30,y=30;//Scale
float a=15,b=0;//Position
glutInitWindowSize(320,320);
gluOrtho2D(-20,20,-20,20);
glPointSize(200);
glClearColor(0, 0, 0,0); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(200.0);

Body(x,y,a,b);
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
