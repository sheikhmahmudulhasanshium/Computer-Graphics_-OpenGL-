#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Moon() {
	glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	float moonX=1,moonY=1;//Size
	float moonA=0,moonB=0;//Position
	for(int i=0;i<200;i++)
        {
            glColor3f(234,244,252);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.75;
            float x = (moonA+(r *moonX* cos(A)));
            float y = (moonB+(r *moonY* sin(A)));
            glVertex2f(x,y);
        }


    glEnd();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test");
	gluOrtho2D(-20,20,20,20); // Create a window with the given title
	glutInitWindowSize(500,500);// Set the window's initial width & height
	glutDisplayFunc(Moon);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
