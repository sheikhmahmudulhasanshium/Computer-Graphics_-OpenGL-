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

void blades()
{
    glBegin(GL_POLYGON);          //blade
    glColor3ub(0, 0,0);
    glVertex2f(257, 370);
    glVertex2f(267, 430);
    glVertex2f(284, 490);
    glVertex2f(280, 430);
    glVertex2f(261, 363);
    glEnd();

}
void windmill()
{
    glBegin(GL_QUADS);          //body
    glColor3ub(55, 25, 55);
    glVertex2f(250,50);
    glVertex2f(260, 50);
    glVertex2f(257, 350);
    glVertex2f(253, 350);
    glEnd();


glPushMatrix();

    glTranslatef(255, 360, 0);
    glRotatef(_angle1, 0.0f, 0.0f, 1.0f);
    glTranslatef(-255, -360, 0);


    blades();//1st
    glPushMatrix();
    glTranslatef(255, 360, 0);
    glRotatef(120, 0.0f, 0.0f, 1.0f);
    glTranslatef(-255, -360, 0);
    blades();//2nd
    glPopMatrix();


    glPushMatrix();
    glTranslatef(255, 360, 0);
    glRotatef(240, 0.0f, 0.0f, 1.0f);
    glTranslatef(-255, -360, 0);
    blades();   //3rd blade
    glPopMatrix();


glPopMatrix();

}
void update(int value)
{

    // std::cout << "updated called";

    _angle1 -= 1.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

void circle(int xx, int yy, float r)
{

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin

    for (int i = 0; i < 200; i++)
    {
        // glColor3ub(255, 215, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        // float r = 4.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();
}

void display()
{
    glClearColor(0.2f, 0.4f, 0.93f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    windmill();
  //  CarForward();
    circle(255, 360, 10);

    glFlush(); // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutInitWindowSize(1040, 800);     // Set the window's initial width & height
    glutCreateWindow("Windmill Animation"); // Create a window with the given title

    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(display);     // Register display callback handler for window re-paint
   glutTimerFunc(20, update, 0); //Add a timer
    glutMainLoop();               // Enter the event-processing loop
    return 0;
}
