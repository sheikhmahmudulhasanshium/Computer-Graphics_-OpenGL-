#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void FloorLeftSide() {

    float p=0,q=0;

    for(int floorheight=0;floorheight<15;floorheight++)
    {
        glColor3ub(143,188,143);//dark-sea-green/upper-floor

        if(floorheight%3==0)
        {
            glBegin(GL_QUADS);//base

            float baseP1=0,baseQ2=5;
            float baseP2=15,baseQ1=8;

            glVertex2f(-(baseP1+p),(baseQ1+q));
            glVertex2f(-(baseP2+p),(baseQ1+q));
            glVertex2f(-(baseP2+p),(baseQ2+q));
            glVertex2f(-(baseP1+p),(baseQ2+q));
            glEnd();


            glBegin(GL_QUADS);//Yellow Door-1
            glColor3ub(255,250,0);
            glVertex2f(-(3.0+p),(5.5f+q));
            glVertex2f(-(1.5+p),(5.5f+q));
            glVertex2f(-(1.5+p),(7.3f+q));
            glVertex2f(-(3.0+p),(7.3f+q));
            glEnd();

            glBegin(GL_QUADS);//Window-1
            glColor3ub(240,250,170);
            glVertex2f(-(8.5+p),(6.0f+q));
            glVertex2f(-(6.0+p),(6.0f+q));
            glVertex2f(-(6.0+p),(7.3f+q));
            glVertex2f(-(8.5+p),(7.3f+q));
            glEnd();

            glBegin(GL_QUADS);//Window-2
            glColor3ub(240,250,170);
            glVertex2f(-(13.5+p),(6.0f+q));
            glVertex2f(-(11+p),(6.0f+q));
            glVertex2f(-(11+p),(7.3f+q));
            glVertex2f(-(13.5+p),(7.3f+q));
            glEnd();

            float dividerP1=15, dividerQ1=5;
            float dividerP2=0, dividerQ2=5;

            glBegin(GL_LINES);
            glColor3ub(85.0f,107.0f,47.0);//dark-olive-green-divider
            glPointSize(600);
            glVertex2f(-(dividerP1+p),(dividerQ1+q));
            glVertex2f(-(dividerP2+p),(dividerQ2+q));
            glEnd();

            ++q;
            ++q;
            ++q;
        }
    }


}
void FloorRightSide() {

    float p=0,q=0;

    for(int floorheight=0;floorheight<15;floorheight++)
    {
        glColor3ub(143,188,143);//dark-sea-green/upper-floor

        if(floorheight%3==0)
        {
            glBegin(GL_QUADS);//base

            float baseP1=0,baseQ2=5;
            float baseP2=15,baseQ1=8;

            glVertex2f((baseP1+p),(baseQ1+q));
            glVertex2f((baseP2+p),(baseQ1+q));
            glVertex2f((baseP2+p),(baseQ2+q));
            glVertex2f((baseP1+p),(baseQ2+q));
            glEnd();


            glBegin(GL_QUADS);//Yellow Door-1
            glColor3ub(255,250,0);
            glVertex2f((3.0+p),(5.5f+q));
            glVertex2f((1.5+p),(5.5f+q));
            glVertex2f((1.5+p),(7.3f+q));
            glVertex2f((3.0+p),(7.3f+q));
            glEnd();

            glBegin(GL_QUADS);//Window-1
            glColor3ub(240,250,170);
            glVertex2f((8.5+p),(6.0f+q));
            glVertex2f((6.0+p),(6.0f+q));
            glVertex2f((6.0+p),(7.3f+q));
            glVertex2f((8.5+p),(7.3f+q));
            glEnd();

            glBegin(GL_QUADS);//Window-2
            glColor3ub(240,250,170);
            glVertex2f((13.5+p),(6.0f+q));
            glVertex2f((11+p),(6.0f+q));
            glVertex2f((11+p),(7.3f+q));
            glVertex2f((13.5+p),(7.3f+q));
            glEnd();

            float dividerP1=15, dividerQ1=5;
            float dividerP2=0, dividerQ2=5;

            glBegin(GL_LINES);
            glColor3ub(85.0f,107.0f,47.0);//dark-olive-green-divider
            glPointSize(600);
            glVertex2f((dividerP1+p),(dividerQ1+q));
            glVertex2f((dividerP2+p),(dividerQ2+q));
            glEnd();

            ++q;
            ++q;
            ++q;
        }
    }


}



