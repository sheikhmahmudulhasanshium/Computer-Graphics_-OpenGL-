#include<windows.h>
#include<GL/gl.h>
#include<math.h>

void circle(int xx, int yy, float r)
{

    glBegin(GL_POLYGON); // Draw a Red 1x1 Square centered at origin
    for (int i = 0; i < 200; i++)
    {
        // glColor3ub(255, 215, 0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        // float r = 4.0f;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + xx, y + yy);
    }
    glEnd();
}

void road()
{
    glBegin(GL_QUADS);
    glColor3ub(153, 102, 102);
    glVertex2f(0, 25);
    glVertex2f(100, 25);
    glVertex2f(100, 50);
    glVertex2f(0, 50);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0, 37.5);
    glVertex2f(25, 37.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0 + 30, 37.5);
    glVertex2f(25 + 30, 37.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0 + 30 + 30, 37.5);
    glVertex2f(25 + 30 + 30, 37.5);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0 + 30, 37.5);
    glVertex2f(25 + 30, 37.5);
    glEnd();
}
void signalLight()
{
    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(40, 25);
    glVertex2f(42, 25);
    glVertex2f(42, 55);
    glVertex2f(40, 55);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0, 51, 0);
    glVertex2f(40 - 2, 55);
    glVertex2f(42 + 2, 55);
    glVertex2f(42 + 2, 55 + 20);
    glVertex2f(40 - 2, 55 + 20);
    glEnd();

    glColor3ub(255, 0, 0);
    circle(41, 58, 2);

    glColor3ub(102, 255, 51);
    circle(41, 58 + 6, 2);
    glColor3ub(255, 255, 153);
    circle(41, 58 + 12, 2);

    glEnd();
}
void display()
{
    glClearColor(0.8f, 0.8f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(2);
    road();
    signalLight();

    // circle();
    glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char **argv)
{
    glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("TrafficLight 2.0"); // Create a window with the given title


glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}

