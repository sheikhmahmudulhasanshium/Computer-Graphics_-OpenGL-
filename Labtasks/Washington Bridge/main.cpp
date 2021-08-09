#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
#include<cstdio>
#include <GL/gl.h>
# define PI           3.14159265358979323846 //For circle

void rainView();

GLfloat rainPos = 0.0f;
GLfloat rainSpd = 0.05f;
void Circlerain(GLfloat a, GLfloat b, GLdouble r,int R,int G,int B);
void rainFall();
void rainAnimation(int value);

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320, 320);

    glutDisplayFunc(rainView);

    glutTimerFunc(100, rainAnimation, 0);

    glutMainLoop();

    return 0;
}

void rainView()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glTranslatef(0,rainPos,0);
    rainFall();
    glPopMatrix();

    glFlush();
}
void Circlerain(GLfloat a, GLfloat b, GLdouble r,int R,int G,int B)
{
    int i;

    GLfloat x=a;
    GLfloat y=b;
    GLdouble radius =r;
    int triangleAmount = 60;

    GLfloat twicePi = 0.2f * PI;

    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(R, G, B);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * sin(i *  twicePi / triangleAmount)),
            y + 2*(radius * cos(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void rainAnimation(int value)
{

    if(rainPos <-5)
        rainPos = -4;

    rainPos -= rainSpd;

    glutPostRedisplay();


    glutTimerFunc(100, rainAnimation, 0);
}

void rainFall()
{
    //Circlerain(0,-0.5,0.01,190, 217, 244);'

    int cnt = 0;
    float posY = 0.99;

    for(int i=0; i<100; i++)
    {
        float posX = -1.5;

        for(int j=0; j<15; j++)
        {
            if(cnt%4==0)
            {
                posX +=0.33;
            }
            else if(cnt%3==0)
            {
                posX +=0.25;
            }
            else
            {
                posX +=0.15;
            }
            Circlerain(posX,posY,0.008,240, 240, 240);
            Circlerain(posX,posY,0.005,198, 222, 245);


            cnt++;

        }
        posY +=0.2;

    }

}

