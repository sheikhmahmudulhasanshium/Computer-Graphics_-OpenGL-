#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
using namespace std;
char text1[] = "Hello World";
void text( float x, float y, char *st)
{
    int l,i;


    l=strlen( st ); // see how many characters are in text string.
    glColor3f(0.0,1.0,0.7);
    //glDisable(GL_LIGHTING);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, st[i]);

    }


}
void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    text(0.0,0.0,text1);
	glEnd();
	glFlush();

}



int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutCreateWindow("Transformation");
	glutInitWindowSize(800, 800);
	glutDisplayFunc(drawScene);
	glutMainLoop();
	return 0;
}
