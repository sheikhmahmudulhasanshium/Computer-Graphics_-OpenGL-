
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void RiceTree(float riceA,float riceB,float riceX,float riceY) {
    glColor3ub(0,255,0);

    glBegin(GL_TRIANGLES);//low-leaf-left
    glVertex2f((riceX+(riceA*-100.0)),(riceY+(riceB*0.0)));
    glVertex2f((riceX+(riceA*-200.0)),(riceY+(riceB*300.0)));
    glVertex2f((riceX+(riceA*0.0)),(riceY+(riceB*0.0)));
    glEnd();
    glBegin(GL_TRIANGLES);//low-leaf-right
    glVertex2f((riceX+(riceA*100.0)),(riceY+(riceB*0.0)));
    glVertex2f((riceX+(riceA*200.0)),(riceY+(riceB*300.0)));
    glVertex2f((riceX+(riceA*0.0)),(riceY+(riceB*0.0)));
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f((riceX+(riceA*-50.0)),(riceY+(riceB*0.0)));//mid-leaf-left
    glVertex2f((riceX+(riceA*-100.0)),(riceY+(riceB*500.0)));
    glVertex2f((riceX+(riceA*0.0)),(riceY+(riceB*0.0)));
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f((riceX+(riceA*50.0)),(riceY+(riceB*0.0)));//mid-leaf-right
    glVertex2f((riceX+(riceA*100.0)),(riceY+(riceB*500.0)));
    glVertex2f((riceX+(riceA*0.0)),(riceY+(riceB*0.0)));
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f((riceX+(riceA*-30.0)),(riceY+(riceB*0.0)));//top-leaf-mid
    glVertex2f((riceX+(riceA*0.0)),(riceY+(riceB*700.0)));
    glVertex2f((riceX+(riceA*30.0)),(riceY+(riceB*0.0)));
    glEnd();

}
void RiceTree() {
    float riceA=0.05, riceB=0.05;//Scale

    float riceX=100, riceY=10;//Position


	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(1.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0); // Red

	glVertex2f(-500.0f, 0.0f);    // x, y
	glVertex2f(500.0f,0.0f);    // x, y

	glVertex2f(0.0f,-500.0f);    // x, y
	glVertex2f(0.0f, 500.0f);    // x, y

    glEnd();

    float riceDX=0, riceDY=0;//Position
    for(int riceRow=0;riceRow<10;riceRow++)
    {
        riceY=riceY+riceDY;
        riceX=riceX+riceDX;

         for(int riceCol=0;riceCol<10;riceCol++)
        {


            RiceTree(riceA,riceB,riceX,riceY);
            riceDX=riceDX+25;
        }
           // RiceTree(riceA,riceB,riceX,riceY);
            riceDY=riceDY+50;


    }

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(-500,500,-500,500);
	glutDisplayFunc(RiceTree); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
