
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Wave(float waveX,float waveY,float waveA,float waveB)
{
        float pi=3.1416;
        float r=50;
     for(int waveCol=0;waveCol<10;waveCol++)
     {


        for(int waveRow=0;waveRow<10;waveRow++)
        {
            glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
            for(int i=0;i<200;i++)
            {
                if(i%2==0)
                {
                    glColor3ub(0,40,210);
                }
                else
                {
                    glColor3ub(250,250,250);
                }

                float A=(i*pi)/200;

                float x = (waveX+(waveA*r*2* cos(A)));
                float y = (waveY+(waveB*r * sin(A)));
                glVertex2f(x,y );

            }
            glEnd();
            waveX=(waveX+100)*waveA;
        }
        waveY=0;
     }

}
void River() {

    float waveX=-500,waveY=0;//Position
    float waveA=1,waveB=1;//Scale

    //for(int waveRow=0;waveRow<5;)
    {
        Wave(waveX,waveY,waveA,waveB);
        //waveY=waveY+100;
    }
    glEnd();

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);




}
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(-500.0f, 0.0f);    // x, y
	glVertex2f(500.0f, 0.0f);    // x, y

	glVertex2f(0.0f, -500.0f);    // x, y
	glVertex2f(0.0f, 500.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, -1.0f);

	glEnd();
    River();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("River"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(-500,500,-500,500);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
