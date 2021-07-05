#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void SaturnRingDown(){
    glColor3ub(171,96,74);
    float dA=-0.25;
    float dB=010;
    {
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        float saturnX=1,saturnY=1;//Size
        float saturnA=0,saturnB=0;//Position
        for(int i=0;i<100;i++)
           {

            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.8;
                float x = (saturnA+(r *saturnX* cos(A+dA)));
                float y = (saturnB+(r *saturnY* sin(A+dB)));
                glVertex2f(x,y);
            }
            }
        glEnd();
                //dA=dA+90;

        }


    }


void SaturnRingUp(){
    glColor3ub(171,96,74);
    float dA=0.25;
    float dB=010;
    {
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        float saturnX=1,saturnY=1;//Size
        float saturnA=0,saturnB=0;//Position
        for(int i=0;i<200;i++)
           {

            {

                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.8;
                float x = (saturnA+(r *saturnX* cos(A+dA)));
                float y = (saturnB+(r *saturnY* sin(A+dB)));
                glVertex2f(x,y);
            }
            }
        glEnd();
                //dA=dA+90;

        }


    }
void Saturn() {

	glLineWidth(7.5);

    SaturnRingDown();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        float saturnX=1,saturnY=1;//Size
        float saturnA=0,saturnB=0;//Position
        for(int i=0;i<200;i++)
            {
                glColor3ub(197, 171, 110);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.5;
                float x = (saturnA+(r *saturnX* cos(A)));
                float y = (saturnB+(r *saturnY* sin(A)));
                glVertex2f(x,y);
            }
        glEnd();

    	SaturnRingUp();
	glFlush();  // Render now
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT

	glutCreateWindow("Saturn");
	glClearColor(0.5f,0.6f, 1.0f,1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	gluOrtho2D(-20,20,20,20); // Create a window with the given title
	glutInitWindowSize(500,500);// Set the window's initial width & height
	glutDisplayFunc(Saturn);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
