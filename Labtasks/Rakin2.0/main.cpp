#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#include <stdlib.h>
void border();
void tree1();
void color();
void tree2();






void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
      glBegin(GL_LINE_STRIP);
	  glVertex2f(1000,400);//lines
	  glVertex2f(800,400);
	  glEnd();

	glBegin(GL_LINE_STRIP);//lines
	  glVertex2f(400,400);
	  glVertex2f(200,400);
	  glEnd();


	glBegin(GL_LINE_STRIP);//lines
	  glVertex2f(75,400);
	  glVertex2f(0,400);
	  glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(0,400);//mountain
	glVertex2f(250,700);
	glVertex2f(420,500);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(700,650);
	glVertex2f(750,700);
	glVertex2f(1000,400);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2f(350,225);//*front wall*//
	glVertex2f(350,50);
	glVertex2f(600,50);
	glVertex2f(600,225);
	glEnd();
	 glBegin(GL_LINE_LOOP);//front roof
	 glVertex2f(400,300);
	 glVertex2f(325,225);
	 glVertex2f(625,225);
	 glVertex2f(550,300);
	 glEnd();
	  glBegin(GL_LINE_LOOP);
	  glVertex2f(400,300);
	  glVertex2f(550,300);
	  glVertex2f(550,425);//top wall
	  glVertex2f(400,425);
	  glEnd();
	   glBegin(GL_LINE_STRIP);
	   glVertex2f(390,475);//roof
	   glVertex2f(585,650);
	   glVertex2f(585,600);
	   glVertex2f(450,475);
	   glEnd();
	    glBegin(GL_LINE_STRIP);
		glVertex2f(550,425);
		glVertex2f(550,300);
		glVertex2f(725,475);//top side wall
		glVertex2f(725,600);
		glEnd();
		 glBegin(GL_LINE_STRIP);
		 glVertex2f(600,225);//side wall
		 glVertex2f(600,50);
		 glVertex2f(800,250);
		 glVertex2f(800,420);
		 glEnd();
		  glBegin(GL_LINE_LOOP);
		  glVertex2f(550,300);//side roof
		  glVertex2f(725,475);
		  glVertex2f(800,420);
		  glVertex2f(625,225);
		  glEnd();

		   glBegin(GL_LINE_LOOP);
		   glVertex2f(390,425);
		   glVertex2f(390,475);
		   glVertex2f(560,475);//top roof
		   glVertex2f(560,425);
		   glEnd();
		   glBegin(GL_LINE_LOOP);
		   glVertex2f(560,475);//top roof
		   glVertex2f(730,650);
		   glVertex2f(730,600);
		   glVertex2f(560,425);
		   glEnd();
		   glBegin(GL_LINE_STRIP);//top roof
		   glVertex2f(585,650);
		   glVertex2f(730,650);
		  		   glEnd();
				   glBegin(GL_LINE_STRIP);
				   glVertex2f(585,600);//top roof
				   glVertex2f(685,600);
				   glEnd();
				   glBegin(GL_LINE_LOOP);
				   glVertex2f(425,350);//top window
				   glVertex2f(425,400);
				   glVertex2f(510,400);
				   glVertex2f(510,350);
				   glEnd();
				   glBegin(GL_LINE_STRIP);
				   glVertex2f(425,50);//door
				   glVertex2f(425,150);
				   glVertex2f(525,150);
				   glVertex2f(525,50);
				   glEnd();
				   tree1();
				   tree2();
				   color();
				   glFlush();
				   glutSwapBuffers();


}


