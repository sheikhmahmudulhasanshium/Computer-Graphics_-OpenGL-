#include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#include <iostream>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

int _angle1 = 0;

void init()
{
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
}

void CarTire()
{
    //Tires

    glBegin(GL_POLYGON); //tire-1
    glLineWidth(7.5);
    for (int i = 0; i < 200; i++)
    {

        glColor3ub(0, 0, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 2.5;
        float x = r * cos(A);
        float y = r * sin(A);
        //glVertex2f(x,y);
        glVertex2f((140 + (x * 5)), (93 + (y * 5)));
    }
    glEnd();
    //Point


    glBegin(GL_POLYGON);
    glLineWidth(7.5);
    for (int i = 0; i < 200; i++)
    {

        glColor3ub(168, 169, 173); //steel-cover
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.5;
        float x = (140 + (r * 5 * cos(A)));
        float y = (93 + (r * 5 * sin(A)));
        glVertex2f(x, y);
    }
    glEnd();


    //points
    glColor3f(1.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2f(140.0, 93.0);
    glVertex2f(140.0 + 5, 93.0);
    glVertex2f(140.0 - 5, 93.0);
    glVertex2f(140.0, 93.0 + 10);
    glVertex2f(140.0, 93.0 - 10);
    glEnd();
}
void CarBody()
{

    //glColor3f(0.1373, 0.5725, 0.5529); //body
    glColor3f(0.2, 0.95, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(240, 127);
    glVertex2f(240, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 127);
    glVertex2f(130, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON); //back-light
    glColor3ub(255, 0, 0);
    glVertex2f(110, 92);
    glVertex2f(115, 92);
    glVertex2f(115, 117);
    glVertex2f(110, 117);
    glEnd();

    glBegin(GL_POLYGON); //window
    glColor3ub(0, 0, 0);
    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(120, 127);
    glVertex2f(130, 127);
    glEnd();

    glBegin(GL_POLYGON); //window-Divider
    glColor3ub(192, 192, 192);
    glVertex2f(170, 152);
    glVertex2f(165, 152);
    glVertex2f(165, 127);
    glVertex2f(170, 127);
    glEnd();

    glBegin(GL_POLYGON); //roof-plate
    glColor3ub(168, 169, 173);

    glVertex2f(140, 152);
    glVertex2f(190, 152);
    glVertex2f(185, 157);
    glVertex2f(140, 157);
    glEnd();

    glBegin(GL_POLYGON); //window-holder-front
    glColor3ub(168, 169, 173);
    glVertex2f(190, 152);
    glVertex2f(215, 127);
    glVertex2f(210, 127);
    glVertex2f(185, 152);
    glEnd();

    glBegin(GL_POLYGON); //window-holder-back
    glColor3ub(168, 169, 173);
    glVertex2f(140, 157);
    glVertex2f(115, 127);
    glVertex2f(125, 127);
    glVertex2f(140, 152);
    glEnd();

    glBegin(GL_POLYGON); //foot-holder
    glColor3ub(168, 169, 173);
    glVertex2f(215, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 97);
    glVertex2f(215, 97);

    glEnd();

    glBegin(GL_POLYGON);      //mirror
    glColor3f(0.3, 0.9, 0.6); //body
    //glColor3ub(255,250,0);
    glVertex2f(211.5, 134.5);
    glVertex2f(204.5, 135.5);
    glVertex2f(203.5, 129);
    glVertex2f(210.5, 127);
    glEnd();
}

void fullCar()
{

    CarBody();

    // glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();

    glTranslatef(142.5, 95.5, 0);
    glRotatef(-_angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-142.5, -95.5, 0);
    CarTire();
    glPopMatrix();
    // glutSwapBuffers();

    glPushMatrix();
    glTranslatef(60, 0, 0);

    glTranslatef(142.5, 95.5, 0);
    glRotatef(-_angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-(142.5), -95.5, 0);
    CarTire();
    // CarTire();
    glPopMatrix();
}
void CarForward()
{
    glMatrixMode(GL_MODELVIEW);

    // init();
    glPushMatrix();

    glTranslatef(-100.5, 0, 0);
    //glTranslatef(_angle1 % 500, 0, 0);
    fullCar();

    glPopMatrix();

    glutSwapBuffers();
}
void update(int value)
{
    _angle1 += 5.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    CarForward();
    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1040, 800);     // Set the window's initial width & height
    glutCreateWindow("Car Animation"); // Create a window with the given title

    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(display);     // Register display callback handler for window re-paint
    glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();               // Enter the event-processing loop
    return 0;
}