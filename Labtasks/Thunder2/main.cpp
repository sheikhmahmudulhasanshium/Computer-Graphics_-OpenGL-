 #include <Windows.h>

#include <cstdio>

#include <GL/gl.h>

#include <GL/glut.h>

#include <iostream>

void ThunderInverse()
{
    //glColor3ub(255,255,0);
    glBegin(GL_POLYGON);//maroon-log-p-1
    glVertex2f(250,250);
    glVertex2f(240,300);
    glVertex2f(260,300);
    glVertex2f(270,250);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-2
    glVertex2f(240,300);
    glVertex2f(260,300);
    glVertex2f(280,350);
    glVertex2f(270,355);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-3
    glVertex2f(280,350);
    glVertex2f(270,355);
    glVertex2f(260,390);
    glVertex2f(270,395);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-4
    glVertex2f(260,390);
    glVertex2f(270,395);
    glVertex2f(280,450);
    glVertex2f(275,435);
    glEnd();
}
void Thunder()
{
   // ThunderInverse();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(250,250,0);
    glScalef(-0.4,-0.4,0);
    glTranslatef(-250,-750,0);
    ThunderInverse();
    glPopMatrix();
}



void ob1();
void ob2(int a);


void object()

{
    Thunder();

}

void initialDisplay(int a)
{
    glutDisplayFunc(ob1);
    glutPostRedisplay();

}

void ob1()
{

    glClearColor(1, 1, 1, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(255,245,044 );//yellow
    Thunder();
    glFlush();
    glutTimerFunc(60, ob2, 0);

}


void ob2(int a)

{
    glClearColor(1, 1, 1, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    glColor3ub( 255,245, 189);
    Thunder();
    glutTimerFunc(60, initialDisplay, 0);

    glFlush();

}



void callback()

{
    glutDisplayFunc(ob1);
    glutPostRedisplay();

}

int main(int argc, char **argv)

{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("New display");
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(callback);
    glutMainLoop();
    return 0;

}
