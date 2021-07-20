#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted.
*/

void Boat2Windows()
{
    glBegin(GL_QUADS);
    glColor3ub(202, 202, 0);//yellow-window
    glVertex2f(135,35);
    glVertex2f(150,35);
    glVertex2f(150,50);
    glVertex2f(135,50);
    glEnd();

}
void Boat2WindowLoop()
{
    Boat2Windows();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    for(int windowNo=0;windowNo<4;windowNo++)
    {
        glTranslatef(20,0,0);
        Boat2Windows();
    }
    glTranslatef(20,0,0);
    Boat2Windows();
    glPopMatrix();
}
void Boat2Shed()
{

    glBegin(GL_QUADS);
    glColor3ub(102, 102, 51);//brown-shed
    glVertex2f(120,30);
    glVertex2f(240,30);
    glVertex2f(240,55);
    glVertex2f(130,55);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(102, 0,0 );//red-shed-ceiling
    glVertex2f(240,55);
    glVertex2f(130,55);
    glVertex2f(128,60);
    glVertex2f(240,60);
    glEnd();
    Boat2WindowLoop();
}
void Boat2BackStick()
{
    glBegin(GL_LINES);
    glColor3ub(165,42,42);//brown-stick
    glVertex2f(210+50,75);
    glVertex2f(220+50,10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);//red-quads
    glVertex2f(218+50,20);
    glVertex2f(220+50,10);
    glVertex2f(230+50,10);
    glVertex2f(280,20);
    glEnd();

}
void Boat2BackBox()
{
    glBegin(GL_POLYGON);
    glColor3ub(245, 176, 66);//orange-box
    glVertex2f(260+5,40);
    glVertex2f(250+5,30);
    glVertex2f(230+5,30);
    glVertex2f(230+5,70);
    glVertex2f(260+5,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(245, 0, 0);//red-box-ceiling
    glVertex2f(230,70);
    glVertex2f(260+5+5,70);
    glVertex2f(260+5,75);
    glVertex2f(230+5+2,75);
    glEnd();

}
void Boat2Body()
{
    Boat2BackStick();
    glBegin(GL_QUADS);
    glColor3ub(255,0,0);//red-base
    glVertex2f(120,10);
    glVertex2f(250,10);
    glVertex2f(250,30);
    glVertex2f(120,30);
    glEnd();
    glBegin(GL_TRIANGLES);//black-nose-front
    glVertex2f(120,10);
    glVertex2f(120,30);
    glVertex2f(80,40);
    glEnd();

    glBegin(GL_TRIANGLES);//black-nose-back
    glVertex2f(200+50,10);
    glVertex2f(200+50,30);
    glVertex2f(240+50,40+20);
    glEnd();

    glBegin(GL_POLYGON);//yellow-inside-shape
    glColor3ub(255,255,0);
    glVertex2f(250,40);
    glVertex2f(80,40);
    glVertex2f(120,30);
    glVertex2f(250,30);
    glEnd();

    Boat2Shed();
    Boat2BackBox();

}
void Boat2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,0,0);
    Boat2Body();
    glPopMatrix();
}

void ScaledBoat2()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glScalef(0.5,0.5,0);
    Boat2();
    glPopMatrix();
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
    ScaledBoat2();
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
