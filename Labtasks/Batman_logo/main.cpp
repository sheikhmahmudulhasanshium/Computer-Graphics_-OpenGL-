#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
void Border()
{
    /*
    glBegin(GL_LINES);//axis
    glVertex2f(-12.0f,0.0f);
    glVertex2f(12.0f,0.0f);
    glVertex2f(0.0f,-12.0f);
    glVertex2f(0.0f,12.0f);
    glEnd();*/

    glBegin(GL_POLYGON);//hexagonal-border
    glPointSize(400);
    glVertex2f(0.0f,0.0f);//1st-quadrant
    glVertex2f(11.0f,0.0f);
    glVertex2f(11.0f,3.0f);
    glVertex2f(9.0f,9.0f);
    glVertex2f(0.0f,9.0f);

    glVertex2f(0.0f,0.0f);//2nd-quadrant
    glVertex2f(-11.0f,0.0f);
    glVertex2f(-11.0f,3.0f);
    glVertex2f(-9.0f,9.0f);
    glVertex2f(0.0f,9.0f);

    glVertex2f(0.0f,0.0f);//3rd-quadrant
    glVertex2f(11.0f,0.0f);
    glVertex2f(11.0f,-3.0f);
    glVertex2f(9.0f,-9.0f);
    glVertex2f(0.0f,-9.0f);

    glVertex2f(0.0f,0.0f);//3rd-quadrant
    glVertex2f(-11.0f,0.0f);
    glVertex2f(-11.0f,-3.0f);
    glVertex2f(-9.0f,-9.0f);
    glVertex2f(0.0f,-9.0f);
    glEnd();
}
void FirstQuadrant()
{


    glBegin(GL_POLYGON);//1st Quadrant
    glColor3ub(255,255,0);//RGB Yellow
    glVertex2f(0.0f,0.0f);
    glVertex2f(10.0f,0.0f);
    glVertex2f(10.0f,2.0f);
    glVertex2f(8.0f,8.0f);
    glVertex2f(0.0f,8.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.5f,0.0f);
    glVertex2f(1.5f,4.0f);
    glVertex2f(0.0f,4.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f(5.0f,0.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(9.0f,0.0f);
    glVertex2f(9.0f,2.0f);
    glVertex2f(7.0f,7.0f);
    glVertex2f(5.0f,7.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle-finger
    glVertex2f(5.0f,7.5f);
    glVertex2f(3.0f,7.5f);
    glVertex2f(5.0f,6.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-quads
    glVertex2f(1.5f,2.0f);
    glVertex2f(1.5f,0.0f);
    glVertex2f(5.0f,0.0f);
    glVertex2f(5.0f,1.5f);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle
    glVertex2f(5.0f,1.5f);
    glVertex2f(5.0f,5.0f);
    glVertex2f(3.0f,1.5f);
    glEnd();


    glBegin(GL_POLYGON);//ear
    glColor3ub(0,0,0);
    glVertex2f(1.0f,4.0);
    glVertex2f(1.5f,4.0f);
    glVertex2f(1.5f,5.0f);
    glEnd();

}
void SecondQuadrant()
{
    glBegin(GL_POLYGON);//1st Quadrant
    glColor3ub(255,255,0);//RGB Yellow
    glVertex2f(0.0f,0.0f);
    glVertex2f(-10.0f,0.0f);
    glVertex2f(-10.0f,2.0f);
    glVertex2f(-8.0f,8.0f);
    glVertex2f(0.0f,8.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.5f,0.0f);
    glVertex2f(-1.5f,4.0f);
    glVertex2f(0.0f,4.0f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle-finger
    glVertex2f(-5.0f,7.5f);
    glVertex2f(-3.0f,7.5f);
    glVertex2f(-5.0f,6.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f(-5.0f,0.0f);
    glVertex2f(-7.0f,0.0f);
    glVertex2f(-9.0f,0.0f);
    glVertex2f(-9.0f,2.0f);
    glVertex2f(-7.0f,7.0f);
    glVertex2f(-5.0f,7.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-Quads
    glVertex2f(-1.5f,2.0f);
    glVertex2f(-1.5f,0.0f);
    glVertex2f(-5.0f,0.0f);
    glVertex2f(-5.0f,1.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle
    glVertex2f(-5.0f,1.5f);
    glVertex2f(-5.0f,5.0f);
    glVertex2f(-3.0f,1.5f);
    glEnd();

    glBegin(GL_POLYGON);//ear
    glColor3ub(0,0,0);
    glVertex2f(-1.0f,4.0);
    glVertex2f(-1.5f,4.0f);
    glVertex2f(-1.5f,5.0f);
    glEnd();
}

void ThirdQuadrant()
{


    glBegin(GL_POLYGON);//1st Quadrant
    glColor3ub(255,255,0);//RGB Yellow
    glVertex2f(0.0f,0.0f);
    glVertex2f(10.0f,0.0f);
    glVertex2f(10.0f,-2.0f);
    glVertex2f(8.0f,-8.0f);
    glVertex2f(0.0f,-8.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f(0.0f,0.0f);
    glVertex2f(1.5f,0.0f);
    glVertex2f(1.5f,-4.0f);
    glVertex2f(0.0f,-8.0f);//tail
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f(5.0f,0.0f);
    glVertex2f(7.0f,0.0f);
    glVertex2f(9.0f,0.0f);
    glVertex2f(9.0f,-2.0f);
    glVertex2f(7.0f,-7.0f);
    glVertex2f(5.0f,-7.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-Quads
    glVertex2f(1.5f,-4.0f);
    glVertex2f(1.5f,0.0f);
    glVertex2f(5.0f,0.0f);
    glVertex2f(5.0f,-2.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-triangle
    glVertex2f(5.0f,-1.5f);
    glVertex2f(5.0f,-5.0f);
    glVertex2f(3.0f,-1.5f);
    glEnd();
}

void FourthQuadrant()
{


    glBegin(GL_POLYGON);//1st Quadrant
    glColor3ub(255,255,0);//RGB Yellow
    glVertex2f(0.0f,0.0f);
    glVertex2f(-10.0f,0.0f);
    glVertex2f(-10.0f,-2.0f);
    glVertex2f(-8.0f,-8.0f);
    glVertex2f(0.0f,-8.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f(0.0f,0.0f);
    glVertex2f(-1.5f,0.0f);
    glVertex2f(-1.5f,-4.0f);
    glVertex2f(0.0f,-8.0f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f(-5.0f,0.0f);
    glVertex2f(-7.0f,0.0f);
    glVertex2f(-9.0f,0.0f);
    glVertex2f(-9.0f,-2.0f);
    glVertex2f(-7.0f,-7.0f);
    glVertex2f(-5.0f,-7.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-Quads
    glVertex2f(-1.5f,-4.0f);
    glVertex2f(-1.5f,0.0f);
    glVertex2f(-5.0f,0.0f);
    glVertex2f(-5.0f,-2.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-triangle
    glVertex2f(-5.0f,-1.5f);
    glVertex2f(-5.0f,-5.0f);
    glVertex2f(-3.0f,-1.5f);
    glEnd();
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(50.0);
glColor3ub(0.0f,0.0f,0.0f);//black
Border();
FirstQuadrant();
SecondQuadrant();
ThirdQuadrant();
FourthQuadrant();


 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Batman Logo"); // Create a window with the given title
glutInitWindowSize(320, 320);
gluOrtho2D(-12.0,12.0,-12.0,12.0);
glutDisplayFunc(display); // Register display callback handler for window re-paint
//glutDisplayFunc(FirstQuadrant);
glutMainLoop(); // Enter the event-processing loop
return 0;
}
