#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


void BatFirstQuadrant(float Batx,float Baty,float Bata,float Batb)
{

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+4.0)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+7.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+7.5)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle-finger
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(3.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+6.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-quads
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+1.5)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+5.0)));
    glVertex2f((Bata*(3.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();


    glBegin(GL_POLYGON);//ear
    glColor3ub(0,0,0);
    glVertex2f((Bata*(1.0+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+5.0)));
    glEnd();

}
void BatSecondQuadrant(float Batx,float Baty,float Bata,float Batb)
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+4.0)));
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle-finger
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(-3.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+6.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+7.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+7.5)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-Quads
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+1.5)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+5.0)));
    glVertex2f((Bata*(-3.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();

    glBegin(GL_POLYGON);//ear
    glColor3ub(0,0,0);
    glVertex2f((Bata*(-1.0+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+5.0)));
    glEnd();
}

void BatThirdQuadrant(float Batx,float Baty,float Bata,float Batb)
{


    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+-8.0)));//tail
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+-2.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+-7.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-7.5)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-Quads
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-2.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-triangle
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-1.5)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-5.0)));
    glVertex2f((Bata*(3.0+Batx)),(Batb*(Baty+-1.5)));
    glEnd();
}

void BatFourthQuadrant(float Batx,float Baty,float Bata,float Batb)
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+-8.0)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+-2.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+-7.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-7.5)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-Quads
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-2.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-triangle
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-1.5)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-5.0)));
    glVertex2f((Bata*(-3.0+Batx)),(Batb*(Baty+-1.5)));
    glEnd();

}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Bat() {
float Batx=1,Baty=1;
float Bata=1,Batb=1;
BatFirstQuadrant(Batx,Baty,Bata,Batb);
BatSecondQuadrant(Batx,Baty,Bata,Batb);
BatThirdQuadrant(Batx,Baty,Bata,Batb);
BatFourthQuadrant(Batx,Baty,Bata,Batb);


 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Batman Logo"); // Create a window with the given title
glutInitWindowSize(320, 320);
gluOrtho2D(-12.0,12.0,-12.0,12.0);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(50.0);
glColor3ub(0.0f,0.0f,0.0f);//black
glutDisplayFunc(Bat); // Register display callback handler for window re-paint
//glutDisplayFunc(FirstQuadrant);
glutMainLoop(); // Enter the event-processing loop
return 0;
}
