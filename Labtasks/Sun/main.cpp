#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void sunRing2()
{
        glBegin(GL_LINES);// Draw a Red 1x1 Square centered at origin
        float sunX=1,sunY=1;//Size
        float sunA=0,sunB=0;//Position
        for(int i=0;i<200;i++)
            {
                if(i%5==0)
                {
                    glColor3ub(255, 255, 110);
                    float pi=3.1416;
                    float A=(i*2*pi)/200;
                    float r=1.0;
                    float x = (sunA+(r *sunX* cos(A)));
                    float y = (sunB+(r *sunY* sin(A)));
                    glVertex2f(0.0f,0.0f);
                    glVertex2f(x,y);

                }

            }
        glEnd();

}
void sunRing(){
{


    glColor3ub(255,255,74);
    {
        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        float sunX=1,sunY=1;//Size
        float sunA=0,sunB=0;//Position
        for(int i=0;i<200;i++)
           {
                float dA=0.25;
                float dB=010;

            {
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.8;
                float x = (sunA+(r *sunX* cos(A+dA)));
                float y = (sunB+(r *sunY* sin(A+dB)));
                glVertex2f(x,y);
            }
            }
        glEnd();
                //dA=dA+90;

        }

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        float sunX1=1,sunY1=1;//Size
        float sunA1=0,sunB1=0;//Position
        for(int i=0;i<200;i++)
           {
                float dA=-0.25;
                float dB=-010;


            {
                float pi=3.1416;
                float A1=(i*2*pi)/200;
                float r1=0.8;
                float x1 = (sunA1+(r1 *sunX1* cos(A1+dA)));
                float y1 = (sunB1+(r1 *sunY1* sin(A1+dB)));
                glVertex2f(x1,y1);

            }
            }
        glEnd();
}

}



void sun() {
    glClearColor(0.5f,0.6f, 1.0f,1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	gluOrtho2D(-20,20,20,20); // Create a window with the given title
	glutInitWindowSize(500,500);// Set the window's initial width & height


	glLineWidth(7.5);

    sunRing();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
        float sunX=1,sunY=1;//Size
        float sunA=0,sunB=0;//Position
        for(int i=0;i<200;i++)
            {
                glColor3ub(255, 255, 110);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.5;
                float x = (sunA+(r *sunX* cos(A)));
                float y = (sunB+(r *sunY* sin(A)));
                glVertex2f(x,y);
            }
        glEnd();
        sunRing2();
	glFlush();  // Render now
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT

	glutCreateWindow("sun");
	glutDisplayFunc(sun);// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
