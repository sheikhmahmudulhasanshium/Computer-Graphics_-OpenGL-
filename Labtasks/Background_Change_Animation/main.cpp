#include <Windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cstdio>

void display()
{

    float red = ((double)rand() / (RAND_MAX));

    float green = ((double)rand() / (RAND_MAX));
    float blue = ((double)rand() / (RAND_MAX));

    glClearColor(red, green, blue, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glFlush();
}

void updateColor(int a)
{

    glutDisplayFunc(display);

    glutPostRedisplay();
    glutTimerFunc(20, updateColor, 0);
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Background Color Change");
    glutDisplayFunc(display);
    glutTimerFunc(20, updateColor, 0);
    glutMainLoop();
    return 0;
}
