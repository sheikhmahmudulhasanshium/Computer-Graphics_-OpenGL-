#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<math.h>

float _angle1 = 0.0f;
void drawScene() {
glClear(GL_COLOR_BUFFER_BIT);
//glColor3d(1,0,0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);

 glPushMatrix();
glTranslatef(0.0f,0.0f,0.0f);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-0.0f,-0.0f,0.0f);
glLineWidth(7.5);
glBegin(GL_POINTS);

for(int i=0;i<200;i++)
        {

            if(i%2==0)
            {
                glColor3ub(255.0,0,0.0);
            }
            else
            {
                glColor3ub(0,255,0);
            }
            glPointSize(10);
           // glColor3ub(200,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

glPopMatrix();

 glutSwapBuffers();
}

void update(int value) {

 _angle1+=2.0f;
glutPostRedisplay(); //Notify GLUT that the display has changed

 glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Transformation");
glutDisplayFunc(drawScene);
glutTimerFunc(20, update, 0); //Add a timer
glutMainLoop();
return 0;
}
