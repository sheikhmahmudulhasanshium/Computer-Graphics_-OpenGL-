
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void CarTire()
{
    //Tires

            glBegin(GL_POLYGON);//tire-1
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(0,0,0);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=2.5;
                float x = (140+(r*5*cos(A)));
                float y =(93+(r*10*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
               // 140=140+200;

            glBegin(GL_POLYGON);
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(168, 169, 173);//steel-cover
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=1.5;
                float x = (140+(r*5*cos(A)));
                float y =(93+(r*10*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
                //140=140+200;

            glBegin(GL_POLYGON);//tire-2
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(0,0,0);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=2.5;
                float x = (210+(r*5*cos(A)));
                float y =(93+(r*10*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
               // 210=210+200;

            glBegin(GL_POLYGON);
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(168, 169, 173);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=1.5;
                float x = (210+(r*5*cos(A)));
                float y =(93+(r*10*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
               // 210=210+200;
}
void CarBody()
{


        glColor3f(0.1373, 0.5725,0.5529);//body
        glBegin(GL_POLYGON);
        glVertex2f(140,152);
        glVertex2f(190,152);
        glVertex2f(215,127);
        glVertex2f(240,127);
        glVertex2f(240,92);
        glVertex2f(110,92);
        glVertex2f(110,127);
        glVertex2f(130,127);
        glVertex2f(140,152);
        glEnd();

        glBegin(GL_POLYGON);//back-light
        glColor3ub(255,0,0);
        glVertex2f(110,92);
        glVertex2f(115,92);
        glVertex2f(115,117);
        glVertex2f(110,117);
        glEnd();



        glBegin(GL_POLYGON);//window
        glColor3ub(0, 0, 0);
        glVertex2f(140,152);
        glVertex2f(190,152);
        glVertex2f(215,127);
        glVertex2f(210,127);
        glVertex2f(120,127);
        glVertex2f(130,127);
        glEnd();


        glBegin(GL_POLYGON);//window-Divider
        glColor3ub(192,192,192);
        glVertex2f(170,152);
        glVertex2f(165,152);
        glVertex2f(165,127);
        glVertex2f(170,127);
        glEnd();

        glBegin(GL_POLYGON);//roof-plate
        glColor3ub(168, 169, 173);

        glVertex2f(140,152);
        glVertex2f(190,152);
        glVertex2f(185,157);
        glVertex2f(140,157);
        glEnd();

        glBegin(GL_POLYGON);//window-holder-front
        glColor3ub(168, 169, 173);
        glVertex2f(190,152);
        glVertex2f(215,127);
        glVertex2f(210,127);
        glVertex2f(185,152);
        glEnd();



        glBegin(GL_POLYGON);//window-holder-back
        glColor3ub(168, 169, 173);
        glVertex2f(140,157);
        glVertex2f(115,127);
        glVertex2f(125,127);
        glVertex2f(140,152);
        glEnd();

        glBegin(GL_POLYGON);//foot-holder
        glColor3ub(168, 169, 173);
        glVertex2f(215,92);
        glVertex2f(110,92);
        glVertex2f(110,97);
        glVertex2f(215,97);

        glEnd();

        glBegin(GL_POLYGON);//mirror
        glColor3f(0.3, 0.9,0.6);//body
        //glColor3ub(255,250,0);
        glVertex2f(211.5,134.5);
        glVertex2f(204.5,135.5);
        glVertex2f(203.5,129);
        glVertex2f(210.5,127);
        glEnd();



}
void CarForward()
{

     CarBody();


     CarTire();

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

    CarForward();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(1080,640);   // Set the window's initial width & height
	gluOrtho2D(0,500,0,500);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
