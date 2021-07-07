
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void CarTire(float Carx2,float Cary2,float Cara2,float Carb2,float Carx3,float Cary3,float Cara3,float Carb3,float Carx4,float Carx5)
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
                float x = (Carx2+(r*Cara2*cos(A)));
                float y =(Cary2+(r*Carb2*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
               // Carx2=Carx2+200;

            glBegin(GL_POLYGON);
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(168, 169, 173);//steel-cover
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=1.5;
                float x = (Carx3+(r*Cara3*cos(A)));
                float y =(Cary3+(r*Carb3*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
                //Carx3=Carx3+200;

            glBegin(GL_POLYGON);//tire-2
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(0,0,0);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=2.5;
                float x = (Carx4+(r*Cara2*cos(A)));
                float y =(Cary2+(r*Carb2*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
               // Carx4=Carx4+200;

            glBegin(GL_POLYGON);
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(168, 169, 173);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=1.5;
                float x = (Carx5+(r*Cara3*cos(A)));
                float y =(Cary3+(r*Carb3*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
               // Carx5=Carx5+200;
}
void CarBody(float Carx,float Cary,float Cara,float Carb)
{


        glColor3f(0.1373, 0.5725,0.5529);//body
        glBegin(GL_POLYGON);
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*35)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*40)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*40)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*14)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*14)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*18)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glEnd();

        glBegin(GL_POLYGON);//back-light
        glColor3ub(255,0,0);
        glVertex2f(((Cara*14)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*15)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*15)+Carx),(Cary+(Carb*-37)));
        glVertex2f(((Cara*14)+Carx),(Cary+(Carb*-37)));
        glEnd();



        glBegin(GL_POLYGON);//window
        glColor3ub(0, 0, 0);
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*35)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*34)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*16)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*18)+Carx),(Cary+(Carb*-35)));
        glEnd();


        glBegin(GL_POLYGON);//window-Divider
        glColor3ub(192,192,192);
        glVertex2f(((Cara*26)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*25)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*25)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*26)+Carx),(Cary+(Carb*-35)));
        glEnd();

        glBegin(GL_POLYGON);//roof-plate
        glColor3ub(168, 169, 173);

        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*29)+Carx),(Cary+(Carb*-29)));
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-29)));
        glEnd();

        glBegin(GL_POLYGON);//window-holder-front
        glColor3ub(168, 169, 173);
        glVertex2f(((Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*35)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*34)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*29)+Carx),(Cary+(Carb*-30)));
        glEnd();



        glBegin(GL_POLYGON);//window-holder-back
        glColor3ub(168, 169, 173);
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-29)));
        glVertex2f(((Cara*15)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*17)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glEnd();

        glBegin(GL_POLYGON);//foot-holder
        glColor3ub(168, 169, 173);
        glVertex2f(((Cara*35)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*14)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*14)+Carx),(Cary+(Carb*-41)));
        glVertex2f(((Cara*35)+Carx),(Cary+(Carb*-41)));

        glEnd();

        glBegin(GL_POLYGON);//mirror
        glColor3f(0.3, 0.9,0.6);//body
        //glColor3ub(255,250,0);
        glVertex2f(((Cara*34.3)+Carx),(Cary+(Carb*-33.5)));
        glVertex2f(((Cara*32.9)+Carx),(Cary+(Carb*-33.3)));
        glVertex2f(((Cara*32.7)+Carx),(Cary+(Carb*-34.6)));
        glVertex2f(((Cara*34.1)+Carx),(Cary+(Carb*-35.0)));
        glEnd();



}
void CarForward()
{
     float Carx=40,Cary=302;//Position
     float Cara=5,Carb=5;//Scale
     CarBody(Carx,Cary,Cara,Carb);

     float Carx2=140,Cary2=93;//Position
     float Cara2=5,Carb2=10;//Scale
     float Carx3=140,Cary3=93;//Position
     float Cara3=5,Carb3=10;//Scale

     float Carx4=210;//Position
     float Carx5=210;//Position

     CarTire(Carx2,Cary2,Cara2,Carb2,Carx3,Cary3,Cara3,Carb3,Carx4,Carx5);

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
