 #include <windows.h>  // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void circle()
{
    // glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    // glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(7.5);
    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        //glColor3f(1.0, 1.0, 1.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 50;
        float x = r * cos(A);
        float y = r / 2 * sin(A);
        glVertex2f(x, y);
    }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

    glEnd();
}
void PlaceCircles()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(210, 200, 0);
    glColor3ub(255, 0, 0);
    circle();
    glTranslatef(0, -60, 0);
    glColor3ub(255, 255, 0);
    circle();
    glTranslatef(0, 60, 0);
    glScalef(0.85, 0.85, 0);
    glColor3ub(0, 0, 255);
    circle();
    glPopMatrix();
}
void Well()
{
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(160, 200);
    glVertex2f(260, 200);
    glVertex2f(260, 140);
    glVertex2f(160, 140);
    glEnd();
    PlaceCircles();

    glBegin(GL_LINES);//bamboo
    glColor3ub(98,52,18);
    glVertex2f(160 + 4, 200);
    glVertex2f(160 + 4, 200 + 120);

    glVertex2f(260 - 4, 200);
    glVertex2f(260 - 4, 200 + 120);

    glVertex2f(160-4,260);
    glVertex2f(260+4,260);
    glEnd();

    glBegin(GL_QUADS);//Shade
    glColor3ub(98,52,18);
    glVertex2f(160 - 20, 200 + 120);

    glVertex2f(260 + 20, 200 + 120);

    glVertex2f(260, 200 + 120 + 70);

    glVertex2f(160, 200 + 120 + 70);
    glEnd();
    // glBegin(GL_LINES);
    // glColor3f(1.0f, 1.0f, 0.0f);
    // glVertex2f(160 + 2, 200);

    // glVertex2f(160 + 2, 200 + 50);
    // glEnd();

    // glVertex2f(260, 200);
    // glutSwapBuffers();
}

void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    // glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glLineWidth(1.5);
    // Draw a Red 1x1 Square centered at origin
    glBegin(GL_LINES);           // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.0f, 250.0f);    // x, y
    glVertex2f(500.0f, 250.0f);  // x, y
    glVertex2f(250.0f, 0.0f);    // x, y
    glVertex2f(250.0f, 500.0f);  // x, y
    glEnd();
    Well();

    // glMatrixMode(GL_MODELVIEW);

    glutSwapBuffers();

    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv);            // Initialize GLUT
    glutCreateWindow("OpenGL Setup"); // Create a window with the given title
    glutInitWindowSize(800, 800);     // Set the window's initial width & height
    gluOrtho2D(0, 500, 0, 500);
    glutDisplayFunc(display); // Register display callback handler for window re-paint
                              //Add a timer
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}