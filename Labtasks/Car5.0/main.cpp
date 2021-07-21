#include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

int _CarMoveForward = 0;

void init()
{
    glLoadIdentity();
    gluOrtho2D(0, 500, 0, 500);
}
float TireRotateAngle = 0.0f;
void CarTire(int xx, int yy, float r)
{
    glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
glTranslatef(0.0f,0.0f,0.0f);
glRotatef(TireRotateAngle, 0.0f, 0.0f,1.0f);
glTranslatef(-0.0f,-0.0f,0.0f);
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
    glBegin(GL_LINES);
    glColor3ub(0,0,0);//black-rim
    glVertex2f(-0.075,0);
    glVertex2f(0.075,0);

    glVertex2f(-0.05,-0.075);
    glVertex2f(0.05,0.075);

    glVertex2f(0.05,-0.075);
    glVertex2f(-0.05,0.075);

    glVertex2f(0,-0.1);
    glVertex2f(0,0.1);

    glEnd();

    glPopMatrix();

}
void ScaledTire()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(140.1,95,0);
    glScalef(80,80,0);
    glColor3ub(0,0,0);//black-tire
    CarTire(0, 0, 0.2);
    glColor3ub(192,192,192);//silver-tire-rim
    CarTire(0,0,0.13);
    glColor3ub(211,211,255);//grey-tire-rim
    CarTire(0,0,0.09);
    glPopMatrix();
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
    glVertex2f(242, 92);
    glVertex2f(110, 92);
    glVertex2f(110, 97);
    glVertex2f(242, 97);

    glEnd();

    glBegin(GL_POLYGON);      //mirror
    glColor3f(0.3, 0.9, 0.6); //body
    //glColor3ub(255,250,0);
    glVertex2f(211.5, 134.5);
    glVertex2f(204.5, 135.5);
    glVertex2f(203.5, 129);
    glVertex2f(210.5, 127);
    glEnd();

    glBegin(GL_POLYGON);      //Yellow-headlight
    glColor3f(1.0, 1.0, 0.0); //body
    //glColor3ub(255,250,0);
    glVertex2f(210.5+28, 134.5-10);
    glVertex2f(203.5+28, 135.5-10);
    glVertex2f(203.5+28, 129-10);
    glVertex2f(210.5+28, 127-10);
    glEnd();

    glBegin(GL_POLYGON); //window-opener-1
    glColor3ub(192, 192, 192);
    glVertex2f(150-15-5, 127-5-3);
    glVertex2f(155-5-5, 127-5-3);
    glVertex2f(155-5-5, 129-5);
    glVertex2f(150-15-5, 129-5);
    glEnd();
    glBegin(GL_POLYGON); //window-opener-2
    glColor3ub(192, 192, 192);
    glVertex2f(150-15+40, 127-5-3);
    glVertex2f(155-5+40, 127-5-3);
    glVertex2f(155-5+40, 129-5);
    glVertex2f(150-15+40, 129-5);
    glEnd();
}
void CarThrust()
{
    glBegin(GL_POLYGON);
    glColor3ub(168, 169, 173);
    glVertex2f(110, 92);
    glColor3ub(255, 255, 255);
    glVertex2f(00, 80);
    glVertex2f(00, 110);
    glColor3ub(0, 0, 0);
    glVertex2f(110, 97);
    glEnd();

}
void fullCar()
{
    CarThrust();
    CarBody();
    ScaledTire();
    glPushMatrix();
    glTranslatef(65,0,0);
    ScaledTire();
    glPopMatrix();

}
void CarForward()
{
    glLineWidth(1);
    //glMatrixMode(GL_MODELVIEW);

     //init();
    //glPushMatrix();

    glTranslatef(-100.5, 0, 0);
    //glTranslatef(_CarMoveForward % 500, 0, 0);
    fullCar();

   // glPopMatrix();

    //glutSwapBuffers();
}
void ScaledCarForward()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.5,0.5,0);
    CarForward();
    glPopMatrix();

}
void MovingScaledCarForward()
{
    glMatrixMode(GL_MODELVIEW);

     //init();
    glPushMatrix();
    //glTranslatef(-100.5, 0, 0);
    glTranslatef(_CarMoveForward % 550, 0, 0);

    ScaledCarForward();
    glPopMatrix();
    //glutSwapBuffers();
}
void TireRotate(int value)
{
    TireRotateAngle-= 5.0f;
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(05, TireRotate, 0); //Notify GLUT to call update again in 25 milliseconds
}
void MoveCarForward(int value) {



 _CarMoveForward += 1;

glutPostRedisplay();
glutTimerFunc(20, MoveCarForward, 0);
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    MovingScaledCarForward();
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
    glutTimerFunc(20, TireRotate, 0); //Add a timer
    glutTimerFunc(20, MoveCarForward, 0);
    glutMainLoop();               // Enter the event-processing loop
    return 0;
}
