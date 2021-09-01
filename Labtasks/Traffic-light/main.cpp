
#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void TrafficLight(float x,float y,float a,float b)
{
    float x1=x+10.0,y1=y+10;
    float lightx=((0*x1)+a),lighty=((1*y1)+b);//Position
    float lighta=((0.8*x1)+a),lightb=((0.01*x1)+b);//Scale
    	for(int i=0;i<6;i++)
        if(i%2==0)
        {
            if(i==4)
            {
                glColor3f(234,0,0);
            }
            else if(i==2)
            {
                glColor3f(234,234,0);
            }
            else
            {
                glColor3f(0,234,0);
            }

            glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
            for(int i=0;i<200;i++)
            {



                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.2;
                float p = (lightx+(r *lighta* cos(A)));
                float q = (lighty+(r *lightb* sin(A)));
                glVertex2f(p,q+10);
            }
            glEnd();

        }
        else
        {
                lighty=lighty+70;
        }
}
void TrafficLightBox(float x,float y,float a,float b)
{

    glColor3ub(67.0f,	75.0f,	75.0f);//steel-blue-light-holder

    glBegin(GL_QUADS);
    glVertex2f((a+(-0.5*x)),(b+(8.0*y)));
    glVertex2f((a+(0.5*x)),(b+(8.0*y)));
    glVertex2f((a+(0.5*x)),(b+(17*y)));
    glVertex2f((a+(-0.5*x)),(b+(17*y)));
    glEnd();



    TrafficLight(x,y,a,b);

}
void TrafficLightBody(float x,float y,float a,float b) {
// Draw a Red 1x1 Square centered at origin
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-pillar
glVertex2f((a+(-0.1*x)),(b+(0.0*y)));
glVertex2f((a+(0.1*x)),(b+(0.0*y)));
glVertex2f((a+(0.1*x)),(b+(8.0*y)));
glVertex2f((a+(-0.1*x)),(b+(8.0*y)));
glEnd();

glColor3ub(67.0f,	75.0f,	75.0f);//steel-blue-pillar-holder

glBegin(GL_QUADS);
glVertex2f((a+(-0.3*x)),(b+(0.0*y)));
glVertex2f((a+(0.3*x)),(b+(0.0*y)));
glVertex2f((a+(0.2*x)),(b+(1.5*y)));
glVertex2f((a+(-0.2*x)),(b+(1.5*y)));

glEnd();



}

void TrafficLight() {

float x=10,y=10;//Scale
float a=0,b=-00;//Position
glutInitWindowSize(10,10);
gluOrtho2D(-20,20,-20,20);
glPointSize(200);
glClearColor(0.9,0.9, 0.5,1); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(200.0);

TrafficLightBody(x,y,a,b);
TrafficLightBox(x,y,a,b);
 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Traffic Light"); // Create a window with the given title


glutDisplayFunc(TrafficLight); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}