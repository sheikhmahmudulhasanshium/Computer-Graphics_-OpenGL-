#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void BoatBodyStick()//boitha
{
    glBegin(GL_LINES);
    glColor3ub(165,42,42);//brown-stick
    glVertex2f(210,75);
    glVertex2f(220,10);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);//brown-stick
    glVertex2f(218,20);
    glVertex2f(220,10);
    glVertex2f(230,10);
    glEnd();

}
void BoatBodyShell()
{
    glBegin(GL_POLYGON);
    glColor3ub(165,42,42);//brown-shell
    glVertex2f(120,30);
    glVertex2f(200,30);
    glVertex2f(195,55);
    glVertex2f(125,55);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,0);//yellow-shell-stripe-pattern
    glVertex2f(120,30);
    glVertex2f(200,30);

    glVertex2f(121,35);
    glVertex2f(199,35);

    glVertex2f(122,40);
    glVertex2f(198,40);

    glVertex2f(123,45);
    glVertex2f(197,45);

    glVertex2f(124,50);
    glVertex2f(196,50);

    glVertex2f(125,55);
    glVertex2f(195,55);


    glEnd();


}
void BoatBody()
{
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);//black-base
    glVertex2f(120,10);
    glVertex2f(200,10);
    glVertex2f(200,30);
    glVertex2f(120,30);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-front
    glVertex2f(120,10);
    glVertex2f(120,30);
    glVertex2f(80,40);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-back
    glVertex2f(200,10);
    glVertex2f(200,30);
    glVertex2f(240,40);
    glEnd();

    glBegin(GL_POLYGON);//yellow-inside-shape
    glColor3ub(255,255,0);
    glVertex2f(240,40);
    glVertex2f(80,40);
    glVertex2f(120,30);
    glVertex2f(200,30);
    glEnd();

    glBegin(GL_LINES);
    glColor3b(0,0,0);//black_stripe
    /*
    for(int i=0;i<4;i++)
    {
        int x1=205,y1=30,x2=200,y2=40,dx=5,dy=5;
    }*/

    glVertex2f(205,30);
    glVertex2f(200,40);

    glVertex2f(210,30);
    glVertex2f(205,40);

    glVertex2f(215,30);
    glVertex2f(210,40);

    glVertex2f(220,30);
    glVertex2f(215,40);

    glVertex2f(225,30);
    glVertex2f(220,40);

    //
    glVertex2f(115,30);
    glVertex2f(120,40);

    glVertex2f(110,30);
    glVertex2f(115,40);

    glVertex2f(105,30);
    glVertex2f(110,40);

    glVertex2f(100,30);
    glVertex2f(105,40);

    glVertex2f(95,30);
    glVertex2f(100,40);

    glEnd();
    BoatBodyShell();
    BoatBodyStick();
}
void Boat()
{
    BoatBody();
}

void display() {
	glClearColor(0.0f, 0.80f, 1.0f, 1.0f); // Set background color to black and opaque
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
    Boat();
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