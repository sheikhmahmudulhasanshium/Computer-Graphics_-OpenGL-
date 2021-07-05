


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
/*
void RainbowColor()
{
    int choice=0;

    switch(choice)
    {
            case 1:
        {
            glColor3ub(255.0f,0.0f,0.0f);//Red
        }

            case 2:
        {
            glColor3ub(	255, 127, 0);//orange

        }

            case 3:
        {
             glColor3ub(	255, 255, 0);//yellow

        }
            case 4:
        {
            glColor3ub(0, 255, 0);//Green

        }
            case 5:
        {
            glColor3ub(0, 0, 255);//blue

        }
            case 6:
        {
            glColor3ub(75, 0, 130);//indigo

        }
            case 7:
        {
            glColor3ub(148, 0, 211);//violate

        }


    }

}
*/
#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void FlagOutline()
{
    //RainbowColor();
   // for(int i=0;i<4;i++)
    {
        int X=0,Y=10;
        /*glColor3ub(255,0,0);
        glBegin(GL_LINES);

        glVertex2d(X,Y);
        glVertex2d(X+10,Y);

        glVertex2d(X+10,Y);
        glVertex2d(X+10,Y+10);

        glVertex2d(X+10,Y+10);
        glVertex2d(X,Y+10);

        glVertex2d(X,Y+10);
        glVertex2d(X,Y);

        glEnd();*/
        //Y++;


    }

}
void FlagPolygon()
{
    //RainbowColor();
    //for(int i=0;i<3;i++)
    {
    int x=0,y=0;

        /*
        glBegin(GL_POLYGON);
        glColor3ub(0,20,255);
        glVertex2d(x,y);
        glVertex2d(x+10,y);
        glVertex2d(x+10,y+10);
        glVertex2d(x,y+10);
        glEnd();
        */
        glBegin(GL_POLYGON);
        glColor3ub(255,0,0);
        glVertex2d(0,20);
        glVertex2d(10,20);
        glVertex2d(20,30);
        glVertex2d(10,30);
        glEnd();
        //y++;
    }

}

void display() {
//RainbowColor(1);
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(40.0);
FlagPolygon();
//FlagOutline();

 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {


//string Choice;
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("OpenGL Rainbow Flag-2"); // Create a window with the given title
glutInitWindowSize(320, 320);
gluOrtho2D(-100,100,100,100);
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
