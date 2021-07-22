#include <Windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
int _move = 0;
bool ob1Move = false;
bool ob2Move = false;
bool ob3Move = false;
bool ob4Move = false;
void update(int value)
{

    _move += 2;
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(200, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

void ob1();
void ob2();
void ob3();
void ob4();

void initialDisplay(int a)
{

    glutDisplayFunc(ob1);
    glutPostRedisplay();
}

void ob1()
{
    glClearColor(1, 1, 1, 1.0f);
    // glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(155,145,244);
     glBegin(GL_QUADS);//Rectangle
    glVertex2i(30, 50);
    glVertex2i(30, 60);
    glVertex2i(50, 60);
    glVertex2i(50, 50);
    glEnd();


    // glutTimerFunc(10, ob2, 0);
}
void ob2()
{
    glClearColor(1, 1, 1, 1.0f);
    // glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(244,145,189);
     glBegin(GL_TRIANGLES);//Triangle
    glVertex2i(30, 70);
    glVertex2i(30, 90);
    glVertex2i(50, 80);
    glEnd();


    // glutTimerFunc(10, ob3, 0);
}
void ob3()
{
    glClearColor(1, 1, 1, 1.0f);
    // glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(244, 145, 244);

    glBegin(GL_POLYGON);//Semi-Circle
        for(int i=0;i<200;i++)
        {
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=10.85;
            float x = 70+r * cos(A);
            float y = 50+r * sin(A);
            glVertex2f(x,y );
        }

	glEnd();


    // glutTimerFunc(10, ob4, 0);
}
void ob4()
{
    glClearColor(1, 1, 1, 1.0f);
    // glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(155, 145, 189);

    glBegin(GL_POLYGON);//Pentagon
    glVertex2i(10, 50);
    glVertex2i(10, 60);
    glVertex2f(20,70);
    glVertex2i(30, 60);
    glVertex2i(30, 50);
    glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-30, 0, 0);
    glTranslatef(ob1Move ? 0 : _move % 100, 0, 0);
    ob1();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0, -10, 0);
    glTranslatef(ob2Move ? 0 : -(_move % 100), 0, 0);
    ob2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30, 0, 0);
    glTranslatef(0, ob3Move ? 0 : _move % 100, 0);
    ob3();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30, 0, 0);
    glTranslatef(0, ob4Move ? 0 : -(_move % 100), 0);
    ob4();
    glPopMatrix();
    glFlush();
}
void SpecialInput(int key, int x, int y)
{
    switch (key)
    {
    case GLUT_KEY_UP:
        //do something here
        ob1Move ^= true;
        // glutDisplayFunc(display);
        break;
    case GLUT_KEY_DOWN:
        ob2Move ^= true;
        // glutDisplayFunc(display2);
        break;
    case GLUT_KEY_LEFT:
        ob3Move ^= true;
        // glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        break;
    case GLUT_KEY_RIGHT:
        //do something here
        ob4Move ^= true;
        // glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

        break;
    }
    // glutPostRedisplay();
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Auto Bg Change");

    gluOrtho2D(0, 100, 0, 100);
    glutDisplayFunc(display);
    glutTimerFunc(200, update, 0); //Add a timer
                                   // init();

    glutSpecialFunc(SpecialInput);
    // glutKeyboardFunc(handleKeypress);
    // glutTimerFunc(20, callback, 0);
    // glutTimerFunc(100, update1, 0);
    glutMainLoop();
    return 0;
}
