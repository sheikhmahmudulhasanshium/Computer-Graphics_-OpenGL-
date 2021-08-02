#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;



float _move = 0.0f;
void drawScene() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3d(1,0,0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);



 glPushMatrix();
glTranslatef(0.0, _move, 0.0f);
glBegin(GL_QUADS);//body
glVertex2f(0.1f, 0.0f);
glVertex2f(0.5f, 0.0f);
glVertex2f(0.5f, 0.5f);
glVertex2f(0.1f, 0.5);
glEnd();
glBegin(GL_TRIANGLES);//head
glColor3ub(0,255,0);
glVertex2f(0.5f, 0.5f);
glVertex2f(0.3f,0.8f);
glVertex2f(0.1f, 0.5);
glEnd();
glBegin(GL_TRIANGLES);//right-fin
glVertex2f(0.5f, 0.0f);
glVertex2f(0.5f, 0.1f);
glVertex2f(0.53f, 0.0f);
glEnd();
glBegin(GL_TRIANGLES);//left-fin
glVertex2f(0.1f, 0.0f);
glVertex2f(0.1f, 0.1f);
glVertex2f(0.07f, 0.0f);
glEnd();
glPopMatrix();
glutSwapBuffers();
}



void update(int value) {



 _move += .02;
if(_move > 1.3)
{
_move = -1.0;
}
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}



int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Transformation");
glutDisplayFunc(drawScene);
gluOrtho2D(-2,2,-2,2);
glutTimerFunc(20, update, 0); //Add a timer
glutMainLoop();
return 0;
}
