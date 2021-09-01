#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

float _move1 = -1.0f;
float _move2 = 1.0f;

void box_1()
{
glColor3d(1,0,0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move1, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2f(0.1f, 0.0f);
glVertex2f(0.5f, 0.0f);
glVertex2f(0.5f, 0.2f);
glVertex2f(0.1f, 0.2);
glEnd();
glPopMatrix();
}

void update_top(int value)
{
_move1 += .02;
if(_move1 > 1.5)
{
_move1 = -1;
}
glutPostRedisplay();
glutTimerFunc(10, update_top, 0);
}

void box_2()
{
glColor3ub(0,230,250);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move2, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2f(0.1f, -0.2f);
glVertex2f(0.5f, -0.2f);
glVertex2f(0.5f, -0.4f);
glVertex2f(0.1f, -0.4);
glEnd();
glPopMatrix();
}

void update_bottom(int value)
{
_move2 -= .02;
if(_move2 < -1)
{
_move2 = 1;
}
glutPostRedisplay();
glutTimerFunc(2, update_bottom, 0);
}

void Combined()
{
glClear(GL_COLOR_BUFFER_BIT);
glClearColor(1,1,1,0);
box_1();
box_2();
glutSwapBuffers();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
//gluOrtho2D(-2,2,-2,2);
glutInitWindowSize(1040, 680);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutCreateWindow("Transformation");
glutDisplayFunc(Combined);
glutTimerFunc(20, update_top, 0);
glutTimerFunc(2, update_bottom, 0);//Add a timer
glutMainLoop();
return 0;
}