void color()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0);
	/*sky*/
    glColor3f(0.4,0.7,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,1000);
	glVertex2f(0,1000);
	glEnd();
	/*ground*/
	glColor3f(0.0,0.6,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(1000,400);
	glVertex2f(1000,0);
	glVertex2f(0,0);
	glEnd();
	/*hills*/
	glColor3f(0.3,0.1,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0,400);
	glVertex2f(250,700);
	glVertex2f(500,400);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(500,400);
	glVertex2f(750,700);
	glVertex2f(1000,400);
	glEnd();
	/*1floor front wall*/
    glColor3f(0.7,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(350,225);
	glVertex2f(350,50);
	glVertex2f(600,50);
	glVertex2f(600,225);
	glEnd();
	/*1floor roof*/
	glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(400,300);
	glVertex2f(325,225);
	glVertex2f(625,225);
	glVertex2f(550,300);
	glEnd();
	/*2floor front wall*/
	glColor3f(0.7,0.6,0.6);
    glBegin(GL_POLYGON);
	glVertex2f(400,300);
    glVertex2f(550,300);
	glVertex2f(550,425);
	glVertex2f(400,425);
	glEnd();
	/*roof*/
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(390,475);
	glVertex2f(585,650);
	glVertex2f(585,600);
	glVertex2f(450,475);
	glEnd();
	/*top of roof*/
	glColor3f(0.6,0.5,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(450,475);
	glVertex2f(585,600);
	glVertex2f(690,600);
	glVertex2f(560,475);
	glEnd();
	/*top side wall*/
	glColor3f(0.7,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(550,425);
	glVertex2f(550,300);
	glVertex2f(725,475);
	glVertex2f(725,600);
	glEnd();
	/*bottom side wall*/
	glColor3f(0.7,0.5,0.5);
	glBegin(GL_POLYGON);
	glVertex2f(600,225);
	glVertex2f(600,50);
	glVertex2f(800,250);
	glVertex2f(800,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(550,300);//side roof
	glVertex2f(725,475);
	glVertex2f(810,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);//part of side roof
	glVertex2f(600,223);
	glVertex2f(550,300);
	glVertex2f(810,420);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(585,650);
	glVertex2f(585,600);
	glVertex2f(700,600);
	glVertex2f(730,650);
	glEnd();
    glColor3f(0.5,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(390,425);
	glVertex2f(390,475);
	glVertex2f(560,475);
	glVertex2f(560,425);
	glEnd()
	/*top roof*/;
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(560,475);
	glVertex2f(730,650);
	glVertex2f(730,600);
	glVertex2f(560,425);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);//top roof
	glVertex2f(585,650);
	glVertex2f(730,650);
	glEnd();
	glColor3f(0.4,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(585,600);//top roof
    glVertex2f(685,600);
	glEnd();
	/*window*/

	glBegin(GL_POLYGON);
	glVertex2f(425,350);
	glVertex2f(425,400);
	glVertex2f(510,400);
	glVertex2f(510,350);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(425,50);//door
	glVertex2f(425,150);
	glVertex2f(525,150);
	glVertex2f(525,50);
	glEnd();
	tree2();
	glColor3f(1.0,1.0,0.0);

	glColor3f(0.5,0.5,0.5);
	glColor3f(1.0,1.0,0.0);

}



void tree1()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2f(100,250);
	glVertex2f(175,250);
	glVertex2f(175,75);
	glVertex2f(100,75);
	glEnd();
    glBegin(GL_LINE_STRIP);
	glVertex2f(100,250);
	glVertex2f(0,250);
	glVertex2f(75,350);
    glVertex2f(25,350);
    glVertex2f(100,425);
glVertex2f(50,425);
glVertex2f(140,500);
glVertex2f(225,425);
glVertex2f(175,425);
glVertex2f(250,350);
glVertex2f(200,350);
glVertex2f(275,250);
glVertex2f(175,250);
glEnd();
}

void tree3()
{glColor3f(0.4,0.19,0.05);
	glBegin(GL_POLYGON);
	glVertex3f(100,250,1);
	glVertex3f(175,250,1);
	glVertex3f(175,75,1);
	glVertex3f(100,75,1);
	glEnd();
	glColor3f(0.0,0.3,0.0);

	glBegin(GL_POLYGON);
	glVertex2f(100,250);
	glVertex2f(0,250);
	glVertex2f(75,350);
glVertex2f(25,350);
glVertex2f(100,425);
glVertex2f(50,425);
glVertex2f(140,500);
glVertex2f(225,425);
glVertex2f(175,425);
glVertex2f(250,350);
glVertex2f(200,350);
glVertex2f(275,250);
glVertex2f(175,250);
glEnd();
}


void tree2()
{
	glColor3f(0.3,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(100,250);
	glVertex2f(175,250);
	glVertex2f(175,75);
	glVertex2f(100,75);
	glEnd();
	glColor3f(0.0,0.3,0.01);

	glBegin(GL_POLYGON);
	glVertex2f(100,250);
	glVertex2f(0,250);
	glVertex2f(75,350);
glVertex2f(25,350);
glVertex2f(100,425);
glVertex2f(50,425);
glVertex2f(140,500);
glVertex2f(225,425);
glVertex2f(175,425);
glVertex2f(250,350);
glVertex2f(200,350);
glVertex2f(275,250);
glVertex2f(175,250);
glEnd();
}













void init()
{
	glClearColor(0.0,0.0,0.0,1.0);
	glColor3f(1.0,1.0,1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,999.0,0.0,999.0);
}
int main(int argc, char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Assignment One");
	glutDisplayFunc(display);
	init();
	glutMainLoop();
}
