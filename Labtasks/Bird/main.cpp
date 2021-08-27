#include<windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include <cstdio>
#include <iostream>



void wing1();

void wing2(int a);
void body(int a);

void Batbody()
{
   // glClearColor(1, 1, 1, 1.0f);
    //glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(44,45,89);

    glBegin(GL_POLYGON);//Rectangle
    glVertex2i(26, 50+20);
    glVertex2i(27, 60+20-6);
    glVertex2i(45, 60+20-8);
    glVertex2i(50, 50+20);
    glEnd();

    glBegin(GL_POLYGON);//ear
    //glVertex2i(26, 50+20);
    glVertex2i(27, 60+20-6);
    glVertex2i(29, 60+20-8);
    glVertex2f(27,76.5);
    //glVertex2i(50, 50+20);
    glEnd();
    glFlush();

}
void initialDisplay(int a)

{
    glutDisplayFunc(wing1);
    glutPostRedisplay();
}



void wing1()

{
    glClearColor(1, 1, 1, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(44,45,89);

     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(200,400,0);

    glBegin(GL_POLYGON);//Rectangle
    glVertex2i(30, 70);
    glVertex2i(30, 60);
    glVertex2i(50, 70);
    glEnd();

    Batbody();
    glPopMatrix();
    glFlush();



    glutTimerFunc(100, wing2, 0);

}

void wing2(int a)

{


    glClearColor(1, 1, 1, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3ub(44,45,89);
     glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(200,400,0);

    glBegin(GL_TRIANGLES);//Triangle
    glVertex2i(30, 70);
    glVertex2i(30, 90);
    glVertex2i(50, 70);
    glEnd();
    Batbody();
    glPopMatrix();
    glFlush();

    glutTimerFunc(200, initialDisplay, 0);

}





void UpdateWing()

{
    glutDisplayFunc(wing1);
    glutPostRedisplay();

}
void  scaledBat()
{
    //glutDisplayFunc(UpdateWing);
   // glPopMatrix();
}
int main(int argc, char **argv)

{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Object Change Animation");
    gluOrtho2D(0, 500, 0, 500);
    //scaledBat();
    glutDisplayFunc(UpdateWing);
    glutMainLoop();

    return 0;

}
