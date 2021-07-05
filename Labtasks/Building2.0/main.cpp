#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
//position_control_&_scale_successfully_added
//but_position_control_is_defective

void FloorLeftSide(float x,float y,float p,float q) {


    for(int floorheight=0;floorheight<15;floorheight++)
    {
        glColor3ub(143,188,143);//dark-sea-green/upper-floor

        if(floorheight%3==0)
        {
            glBegin(GL_QUADS);//base

            float baseP1=0,baseQ2=5;
            float baseP2=15,baseQ1=8;

            glVertex2f((-x*(baseP1+p)),(y*(baseQ1+q)));
            glVertex2f((-x*(baseP2+p)),(y*(baseQ1+q)));
            glVertex2f((-x*(baseP2+p)),(y*(baseQ2+q)));
            glVertex2f((-x*(baseP1+p)),(y*(baseQ2+q)));
            glEnd();


            glBegin(GL_QUADS);//Yellow Door-1
            glColor3ub(240,250,170);

            glVertex2f((-x*(3.0+p)),(y*(5.5f+q)));
            glVertex2f((-x*(1.5+p)),(y*(5.5f+q)));
            glVertex2f((-x*(1.5+p)),(y*(7.3f+q)));
            glVertex2f((-x*(3.0+p)),(y*(7.3f+q)));
            glEnd();

            glBegin(GL_QUADS);//Window-1
            glColor3ub(255,250,0);
            glVertex2f((-x*(8.5+p)),(y*(6.0f+q)));
            glVertex2f((-x*(6.0+p)),(y*(6.0f+q)));
            glVertex2f((-x*(6.0+p)),(y*(7.3f+q)));
            glVertex2f((-x*(8.5+p)),(y*(7.3f+q)));
            glEnd();

            glBegin(GL_QUADS);//Window-2
            glColor3ub(255,250,0);
            glVertex2f((-x*(13.5+p)),(y*(6.0f+q)));
            glVertex2f((-x*(11+p)),(y*(6.0f+q)));
            glVertex2f((-x*(11+p)),(y*(7.3f+q)));
            glVertex2f((-x*(13.5+p)),(y*(7.3f+q)));
            glEnd();

            float dividerP1=15, dividerQ1=5;
            float dividerP2=0, dividerQ2=5;

            glBegin(GL_LINES);
            glColor3ub(85.0f,107.0f,47.0);//dark-olive-green-divider
            glPointSize(600);
            glVertex2f((-x*(dividerP1+p)),(y*(dividerQ1+q)));
            glVertex2f((-x*(dividerP2+p)),(y*(dividerQ2+q)));
            glEnd();

            ++q;
            ++q;
            ++q;
        }
    }


}
void FloorRightSide(float x,float y,float p,float q) {


    for(int floorheight=0;floorheight<15;floorheight++)
    {
        glColor3ub(143,188,143);//dark-sea-green/upper-floor

        if(floorheight%3==0)
        {
            glBegin(GL_QUADS);//base

            float baseP1=0,baseQ2=5;
            float baseP2=15,baseQ1=8;

            glVertex2f((x*(baseP1+p)),(y*(baseQ1+q)));
            glVertex2f((x*(baseP2+p)),(y*(baseQ1+q)));
            glVertex2f((x*(baseP2+p)),(y*(baseQ2+q)));
            glVertex2f((x*(baseP1+p)),(y*(baseQ2+q)));
            glEnd();


            glBegin(GL_QUADS);//Yellow Door-1
            glColor3ub(240,250,170);
            glVertex2f((x*(3.0+p)),(y*(5.5f+q)));
            glVertex2f((x*(1.5+p)),(y*(5.5f+q)));
            glVertex2f((x*(1.5+p)),(y*(7.3f+q)));
            glVertex2f((x*(3.0+p)),(y*(7.3f+q)));
            glEnd();

            glBegin(GL_QUADS);//Window-1

            glColor3ub(255,250,0);
            glVertex2f((x*(8.5+p)),(y*(6.0f+q)));
            glVertex2f((x*(6.0+p)),(y*(6.0f+q)));
            glVertex2f((x*(6.0+p)),(y*(7.3f+q)));
            glVertex2f((x*(8.5+p)),(y*(7.3f+q)));
            glEnd();

            glBegin(GL_QUADS);//Window-2
            glColor3ub(255,255,0);
            glVertex2f((x*(13.5+p)),(y*(6.0f+q)));
            glVertex2f((x*(11+p)),(y*(6.0f+q)));
            glVertex2f((x*(11+p)),(y*(7.3f+q)));
            glVertex2f((x*(13.5+p)),(y*(7.3f+q)));
            glEnd();

            float dividerP1=15, dividerQ1=5;
            float dividerP2=0, dividerQ2=5;

            glBegin(GL_LINES);
            glColor3ub(85.0f,107.0f,47.0);//dark-olive-green-divider
            glPointSize(600);
            glVertex2f((x*(dividerP1+p)),(y*(dividerQ1+q)));
            glVertex2f((x*(dividerP2+p)),(y*(dividerQ2+q)));

            glVertex2f((x*(dividerP2+p)),(y*(dividerQ1+q+3)));
            glVertex2f((x*(dividerP2+p)),(y*(dividerQ2+q)));
            glEnd();

            ++q;
            ++q;
            ++q;
        }
    }


}



