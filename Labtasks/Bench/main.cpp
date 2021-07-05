#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */


void plot()
{
    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
    glVertex2f(-10.0 ,0.0 );
    glVertex2f(10.0 ,0.0 );
    glVertex2f(0.0 ,-0.0 );
    glVertex2f(0.0 ,10.0 );
    glEnd();

}
void LeftSide()
{
    glColor3ub(128.0f, 0.0f, 32.0f);
    glBegin(GL_QUADS);//base-rod
    glVertex2f(-5.0 ,0.0 );
    glVertex2f(-4.3 ,0.0 );
    glVertex2f(-4.3 ,3.5 );
    glVertex2f(-5.0 ,3.5 );
    glEnd();

    glBegin(GL_TRIANGLES);//base-angle
    glVertex2f(-4.3 ,2.5 );
    glVertex2f(-6.0 ,4.0 );
    glVertex2f(-4.3 ,4.0 );
    glEnd();

    glBegin(GL_QUADS);//upper-rod
    glVertex2f(-5.0 ,3.0 );
    glVertex2f(-4.3 ,3.0 );
    glVertex2f(-4.3 ,10.0 );
    glVertex2f(-4.9 ,10.0f );
    glEnd();

    glColor3ub(218.0f, 160.0f, 109.0f);
    glBegin(GL_QUADS);//seat
    glVertex2f(-6.8 ,4.0 );
    glVertex2f(-0.0 ,4.0 );
    glVertex2f(-0.0 ,4.5 );
    glVertex2f(-7.0 ,4.5 );
    glEnd();

    glBegin(GL_QUADS);//base-rod-holder
    glColor3ub(0,0,0);
    glVertex2f(-5.3 ,0.0 );
    glVertex2f(-4.0 ,0.0 );
    glVertex2f(-4.3 ,1.5 );
    glVertex2f(-5.0 ,1.5 );
    glEnd();

    float  x=0,y=0;
    float x1=6.0,y1=5.0,x2=0.0,y2=5.5;
    for(int i=0;i<10;i++)
    {


        if(i%2==0)
        {

            glBegin(GL_QUADS);
            glColor3ub(255.0f, 195.0f, 0.0f);
            glVertex2f(-(x1+x) ,(y1+y) );
            glVertex2f(-(x2+x) ,(y1+y) );
            glVertex2f(-(x2+x) ,(y2+y) );
            glVertex2f(-(x1+x) ,(y2+y) );
            glEnd();
            ++y;
        }

    }


}
void RightSide()
{
    glColor3ub(128.0f, 0.0f, 32.0f);
    glBegin(GL_QUADS);//base-rod
    glVertex2f(5.0 ,0.0 );
    glVertex2f(4.3 ,0.0 );
    glVertex2f(4.3 ,3.5 );
    glVertex2f(5.0 ,3.5 );
    glEnd();

    glBegin(GL_TRIANGLES);//base-angle
    glVertex2f(4.3 ,2.5 );
    glVertex2f(6.0 ,4.0 );
    glVertex2f(4.3 ,4.0 );
    glEnd();

    glBegin(GL_QUADS);//upper-rod
    glVertex2f(5.0 ,3.0 );
    glVertex2f(4.3 ,3.0 );
    glVertex2f(4.3 ,10.0 );
    glVertex2f(4.9 ,10.0 );
    glEnd();

    glColor3ub(218.0f, 160.0f, 109.0f);
    glBegin(GL_QUADS);//seat
    glVertex2f(6.8 ,4.0 );
    glVertex2f(0.0 ,4.0 );
    glVertex2f(0.0 ,4.5 );
    glVertex2f(7.0 ,4.5 );
    glEnd();

    glBegin(GL_QUADS);//base-rod-holder
    glColor3ub(0,0,0);

    glVertex2f(5.3 ,0.0 );
    glVertex2f(4.0 ,0.0 );
    glVertex2f(4.3 ,1.5 );
    glVertex2f(5.0 ,1.5 );
    glEnd();
    float x=0,y=0;
    float x1=6.0,y1=5.0,x2=0.0,y2=5.5;
    for(int i=0;i<10;i++)
    {


        if(i%2==0)
        {

            glBegin(GL_QUADS);
            glColor3ub(255.0f, 195.0f, 0.0f);
            glVertex2f((x1+x),(y1+y));
            glVertex2f((x2+x),(y1+y));
            glVertex2f((x2+x),(y2+y));
            glVertex2f((x1+x),(y2+y));
            glEnd();
            ++y;
        }

    }


}
void Body()
{

    glColor3ub(210.0f,105.0,30.0);//RGB Chocholate
    LeftSide();
    RightSide();
    glFlush();  // Render now

}
void Bench() {
glutInitWindowSize(320 ,320 );
gluOrtho2D(-20.0 ,20.0 ,-20.0,20.0 );
glPointSize(200);

glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to violate and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(200.0);
//plot();

Body();


 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Bench"); // Create a window with the given title

glutDisplayFunc(Bench); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
