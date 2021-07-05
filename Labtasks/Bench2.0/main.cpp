#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void plot(float x,float y)
{
    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
    glVertex2f(-(10.0*x),(0.0*y));
    glVertex2f((10.0*x),(0.0*y));
    glVertex2f((0.0*x),-(10.0*y));
    glVertex2f((0.0*x),(10.0*y));
    glEnd();

}
void LeftSide(float x,float y)
{
    glColor3ub(128.0f, 0.0f, 32.0f);
    glBegin(GL_QUADS);//base-rod
    glVertex2f(-(5.0*x),(0.0*y));
    glVertex2f(-(4.3*x),(0.0*y));
    glVertex2f(-(4.3*x),(3.5*y));
    glVertex2f(-(5.0*x),(3.5*y));
    glEnd();

    glBegin(GL_TRIANGLES);//base-angle
    glVertex2f(-(4.3*x),(2.5*y));
    glVertex2f(-(6.0*x),(4.0*y));
    glVertex2f(-(4.3*x),(4.0*y));
    glEnd();

    glBegin(GL_QUADS);//upper-rod
    glVertex2f(-(5.0*x),(3.0*y));
    glVertex2f(-(4.3*x),(3.0*y));
    glVertex2f(-(4.3*x),(10.0*y));
    glVertex2f(-(4.9*x),(10.0f*y));
    glEnd();

    glColor3ub(218.0f, 160.0f, 109.0f);
    glBegin(GL_QUADS);//seat
    glVertex2f(-(6.8*x),(4.0*y));
    glVertex2f(-(0.0*x),(4.0*y));
    glVertex2f(-(0.0*x),(4.5*y));
    glVertex2f(-(7.0*x),(4.5*y));
    glEnd();

    glBegin(GL_QUADS);//base-rod-holder
    glColor3ub(0,0,0);
    glVertex2f(-(5.3*x),(0.0*y));
    glVertex2f(-(4.0*x),(0.0*y));
    glVertex2f(-(4.3*x),(1.5*y));
    glVertex2f(-(5.0*x),(1.5*y));
    glEnd();

    float  p=0,q=0;
    float x1=6.0,y1=5.0,x2=0.0,y2=5.5;
    for(int i=0;i<10;i++)
    {


        if(i%2==0)
        {

            glBegin(GL_QUADS);
            glColor3ub(255.0f, 195.0f, 0.0f);
            glVertex2f((-(x1+p)*x),((y1+q)*y));
            glVertex2f((-(x2+p)*x),((y1+q)*y));
            glVertex2f((-(x2+p)*x),((y2+q)*y));
            glVertex2f((-(x1+p)*x),((y2+q)*y));
            glEnd();
            ++q;
        }

    }


}
void RightSide(float x,float y)
{
    glColor3ub(128.0f, 0.0f, 32.0f);
    glBegin(GL_QUADS);//base-rod
    glVertex2f((5.0*x),(0.0*y));
    glVertex2f((4.3*x),(0.0*y));
    glVertex2f((4.3*x),(3.5*y));
    glVertex2f((5.0*x),(3.5*y));
    glEnd();

    glBegin(GL_TRIANGLES);//base-angle
    glVertex2f((4.3*x),(2.5*y));
    glVertex2f((6.0*x),(4.0*y));
    glVertex2f((4.3*x),(4.0*y));
    glEnd();

    glBegin(GL_QUADS);//upper-rod
    glVertex2f((5.0*x),(3.0*y));
    glVertex2f((4.3*x),(3.0*y));
    glVertex2f((4.3*x),(10.0*y));
    glVertex2f((4.9*x),(10.0*y));
    glEnd();

    glColor3ub(218.0f, 160.0f, 109.0f);
    glBegin(GL_QUADS);//seat
    glVertex2f((6.8*x),(4.0*y));
    glVertex2f((0.0*x),(4.0*y));
    glVertex2f((0.0*x),(4.5*y));
    glVertex2f((7.0*x),(4.5*y));
    glEnd();

    glBegin(GL_QUADS);//base-rod-holder
    glColor3ub(0,0,0);

    glVertex2f((5.3*x),(0.0*y));
    glVertex2f((4.0*x),(0.0*y));
    glVertex2f((4.3*x),(1.5*y));
    glVertex2f((5.0*x),(1.5*y));
    glEnd();

    float x1=6.0,y1=5.0,x2=0.0,y2=5.5;
    float  p=0,q=0;

    for(int i=0;i<10;i++)
    {


        if(i%2==0)
        {

            glBegin(GL_QUADS);
            glColor3ub(255.0f, 195.0f, 0.0f);
            glVertex2f(((x1+p)*x),((y1+q)*y));
            glVertex2f(((x2+p)*x),((y1+q)*y));
            glVertex2f(((x2+p)*x),((y2+q)*y));
            glVertex2f(((x1+p)*x),((y2+q)*y));
            glEnd();
            ++q;
        }

    }


}
void Body(float x,float y)
{

    glColor3ub(210.0f,105.0,30.0);//RGB Chocholate
    LeftSide(x,y);
    RightSide(x,y);
    glFlush();  // Render now

}
void Bench() {
float x=10,y=10;  //Scale or ratio of bench
glutInitWindowSize(320,320);
gluOrtho2D(-20,20,-20,20);
glPointSize(200);

glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to violate and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(100.0);
//plot(x,y);

Body(x,y);


 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Bench-2.0"); // Create a window with the given title

glutDisplayFunc(Bench); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