void GroundLeftSide() {
glBegin(GL_QUADS);//dark-olive-green-base
glColor3ub(85.0f,107.0f,47.0);
glVertex2f(-15.0f,0.0f);
glVertex2f(-0.0f,0.0f);
glVertex2f(-0.0f,2.0f);
glVertex2f(-15.0f,2.0f);
glEnd();



glColor3ub(143,188,143);//dark-sea-green/ground-floor
glBegin(GL_QUADS);
glVertex2f(-15.0f,2.0f);
glVertex2f(-0.0f,2.0f);
glVertex2f(-0.0f,5.0f);
glVertex2f(-15.0f,5.0f);
glEnd();

glBegin(GL_QUADS);//base-door-bottom
glColor3ub(0,0,0);
glVertex2f(-2.0f,0.0f);
glVertex2f(-0.0f,0.0f);
glVertex2f(-0.0f,5.0f);
glVertex2f(-2.0f,5.0f);
glEnd();

glBegin(GL_QUADS);//base-door-top
glPointSize(400);
glColor3ub(240,250,170);
glVertex2f(-1.5f,0.5f);
glVertex2f(-0.0f,0.5f);
glVertex2f(-0.0f,4.8f);
glVertex2f(-1.5f,4.8f);
glEnd();

glBegin(GL_LINES);//base-door-top-outline
glPointSize(600);
glColor3ub(255,50,50);
glVertex2f(-1.5f,0.5f);
glVertex2f(-0.0f,0.5f);

glVertex2f(-0.0f,0.5f);
glVertex2f(-0.0f,4.8f);

glVertex2f(-0.0f,4.8f);
glVertex2f(-1.5f,4.8f);

glVertex2f(-1.5f,4.8f);
glVertex2f(-1.5f,0.5f);

glVertex2f(-1.5f,2.8f);
glVertex2f(-0.0f,2.8f);

glEnd();

}

void GroundRightSide() {
glBegin(GL_QUADS);//dark-olive-green-base
glColor3ub(85.0f,107.0f,47.0);
glVertex2f(15.0f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(0.0f,2.0f);
glVertex2f(15.0f,2.0f);
glEnd();



glColor3ub(143,188,143);//dark-sea-green/ground-floor
glBegin(GL_QUADS);
glVertex2f(15.0f,2.0f);
glVertex2f(0.0f,2.0f);
glVertex2f(0.0f,5.0f);
glVertex2f(15.0f,5.0f);
glEnd();

glBegin(GL_QUADS);//base-door-bottom
glColor3ub(0,0,0);
glVertex2f(2.0f,0.0f);
glVertex2f(0.0f,0.0f);
glVertex2f(0.0f,5.0f);
glVertex2f(2.0f,5.0f);
glEnd();

glBegin(GL_QUADS);//base-door-top
glPointSize(400);
glColor3ub(240,250,170);
glVertex2f(1.5f,0.5f);
glVertex2f(0.0f,0.5f);
glVertex2f(0.0f,4.8f);
glVertex2f(1.5f,4.8f);
glEnd();

glBegin(GL_LINES);//base-door-top-outline
glPointSize(600);
glColor3ub(255,50,50);
glVertex2f(1.5f,0.5f);
glVertex2f(0.0f,0.5f);

glVertex2f(0.0f,0.5f);
glVertex2f(0.0f,4.8f);

glVertex2f(0.0f,4.8f);
glVertex2f(1.5f,4.8f);

glVertex2f(1.5f,4.8f);
glVertex2f(1.5f,0.5f);

glVertex2f(1.5f,2.8f);
glVertex2f(0.0f,2.8f);

glEnd();


}
void Body(){
    GroundLeftSide();
    GroundRightSide();
    FloorLeftSide();
    FloorRightSide();
}

void Plots() {
    glBegin(GL_LINES);
    glColor3ub(0.0f,	0.0f,	0.0f);
    glVertex2f(-20.0f,0.0f);
    glVertex2f(20.0f,0.0f);
    glVertex2f(0.0f,20.0f);
    glVertex2f(0.0f,-20.0f);
    glEnd();
}

void Building() {

//float x=10,y=10;//Scale
glutInitWindowSize(320,320);
gluOrtho2D(-20,20,-20,20);
glPointSize(200);
glClearColor(0.6f,0.4f, 1.0f,1.0f); // Set background color to violate and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glPointSize(200.0);
//Plots();
Body();
 glFlush(); // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Street Light"); // Create a window with the given title


glutDisplayFunc(Building); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}

