#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void HillsForest(float moonX=10,float moonY=10,float moonA=0,float moonB=0,float moonAa=6,float moonAb=9,float moonAc=8) {

	for(int i=0;i<12;i++)
    {
        if(i%2==0)
        {


            glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
            glColor3ub(0,31,26);
            glVertex2f((((moonA+moonAa)*(moonX))),((moonB)*(moonY)));
            glVertex2f(((moonA+moonAb)*(moonX)),((moonB+13)*(moonY)));
            glVertex2f(((moonA+moonAc)*(moonX)),(moonB*(moonY)));
            glEnd();
            moonA=moonA+1;
             if(i%6==0)
            {
                moonAa=moonAa+1;
                moonAb=moonAb-2;
                moonAc=moonAc+1;
            }
        }
        else
        {
            moonA=moonA+2;
        }


    }
}
void Hills() {

    glutInitWindowSize(500,500);
    gluOrtho2D(-20,20,-20,20);
    glPointSize(200);
    glClearColor(0.393f, 0.370f, 0.701f,1.0f ); // Set background color to navy-blue
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)

	float moonX=10,moonY=10;//Size
	float moonA=0,moonB=0;//Position
	{


            glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
            glColor3ub(150,240,250);//hill-2
            glVertex2f((((moonA-10)*(moonX))),((moonB+0)*(moonY)));
            glVertex2f(((moonA+10)*(moonX)),((moonB+0)*(moonY)));
            glVertex2f(((moonA+0)*(moonX)),((moonB+25)*(moonY)));
            glVertex2f(((moonA-05)*(moonX)),((moonB+17)*(moonY)));

            glEnd();

            glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
            glColor3ub(150,240,250);//hill-1
            glVertex2f((((moonA-10+15)*(moonX))),((moonB)*(moonY)));
            glVertex2f(((moonA+0+10)*(moonX)),((moonB+20)*(moonY)));
            glVertex2f(((moonA+0+20)*(moonX)),((moonB+17)*(moonY)));
            glVertex2f(((moonA+10+15)*(moonX)),((moonB)*(moonY)));
            glVertex2f(((moonA-0+15)*(moonX)),((moonB+25)*(moonY)));
            glVertex2f(((moonA-05+15)*(moonX)),((moonB+20)*(moonY)));

            glEnd();
            HillsForest();
	}

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Hills "); // Create a window with the given title
glutDisplayFunc(Hills); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}