void GroundLeftSide(float x,float y,float p,float q) {
glBegin(GL_QUADS);//dark-olive-green-base
glColor3ub(85.0f,107.0f,47.0);
glVertex2f((-x*(15.0+p)),(y*(0.0+q)));
glVertex2f((-x*(0.0+p)),(y*(0.0+q)));
glVertex2f((-x*(0.0+p)),(y*(2.0+q)));
glVertex2f((-x*(15.0+p)),(y*(2.0+q)));
glEnd();



glColor3ub(143,188,143);//dark-sea-green/ground-floor
glBegin(GL_QUADS);
glVertex2f((-x*(15.0+p)),(y*(2.0+q)));
glVertex2f((-x*(0.0+p)),(y*(2.0+q)));
glVertex2f((-x*(0.0+p)),(y*(5.0+q)));
glVertex2f((-x*(15.0+p)),(y*(5.0+q)));
glEnd();

glBegin(GL_QUADS);//base-door-bottom
glColor3ub(0,0,0);
glVertex2f((-x*(2.0+p)),(y*(0.0+q)));
glVertex2f((-x*(0.0+p)),(y*(0.0+q)));
glVertex2f((-x*(0.0+p)),(y*(5.0+q)));
glVertex2f((-x*(2.0+p)),(y*(5.0+q)));
glEnd();

glBegin(GL_QUADS);//base-door-top
glPointSize(400);
glColor3ub(240,250,170);
glVertex2f((-x*(1.5+p)),(y*(0.5+q)));
glVertex2f((-x*(0.0+p)),(y*(0.5+q)));
glVertex2f((-x*(0.0+p)),(y*(4.8+q)));
glVertex2f((-x*(1.5+p)),(y*(4.8+q)));
glEnd();

glBegin(GL_LINES);//base-door-top-outline
glPointSize(600);
glColor3ub(255,50,50);
glVertex2f((-x*(1.5+p)),(y*(0.5+q)));
glVertex2f((-x*(0.0+p)),(y*(0.5+q)));

glVertex2f((-x*(0.0+p)),(y*(0.5+q)));
glVertex2f((-x*(0.0+p)),(y*(4.8+q)));

glVertex2f((-x*(0.0+p)),(y*(4.8+q)));
glVertex2f((-x*(1.5+p)),(y*(4.8+q)));

glVertex2f((-x*(1.5+p)),(y*(4.8+q)));
glVertex2f((-x*(1.5+p)),(y*(0.5+q)));

glVertex2f((-x*(1.5+p)),(y*(2.8+q)));
glVertex2f((-x*(0.0+p)),(y*(2.8+q)));

glEnd();

}

void GroundRightSide(float x,float y,float p,float q) {
glBegin(GL_QUADS);//dark-olive-green-base
glColor3ub(85.0f,107.0f,47.0);
glVertex2f((x*(15.0+p)),(y*(0.0+q)));
glVertex2f((x*(0.0+p)),(y*(0.0+q)));
glVertex2f((x*(0.0+p)),(y*(2.0+q)));
glVertex2f((x*(15.0+p)),(y*(2.0+q)));
glEnd();



glColor3ub(143,188,143);//dark-sea-green/ground-floor
glBegin(GL_QUADS);
glVertex2f((x*(15.0+p)),(y*(2.0+q)));
glVertex2f((x*(0.0+p)),(y*(2.0+q)));
glVertex2f((x*(0.0+p)),(y*(5.0+q)));
glVertex2f((x*(15.0+p)),(y*(5.0+q)));
glEnd();

glBegin(GL_QUADS);//base-door-bottom
glColor3ub(0,0,0);
glVertex2f((x*(2.0+p)),(y*(0.0+q)));
glVertex2f((x*(0.0+p)),(y*(0.0+q)));
glVertex2f((x*(0.0+p)),(y*(5.0+q)));
glVertex2f((x*(2.0+p)),(y*(5.0+q)));
glEnd();

glBegin(GL_QUADS);//base-door-top
glPointSize(400);
glColor3ub(240,250,170);
glVertex2f((x*(1.5+p)),(y*(0.5+q)));
glVertex2f((x*(0.0+p)),(y*(0.5+q)));
glVertex2f((x*(0.0+p)),(y*(4.8+q)));
glVertex2f((x*(1.5+p)),(y*(4.8+q)));
glEnd();

glBegin(GL_LINES);//base-door-top-outline
glPointSize(600);
glColor3ub(255,50,50);
glVertex2f((x*(1.5+p)),(y*(0.5+q)));
glVertex2f((x*(0.0+p)),(y*(0.5+q)));

glVertex2f((x*(0.0+p)),(y*(0.5+q)));
glVertex2f((x*(0.0+p)),(y*(4.8+q)));

glVertex2f((x*(0.0+p)),(y*(4.8+q)));
glVertex2f((x*(1.5+p)),(y*(4.8+q)));

glVertex2f((x*(1.5+p)),(y*(4.8+q)));
glVertex2f((x*(1.5+p)),(y*(0.5+q)));

glVertex2f((x*(1.5+p)),(y*(2.8+q)));
glVertex2f((x*(0.0+p)),(y*(2.8+q)));

glEnd();


}
void Body(){
    float x=5,y=9.5;//scale
    float p=15,q=10;//position

    GroundLeftSide(x,y,p,q);
    GroundRightSide(x,y,p,q);
    FloorLeftSide(x,y,p,q);
    FloorRightSide(x,y,p,q);
}

void Plots(float x,float y,float p,float q) {
    glBegin(GL_LINES);
    glColor3ub(0.0f,	0.0f,	0.0f);
    glVertex2f((-x*(20.0+p)),(y*(0.0)));
    glVertex2f((x*(20.0+p)),(y*(0.0+q)));
    glVertex2f((x*(0.0+p)),(y*(20.0+q)));
    glVertex2f((x*(0.0+p)),(y*(-20.0+q)));
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

