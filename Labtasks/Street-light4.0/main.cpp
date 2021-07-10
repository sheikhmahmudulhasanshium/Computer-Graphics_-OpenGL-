#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void StreetLight() {

glClearColor(0.2f, 0.4f, 0.93f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
// Draw a Red 1x1 Square centered at origin
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(-240.0f, 48.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-pillar
glVertex2f(250,20);
glVertex2f(255,20);
glVertex2f(255,140);
glVertex2f(250,140);
glEnd();

glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-pillar-base-holder
glVertex2f(248,45);
glVertex2f(257,45);
glVertex2f(260,20);
glVertex2f(245,20);
glEnd();

glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p1
glVertex2f(250, 140);
glVertex2f(255, 140);
glVertex2f(270, 170);
glVertex2f(265, 170);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f(264,170);
glVertex2f(310,170);
glVertex2f(305,175);
glVertex2f(269,175);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p3
glVertex2f(285,170);
glVertex2f(285,165);
glVertex2f(310,165);
glVertex2f(310,170);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255.0f,255.0f,48);//bright-yellow-light
glVertex2f(285,165);
glVertex2f(310,165);
glVertex2f(300,155);
glVertex2f(290,158);
glEnd();


 glFlush(); // Render now
 glPopMatrix();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1040, 800);     // Set the window's initial width & height
    glutCreateWindow("Street-Light"); // Create a window with the given title

    gluOrtho2D(0,500,0,500);
    glutDisplayFunc(StreetLight);     // Register display callback handler for window re-paint
    glutMainLoop();               // Enter the event-processing loop
    return 0;
}