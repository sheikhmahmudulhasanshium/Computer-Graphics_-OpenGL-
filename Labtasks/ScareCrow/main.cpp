#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
using namespace std;

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
//float _move = 15.0f;

void Face()
{
    glBegin(GL_POLYGON);
    for(int i=0;i<200;i++)
    {
        glColor3ub(160,82,45);//brown-pitcher
        float pi=3.1416;
        float A=(2*pi*i)/200;
        float r=25.5;
        float x=250+r*cos(A);
        float y=250+r*sin(A);
        glVertex2f(x,y);
    }
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(160,82,45);//brown-pitcher-neck
    glVertex2f(240,220);
    glVertex2f(260,220);
    glVertex2f(260,240);
    glVertex2f(240,240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);//black_eyes
    glVertex2f(250,250);
    glVertex2f(240,245);
    glVertex2f(235,270);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);//black_eyes
    glVertex2f(250,250);
    glVertex2f(260,245);
    glVertex2f(265,270);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);//white_mouth

    glVertex2f(240,238);
    glVertex2f(250,235);
    glVertex2f(260,238);
    glEnd();
}
void Skeleton()
{

    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // black-backbone
	glVertex2f(248.0f, 40.0f);    // x, y
	glVertex2f(248.0f, 230.0f);    // x, y
	glVertex2f(252.0f, 230.0f);    // x, y
	glVertex2f(252.0f, 40.0f);    // x, y
	glEnd();
    Face();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f); // yellow
	glVertex2f(160.0f, 190.0f);    // x, y
	glVertex2f(340.0f, 190.0f);    // x, y
	glVertex2f(340.0f, 170.0f);    // x, y
	glVertex2f(160.0f, 170.0f);    // x, y

	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // green-color
    glVertex2f(235.0f, 215.0f);    // x, y
    glVertex2f(265.0f, 215.0f);    // x, y
    glVertex2f(265.0f,200.0f);
    glVertex2f(235.0f,200.0f);    // x, y
	glEnd();


	glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 1.0f); // cyan-left-sleeves
    glVertex2f(220.0f, 200.0f);    // x, y
    glVertex2f(200.0f, 200.0f);    // x, y
    glVertex2f(200.0f,160.0f);
    glVertex2f(220.0f,160.0f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 1.0f); // cyan-right-sleeves
    glVertex2f(280.0f, 200.0f);    // x, y
    glVertex2f(300.0f, 200.0f);    // x, y
    glVertex2f(300.0f,160.0f);
    glVertex2f(280.0f,160.0f);    // x, y
	glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 1.0f); // cyan
    glVertex2f(285, 200);    // x, y
    glVertex2f(215, 200);    // x, y
    glVertex2f(215,100);
    glVertex2f(285,100);    // x, y
	glEnd();





}
void ScareCrow()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,0,0);
    glScalef(.5,0.5,0);
    Skeleton();
    glPopMatrix();
}
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.0f, 250.0f);    // x, y
	glVertex2f(500.0f,250.0f);    // x, y
	glVertex2f(250.0f, 0.0f);    // x, y
	glVertex2f(250.0f, 500.0f);    // x, y
	glEnd();

    ScareCrow();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
