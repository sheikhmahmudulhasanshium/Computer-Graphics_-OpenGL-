#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
int _raindrop=0.0;
bool thunderBright=true;
void ThunderInverse()
{
    glColor3ub(255,255,0);
    glBegin(GL_POLYGON);//maroon-log-p-1
    glVertex2f(250,250);
    glVertex2f(240,300);
    glVertex2f(260,300);
    glVertex2f(270,250);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-2
    glVertex2f(240,300);
    glVertex2f(260,300);
    glVertex2f(280,350);
    glVertex2f(270,355);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-3
    glVertex2f(280,350);
    glVertex2f(270,355);
    glVertex2f(260,390);
    glVertex2f(270,395);
    glEnd();
    glBegin(GL_POLYGON);//maroon-log-p-4
    glVertex2f(260,390);
    glVertex2f(270,395);
    glVertex2f(280,450);
    glVertex2f(275,435);
    glEnd();
}
void Thunder()
{
   // ThunderInverse();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(250,450,0);
    glScalef(-0.3,-0.3,0);
    glTranslatef(-250,-250,0);
    ThunderInverse();
    glPopMatrix();
}
void thunderUpdate(int value)
{

    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, thunderUpdate, 0);
}
void rainDrop() {
glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // white
    glVertex2f(5.0f, 490.0f);    // x, y
	glVertex2f(4.0f,485);    // x, y
	glEnd();
}
void rainDropLoop()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0,500,0);
    //rainDrop();
    for(int raincol=0;raincol<100;raincol++)
    {
        glTranslatef(10,0,0);
        rainDrop();
        for(int rainrow=0;rainrow<40;rainrow++)
        {
            glTranslatef(0,-25,0);
            rainDrop();
        }
        glTranslatef(0,1000,0);
    }
    glPopMatrix();
}
void displayRainDrops()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef((-_raindrop/3)% 500, (-_raindrop*3)% 500, 0);
    rainDropLoop();
    glPopMatrix();
}
void rainDropMove(int value)
{
    _raindrop+=1;
    glutPostRedisplay(); //Notify GLUT that the display has changed
    glutTimerFunc(20, rainDropMove, 0);
}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
    displayRainDrops();
    Thunder();
	glFlush();  // Render now
	glutSwapBuffers();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutTimerFunc(20, rainDropMove, 0);
	glutTimerFunc(20, thunderUpdate, 0);
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}