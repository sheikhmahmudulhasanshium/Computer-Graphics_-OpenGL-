
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Corn()
{
    glBegin(GL_TRIANGLES);
    glColor3f(1,1,0);//yellow//Corn
    glVertex2f(92.5-5, 180+40);//top-leaf-mid
    glVertex2f(100, 275+90+40);
    glVertex2f(107.5+5, 180+40);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0,1,0);//green//Corn-stick
    glVertex2f(98, 275-80+20+20);
    glVertex2f(102, 275-80+20+20);
    glVertex2f(102+5, 275-200+20);
    glVertex2f(98-5, 275-200+20);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(210,105,30);
    glVertex2f(100, 275+80+40);//brown-divider
    glVertex2f(100, 180+40);

    glVertex2f(92.5, 180+40);//brown-left
    glVertex2f(100, 275+80+40);

    glVertex2f(107.5, 180+40);////brown-right
    glVertex2f(100, 275+80+40);

    glVertex2f(92.5+5,285+40);
    glVertex2f(107.5-5,285+40);

    glVertex2f(92.5+2,275+40);
    glVertex2f(107.5-2,275+40);


    glVertex2f(92.5+2,265+40);
    glVertex2f(107.5-2,265+40);


    glVertex2f(92.5+2,255+40);
    glVertex2f(107.5-2,255+40);

    glVertex2f(92.5+2,245+40);
    glVertex2f(107.5-2,245+40);

    glVertex2f(92.5+2,235+40);
    glVertex2f(107.5-2,235+40);



    glEnd();

    glColor3f(0,1,0);
     glBegin(GL_TRIANGLES);
    glVertex2f(87.5+8, 100+80+40);//Corn-leaf-left
    glVertex2f(75+8, 225+80+40);
    glVertex2f(100+8, 100+80+40);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(112.5-8, 100+80+40);//Corn-leaf-right
    glVertex2f(125-8, 225+80+40);
    glVertex2f(100-8, 100+80+40);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(87.5, 100+50);//mid-leaf-left
    glVertex2f(75-10, 225+50+50);
    glVertex2f(100, 100+50);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(112.5, 100+50);//mid-leaf-right
    glVertex2f(125+10, 225+50+50);
    glVertex2f(100, 100+50);
    glEnd();
}
void CornLeaf()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glColor3ub(0, 255, 0);
    glScalef(0.2f, 0.1f, 0.0f);
    glBegin(GL_TRIANGLES);//low-leaf-left
    glVertex2f(75+10, 100);
    glVertex2f(50+10, 175+85);
    glVertex2f(100+10, 100);
    glEnd();
    glBegin(GL_TRIANGLES);//low-leaf-right
    glVertex2f(125-10, 100);
    glVertex2f(150-10, 175+85);
    glVertex2f(100-10, 100);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(87.5, 100);//mid-leaf-left
    glVertex2f(75, 225+112);
    glVertex2f(100, 100);
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(112.5, 100);//mid-leaf-right
    glVertex2f(125, 225+112);
    glVertex2f(100, 100);
    glEnd();




    Corn();
    glPopMatrix();
}
void CornLeafloop()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    for(int col=0;col<6;col++)
    {

    glTranslatef(-10.0f, 0.0f, 0.0f);   //for once
    CornLeaf();
    for (int time = 0; time < 32; time++)
    {
        glTranslatef(15.0f, 0.0f, 0.0f);
        CornLeaf();
    }
    glTranslatef(-470.0f, 30.0f, 0.0f);   //for once
    }
    glPopMatrix();
}
void display()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    //glLineWidth(5);
    //Grass();
    CornLeafloop();

    glFlush();
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	//gluOrtho2D(0,200,0,200);
	gluOrtho2D(-0,500,00,500);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
