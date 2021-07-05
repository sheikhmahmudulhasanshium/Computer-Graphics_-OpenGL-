#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
void TrafficLight(float x,float y,float a,float b)
{
    float lighta=20,lightb=40;
    float lightx=10,lighty=10;
    	for(int i=0;i<6;i++)
        if(i%2==0)
        {
            if(i==4)
            {
                glColor3ub(255,0,0);
            }
            else if(i==2)
            {
                glColor3ub(100,100,0);
            }
            else
            {
                glColor3ub(0,100,0);
            }

            glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
            for(int i=0;i<200;i++)
            {



                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=0.35;
                float p =-360+(lightx+(r *lighta* cos(A)));
                float q =130+(lighty+(r *lightb* sin(A)));
                glVertex2f(p,q);
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
    glVertex2f((a+(-0.5*x)),(b+(7.5*y)));
    glVertex2f((a+(0.5*x)),(b+(8.0*y)));
    glVertex2f((a+(0.5*x)),(b+(17.5*y)));
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

float x=20,y=20;//Scale
float a=-350,b=-40;//Position
glPointSize(200.0);

TrafficLightBody(x,y,a,b);
TrafficLightBox(x,y,a,b);
}


void CarTire(float Carx2,float Cary2,float Cara2,float Carb2,float Carx3,float Cary3,float Cara3,float Carb3,float Carx4,float Carx5)
{
    //Tires

    for(int Cartire=0;Cartire<6;Cartire++)
    {


        {
            glBegin(GL_POLYGON);//tire-1
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(0,0,0);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=2.5;
                float x = (Carx2+(r*Cara2*cos(A)));
                float y =(Cary2+(r*Carb2*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
                Carx2=Carx2+200;

            glBegin(GL_POLYGON);
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(168, 169, 173);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=1.5;
                float x = (Carx3+(r*Cara3*cos(A)));
                float y =(Cary3+(r*Carb3*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
                Carx3=Carx3+200;

                            glBegin(GL_POLYGON);//tire-2
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(0,0,0);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=2.5;
                float x = (Carx4+(r*Cara2*cos(A)));
                float y =(Cary2+(r*Carb2*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
                Carx4=Carx4+200;

                glBegin(GL_POLYGON);
            glLineWidth(7.5);
            for(int i=0;i<200;i++)
            {

                glColor3ub(168, 169, 173);
                float pi=3.1416;
                float A=(i*2*pi)/200;
                float r=1.5;
                float x = (Carx5+(r*Cara3*cos(A)));
                float y =(Cary3+(r*Carb3*sin(A)));
                glVertex2f(x,y );

            }
                glEnd();
                Carx5=Carx5+200;
        }

    }

}

void CarBodyReverse(float Carx,float Cary,float Cara,float Carb)
{


    for(int carNumber=0;carNumber<6;carNumber++)
    {
        if(carNumber%2==0)
        {
            glColor3ub(20,25,40);

        }
        else
        {
            glColor3ub(255,192,2);

        }
        glBegin(GL_POLYGON);
        glVertex2f(((-Cara*20)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((-Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((-Cara*35)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*40)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*40)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((-Cara*14)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((-Cara*16)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*18)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*20)+Carx),(Cary+(Carb*-30)));
        glEnd();

         glBegin(GL_POLYGON);//window
        glColor3ub(0, 0, 0);
        glVertex2f(((-Cara*20)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((-Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((-Cara*35)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*34)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*16)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*18)+Carx),(Cary+(Carb*-35)));
        glEnd();


        glBegin(GL_POLYGON);
        glColor3ub(192,192,192);
        glVertex2f(((-Cara*26)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((-Cara*25)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((-Cara*25)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((-Cara*26)+Carx),(Cary+(Carb*-35)));
        glEnd();

        Carx=Carx+200;
    }


}

void CarBody(float Carx,float Cary,float Cara,float Carb)
{


    for(int carNumber=0;carNumber<6;carNumber++)
    {
        if(carNumber%2==0)
        {
            glColor3ub(55,5,40);

        }
        else
        {
            glColor3ub(255,5,40);

        }
        glBegin(GL_POLYGON);
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*35)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*40)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*40)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*14)+Carx),(Cary+(Carb*-42)));
        glVertex2f(((Cara*16)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*18)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glEnd();




        glBegin(GL_POLYGON);//window
        glColor3ub(0, 0, 0);
        glVertex2f(((Cara*20)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*30)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*35)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*34)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*16)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*18)+Carx),(Cary+(Carb*-35)));
        glEnd();

        glBegin(GL_POLYGON);//window-border
        glColor3ub(192,192,192);
        glVertex2f(((Cara*26)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*25)+Carx),(Cary+(Carb*-30)));
        glVertex2f(((Cara*25)+Carx),(Cary+(Carb*-35)));
        glVertex2f(((Cara*26)+Carx),(Cary+(Carb*-35)));
        glEnd();


        Carx=Carx+200;
    }


}
void CarReverse()
{

     float CarxR3=00,CaryR3=60-8+200-48;//Position
     float CaraR3=5,CarbR3=5;//Scale
     CarBodyReverse(CarxR3,CaryR3,CaraR3,CarbR3);


     float CarxR32=-100-70,CaryR32=-138-32+80+110-32;//Position
     float CaraR32=5,CarbR32=10;//Scale
     float CarxR33=-100-70,CaryR33=-138-32+80+110-32;//Position
     float CaraR33=5,CarbR33=10;//Scale

     float CarxR34=-100;//Position
     float CarxR35=-100;//Position
     CarTire(CarxR32,CaryR32,CaraR32,CarbR32,CarxR33,CaryR33,CaraR33,CarbR33,CarxR34,CarxR35);

      float CarxR4=-100,CaryR4=60-8+216;//Position
     float CaraR4=5,CarbR4=5;//Scale
     CarBodyReverse(CarxR4,CaryR4,CaraR4,CarbR4);


     float CarxR42=-100-70-100,CaryR42=-138+80+110;//Position
     float CaraR42=5,CarbR42=10;//Scale
     float CarxR43=-100-70-100,CaryR43=-138+80+110;//Position
     float CaraR43=5,CarbR43=10;//Scale

     float CarxR44=-100-100;//Position
     float CarxR45=-100-100;//Position
     CarTire(CarxR42,CaryR42,CaraR42,CarbR42,CarxR43,CaryR43,CaraR43,CarbR43,CarxR44,CarxR45);



}
void CarForward()
{
     float Carx=-600,Cary=60-8;//Position
     float Cara=5,Carb=5;//Scale
     CarBody(Carx,Cary,Cara,Carb);

     float Carx2=100-600,Cary2=-138-16;//Position
     float Cara2=5,Carb2=10;//Scale
     float Carx3=100-600,Cary3=-138-16;//Position
     float Cara3=5,Carb3=10;//Scale

     float Carx4=170-600;//Position
     float Carx5=170-600;//Position

     CarTire(Carx2,Cary2,Cara2,Carb2,Carx3,Cary3,Cara3,Carb3,Carx4,Carx5);



     float CarxR2=-600+50,CaryR2=60-8+80;//Position
     float CaraR2=5,CarbR2=5;//Scale
     CarBody(CarxR2,CaryR2,CaraR2,CarbR2);

     float CarxR22=100-600+50,CaryR22=-138-16+80;//Position
     float CaraR22=5,CarbR22=10;//Scale
     float CarxR23=100-600+50,CaryR23=-138-16+80;//Position
     float CaraR23=5,CarbR23=10;//Scale

     float CarxR24=170-600+50;//Position
     float CarxR25=170-600+50;//Position

     CarTire(CarxR22,CaryR22,CaraR22,CarbR22,CarxR23,CaryR23,CaraR23,CarbR23,CarxR24,CarxR25);

}


void Street3()
{
        float Streetx=0,Streety=-38;//Position
        float Streeta=20,Streetb=4.5;//Scale
        glBegin(GL_QUADS);
        glColor3ub(172, 180, 72);//garden
        glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety-10.0+70.0)));
        glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety-10.0+70.0)));
        glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety+30.0+40.0)));
        glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety+30.0+40.0)));
        glEnd();
}
void Street2()
{


    float Streetx=0,Streety=-38;//Position
    float Streeta=20,Streetb=4.5;//Scale
    glBegin(GL_QUADS);
    glColor3ub(172, 180, 172);//garden
    glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety-10.0+70.0)));
    glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety-10.0+70.0)));
    glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety+30.0+70.0)));
    glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety+30.0+70.0)));
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(72, 89, 82);//pitch road
    glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety-10.0+30.0)));
    glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety-10.0+30.0)));
    glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety+30.0+30.0)));
    glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety+30.0+30.0)));
    glEnd();
    float Streetx2=-35,Streety2=30.0;//Position
    float Streeta2=10,Streetb2=1.5;//Scale
    for(int i=0;i<35;i++)
    {
        if(i%2!=0)
        {
            glBegin(GL_QUADS);
            glColor3ub(255.0,255.0,255);
            glVertex2f((Streeta2*(-20.0+Streetx2)),(Streetb2*(Streety2-8.5)));
            glVertex2f((Streeta2*(-15.0+Streetx2)),(Streetb2*(Streety2-8.5)));
            glVertex2f((Streeta2*(-15.0+Streetx2)),(Streetb2*(Streety2+8.5)));
            glVertex2f((Streeta2*(-20.0+Streetx2)),(Streetb2*(Streety2+8.5)));
            glEnd();
            Streetx2=Streetx2+5;
        }
        else
        {
            Streetx2=Streetx2+5;

        }
        float x=10,y=25;//scale
        float p=-15,q=0;//position
        glBegin(GL_QUADS);//road-divider
        glColor3ub(171, 170, 169);
        glVertex2f((x*(55.0+p)),(y*(-1.5+q)));
        glVertex2f((x*(0.0+p)),(y*(-1.5+q)));
        glVertex2f((x*(0.0+p)),(y*(-2.0+q)));
        glVertex2f((x*(55.0+p)),(y*(-2.0+q)));
        glEnd();
        glBegin(GL_QUADS);//road-divider
        glColor3ub(171, 170, 169);
        glVertex2f((x*(-50.0+p)),(y*(-1.5+q)));
        glVertex2f((x*(-0.0+p)),(y*(-1.5+q)));
        glVertex2f((x*(-0.0+p)),(y*(-2.0+q)));
        glVertex2f((x*(-50.0+p)),(y*(-2.0+q)));
        glEnd();


    }
}


void Street1()
{
    float Streetx=0,Streety=-38;//Position
    float Streeta=20,Streetb=4.5;//Scale
    glBegin(GL_QUADS);
    glColor3ub(72, 89, 82);//pitch road
    glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety-10.0)));
    glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety-10.0)));
    glVertex2f((Streeta*(20.0+Streetx)),(Streetb*(Streety+30.0)));
    glVertex2f((Streeta*(-20.0+Streetx)),(Streetb*(Streety+30.0)));
    glEnd();
    float Streetx1=-35,Streety1=-75.0;//Position
    float Streeta1=10,Streetb1=1.5;//Scale
    for(int i=0;i<35;i++)
    {
        if(i%2!=0)
        {
            glBegin(GL_QUADS);
            glColor3ub(255.0,255.0,255);
            glVertex2f((Streeta1*(-20.0+Streetx1)),(Streetb1*(Streety1-8.5)));
            glVertex2f((Streeta1*(-15.0+Streetx1)),(Streetb1*(Streety1-8.5)));
            glVertex2f((Streeta1*(-15.0+Streetx1)),(Streetb1*(Streety1+8.5)));
            glVertex2f((Streeta1*(-20.0+Streetx1)),(Streetb1*(Streety1+8.5)));
            glEnd();
            Streetx1=Streetx1+5;
        }
        else
        {
            Streetx1=Streetx1+5;

        }


    }
}
void BatFirstQuadrant(float Batx,float Baty,float Bata,float Batb)
{

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+4.0)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+7.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+7.5)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle-finger
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(3.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+6.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-quads
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+1.5)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+5.0)));
    glVertex2f((Bata*(3.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();


    glBegin(GL_POLYGON);//ear
    glColor3ub(0,0,0);
    glVertex2f((Bata*(1.0+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+5.0)));
    glEnd();

}
void BatSecondQuadrant(float Batx,float Baty,float Bata,float Batb)
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+4.0)));
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle-finger
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(-3.0+Batx)),(Batb*(Baty+7.5)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+6.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+7.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+7.5)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-Quads
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+2.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-hand-triangle
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+1.5)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+5.0)));
    glVertex2f((Bata*(-3.0+Batx)),(Batb*(Baty+1.5)));
    glEnd();

    glBegin(GL_POLYGON);//ear
    glColor3ub(0,0,0);
    glVertex2f((Bata*(-1.0+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+4.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+5.0)));
    glEnd();
}

void BatThirdQuadrant(float Batx,float Baty,float Bata,float Batb)
{


    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+-8.0)));//tail
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(9.0+Batx)),(Batb*(Baty+-2.0)));
    glVertex2f((Bata*(7.0+Batx)),(Batb*(Baty+-7.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-7.5)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-Quads
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-2.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-triangle
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-1.5)));
    glVertex2f((Bata*(5.0+Batx)),(Batb*(Baty+-5.0)));
    glVertex2f((Bata*(3.0+Batx)),(Batb*(Baty+-1.5)));
    glEnd();
}

void BatFourthQuadrant(float Batx,float Baty,float Bata,float Batb)
{
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//RGB Black
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(0.0+Batx)),(Batb*(Baty+-8.0)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-9.0+Batx)),(Batb*(Baty+-2.0)));
    glVertex2f((Bata*(-7.0+Batx)),(Batb*(Baty+-7.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-7.5)));
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-Quads
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+-4.0)));
    glVertex2f((Bata*(-1.5+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+0.0)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-2.0)));
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);//black-leg-triangle
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-1.5)));
    glVertex2f((Bata*(-5.0+Batx)),(Batb*(Baty+-5.0)));
    glVertex2f((Bata*(-3.0+Batx)),(Batb*(Baty+-1.5)));
    glEnd();

}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void Bat() {

float Batx=5,Baty=450;//Position
float Bata=1.1,Batb=1.0;//Scale

for(int i=0;i<=10;i++)
{
    Batx=Batx+13;
    if(i%2==0)
    {
        BatFirstQuadrant(Batx,Baty,Bata,Batb);
        BatSecondQuadrant(Batx,Baty,Bata,Batb);
        BatThirdQuadrant(Batx,Baty,Bata,Batb);
        BatFourthQuadrant(Batx,Baty,Bata,Batb);
        Batx=Batx+10;
        Baty=Baty+10;
    }
    else
        {
            BatFirstQuadrant(Batx,Baty,Bata,Batb);
            BatSecondQuadrant(Batx,Baty,Bata,Batb);
            BatThirdQuadrant(Batx,Baty,Bata,Batb);
            BatFourthQuadrant(Batx,Baty,Bata,Batb);
            Batx=Batx+40;
            Baty=Baty-30;

        }

}



}

void Moon() {
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	float moonX=45,moonY=70;//Size
	float moonA=45,moonB=500;//Position
	for(int i=0;i<200;i++)
        {
            glColor3f(234,244,252);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.85;
            float x = (moonA+(r *moonX* cos(A)));
            float y = (moonB+(r *moonY* sin(A)));
            glVertex2f(x,y);
        }


    glEnd();
}

void Benchplot(float x,float y,float a,float b)
{
    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
    glVertex2f(((-10.0*x)+a),(b+(0.0*y)));
    glVertex2f(((10.0*x)+a),(b+(0.0*y)));
    glVertex2f(((0.0*x)+a),(b-(10.0*y)));
    glVertex2f(((0.0*x)+a),(b+(10.0*y)));
    glEnd();

}
void BenchLeftSide(float x,float y,float a,float b)
{
    glColor3ub(128.0f, 0.0f, 32.0f);
    glBegin(GL_QUADS);//base-rod
    glVertex2f(((-5.0*x)+a),(b+(0.0*y)));
    glVertex2f(((-4.3*x)+a),(b+(0.0*y)));
    glVertex2f(((-4.3*x)+a),(b+(3.5*y)));
    glVertex2f(((-5.0*x)+a),(b+(3.5*y)));
    glEnd();

    glBegin(GL_TRIANGLES);//base-angle
    glVertex2f(((-4.3*x)+a),(b+(2.5*y)));
    glVertex2f(((-6.0*x)+a),(b+(4.0*y)));
    glVertex2f(((-4.3*x)+a),(b+(4.0*y)));
    glEnd();

    glBegin(GL_QUADS);//upper-rod
    glVertex2f(((-5.0*x)+a),(b+(3.0*y)));
    glVertex2f(((-4.3*x)+a),(b+(3.0*y)));
    glVertex2f(((-4.3*x)+a),(b+(10.0*y)));
    glVertex2f(((-4.9*x)+a),(b+(10.0f*y)));
    glEnd();

    glColor3ub(218.0f, 160.0f, 109.0f);
    glBegin(GL_QUADS);//seat
    glVertex2f(((-6.8*x)+a),(b+(4.0*y)));
    glVertex2f(((-0.0*x)+a),(b+(4.0*y)));
    glVertex2f(((-0.0*x)+a),(b+(4.5*y)));
    glVertex2f(((-7.0*x)+a),(b+(4.5*y)));
    glEnd();

    glBegin(GL_QUADS);//base-rod-holder
    glColor3ub(0,0,0);
    glVertex2f(((-5.3*x)+a),(b+(0.0*y)));
    glVertex2f(((-4.0*x)+a),(b+(0.0*y)));
    glVertex2f(((-4.3*x)+a),(b+(1.5*y)));
    glVertex2f(((-5.0*x)+a),(b+(1.5*y)));
    glEnd();

    float  p=0,q=0;
    float x1=6.0,y1=5.0,x2=0.0,y2=5.5;
    for(int i=0;i<10;i++)
    {


        if(i%2==0)
        {

            glBegin(GL_QUADS);
            glColor3ub(247, 140, 0);
            glVertex2f(((-(x1+p)*x)+a),(b+((y1+q)*y)));
            glVertex2f(((-(x2+p)*x)+a),(b+((y1+q)*y)));
            glVertex2f(((-(x2+p)*x)+a),(b+((y2+q)*y)));
            glVertex2f(((-(x1+p)*x)+a),(b+((y2+q)*y)));
            glEnd();
            ++q;
        }

    }


}
void BenchRightSide(float x,float y,float a,float b)
{
    glColor3ub(128.0f, 0.0f, 32.0f);
    glBegin(GL_QUADS);//base-rod
    glVertex2f(((5.0*x)+a),(b+(0.0*y)));
    glVertex2f(((4.3*x)+a),(b+(0.0*y)));
    glVertex2f(((4.3*x)+a),(b+(3.5*y)));
    glVertex2f(((5.0*x)+a),(b+(3.5*y)));
    glEnd();

    glBegin(GL_TRIANGLES);//base-angle
    glVertex2f(((4.3*x)+a),(b+(2.5*y)));
    glVertex2f(((6.0*x)+a),(b+(4.0*y)));
    glVertex2f(((4.3*x)+a),(b+(4.0*y)));
    glEnd();

    glBegin(GL_QUADS);//upper-rod
    glVertex2f(((5.0*x)+a),(b+(3.0*y)));
    glVertex2f(((4.3*x)+a),(b+(3.0*y)));
    glVertex2f(((4.3*x)+a),(b+(10.0*y)));
    glVertex2f(((4.9*x)+a),(b+(10.0*y)));
    glEnd();

    glColor3ub(218.0f, 160.0f, 109.0f);
    glBegin(GL_QUADS);//seat
    glVertex2f(((6.8*x)+a),(b+(4.0*y)));
    glVertex2f(((0.0*x)+a),(b+(4.0*y)));
    glVertex2f(((0.0*x)+a),(b+(4.5*y)));
    glVertex2f(((7.0*x)+a),(b+(4.5*y)));
    glEnd();

    glBegin(GL_QUADS);//base-rod-holder
    glColor3ub(0,0,0);

    glVertex2f(((5.3*x)+a),(b+(0.0*y)));
    glVertex2f(((4.0*x)+a),(b+(0.0*y)));
    glVertex2f(((4.3*x)+a),(b+(1.5*y)));
    glVertex2f(((5.0*x)+a),(b+(1.5*y)));
    glEnd();

    float x1=6.0,y1=5.0,x2=0.0,y2=5.5;
    float  p=0,q=0;

    for(int i=0;i<10;i++)
    {


        if(i%2==0)
        {

            glBegin(GL_QUADS);
            glColor3ub(247, 140, 0);
            glVertex2f((((x1+p)*x)+a),(b+((y1+q)*y)));
            glVertex2f((((x2+p)*x)+a),(b+((y1+q)*y)));
            glVertex2f((((x2+p)*x)+a),(b+((y2+q)*y)));
            glVertex2f((((x1+p)*x)+a),(b+((y2+q)*y)));
            glEnd();
            ++q;
        }

    }


}
void BenchBody(float x,float y,float a,float b)
{

    BenchLeftSide(x,y,a,b);
    BenchRightSide(x,y,a,b);
    glFlush();  // Render now

}
void Bench() {

float benchx=3.5,benchy=3.5;  //Scale or ratio of bench
float bencha=80,benchb=110;//position
BenchBody(benchx,benchy,bencha,benchb);
//Benchplot(benchx,benchy,bencha,benchb);
}

void FloorLeftSide(float x,float y,float p,float q) {


    for(int floorheight=0;floorheight<25;floorheight++)
    {
        glColor3ub(143,188,143);//dark-sea-green/upper-floor

        if(floorheight%3==0)
        {
            glBegin(GL_QUADS);//base

            float baseP1=0,baseQ2=5;
            float baseP2=15,baseQ1=8;

            glVertex2f((x*(-baseP1+p)),(y*(baseQ1+q)));
            glVertex2f((x*(-baseP2+p)),(y*(baseQ1+q)));
            glVertex2f((x*(-baseP2+p)),(y*(baseQ2+q)));
            glVertex2f((x*(-baseP1+p)),(y*(baseQ2+q)));
            glEnd();


            glBegin(GL_QUADS);//Yellow Door-1
            glColor3ub(240,250,170);

            glVertex2f((x*(-3.0+p)),(y*(5.5f+q)));
            glVertex2f((x*(-1.5+p)),(y*(5.5f+q)));
            glVertex2f((x*(-1.5+p)),(y*(7.3f+q)));
            glVertex2f((x*(-3.0+p)),(y*(7.3f+q)));
            glEnd();

            glBegin(GL_QUADS);//Window-1
            glColor3ub(255,250,0);
            glVertex2f((x*(-8.5+p)),(y*(6.0f+q)));
            glVertex2f((x*(-6.0+p)),(y*(6.0f+q)));
            glVertex2f((x*(-6.0+p)),(y*(7.3f+q)));
            glVertex2f((x*(-8.5+p)),(y*(7.3f+q)));
            glEnd();

            glBegin(GL_QUADS);//Window-2
            glColor3ub(255,250,0);
            glVertex2f((x*(-13.5+p)),(y*(6.0f+q)));
            glVertex2f((x*(-11+p)),(y*(6.0f+q)));
            glVertex2f((x*(-11+p)),(y*(7.3f+q)));
            glVertex2f((x*(-13.5+p)),(y*(7.3f+q)));
            glEnd();

            float dividerP1=15, dividerQ1=5;
            float dividerP2=0, dividerQ2=5;

            glBegin(GL_LINES);
            glColor3ub(85.0f,107.0f,47.0);//dark-olive-green-divider
            glPointSize(600);
            glVertex2f((x*(-dividerP1+p)),(y*(dividerQ1+q)));
            glVertex2f((x*(-dividerP2+p)),(y*(dividerQ2+q)));
            glEnd();

            ++q;
            ++q;
            ++q;
        }
    }


}
void FloorRightSide(float x,float y,float p,float q) {


    for(int floorheight=0;floorheight<25;floorheight++)
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


            glBegin(GL_QUADS);//Brown Door-1
            glColor3ub(240,250,170);
            glVertex2f((x*(3.0+p)),(y*(5.5f+q)));
            glVertex2f((x*(1.5+p)),(y*(5.5f+q)));
            glVertex2f((x*(1.5+p)),(y*(7.3f+q)));
            glVertex2f((x*(3.0+p)),(y*(7.3f+q)));
            glEnd();

            glBegin(GL_QUADS);//Yellow Window-1

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
glVertex2f((x*(-15.0+p)),(y*(0.0+q)));
glVertex2f((x*(-0.0+p)),(y*(0.0+q)));
glVertex2f((x*(-0.0+p)),(y*(2.0+q)));
glVertex2f((x*(-15.0+p)),(y*(2.0+q)));
glEnd();


glColor3ub(143,188,143);//dark-sea-green/ground-floor
glBegin(GL_QUADS);
glVertex2f((x*(-15.0+p)),(y*(2.0+q)));
glVertex2f((x*(-0.0+p)),(y*(2.0+q)));
glVertex2f((x*(-0.0+p)),(y*(5.0+q)));
glVertex2f((x*(-15.0+p)),(y*(5.0+q)));
glEnd();

glBegin(GL_QUADS);//base-door-bottom
glColor3ub(0,0,0);
glVertex2f((x*(-2.0+p)),(y*(0.0+q)));
glVertex2f((x*(-0.0+p)),(y*(0.0+q)));
glVertex2f((x*(-0.0+p)),(y*(5.0+q)));
glVertex2f((x*(-2.0+p)),(y*(5.0+q)));
glEnd();

glBegin(GL_QUADS);//base-door-top
glPointSize(400);
glColor3ub(240,250,170);
glVertex2f((x*(-1.5+p)),(y*(0.5+q)));
glVertex2f((x*(-0.0+p)),(y*(0.5+q)));
glVertex2f((x*(-0.0+p)),(y*(4.8+q)));
glVertex2f((x*(-1.5+p)),(y*(4.8+q)));
glEnd();

glBegin(GL_LINES);//base-door-top-outline
glPointSize(600);
glColor3ub(255,50,50);
glVertex2f((x*(-1.5+p)),(y*(0.5+q)));
glVertex2f((x*(-0.0+p)),(y*(0.5+q)));

glVertex2f((x*(-0.0+p)),(y*(0.5+q)));
glVertex2f((x*(-0.0+p)),(y*(4.8+q)));

glVertex2f((x*(-0.0+p)),(y*(4.8+q)));
glVertex2f((x*(-1.5+p)),(y*(4.8+q)));

glVertex2f((x*(-1.5+p)),(y*(4.8+q)));
glVertex2f((x*(-1.5+p)),(y*(0.5+q)));

glVertex2f((x*(-1.5+p)),(y*(2.8+q)));
glVertex2f((x*(-0.0+p)),(y*(2.8+q)));

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
void BuildingBody(float x,float y,float p,float q){


    GroundLeftSide(x,y,p,q);
    GroundRightSide(x,y,p,q);
    FloorLeftSide(x,y,p,q);
    FloorRightSide(x,y,p,q);
}

void Plots(float x,float y,float p,float q) {
    glBegin(GL_LINES);
    glColor3ub(0.0f,	0.0f,	0.0f);
    glVertex2f((x*(-20.0+p)),(y*(0.0)));
    glVertex2f((x*(20.0+p)),(y*(0.0+q)));
    glVertex2f((x*(0.0+p)),(y*(20.0+q)));
    glVertex2f((x*(0.0+p)),(y*(-20.0+q)));
    glEnd();
}

void Building() {
float x=5,y=15;//scale
float p=-65,q=07;//position
//Plots();
BuildingBody(x,y, p,q);

float x2=5,y2=15;//scale
float p2=-15,q2=07;//position

float x5=2.5,y5=7.5;//scale
float p5=55,q5=27;//position
//Plots();
BuildingBody(x5,y5, p5,q5);

float x6=2.0,y6=5.5;//scale
float p6=35,q6=27;//position
//Plots();
BuildingBody(x6,y6, p6,q6);


float x7=2.0,y7=7.5;//scale
float p7=5,q7=27;//position
//Plots();
BuildingBody(x7,y7, p7,q7);
//Plots();
BuildingBody(x2,y2, p2,q2);

float x3=2.5,y3=7.5;//scale
float p3=-85,q3=27;//position
//Plots();
BuildingBody(x3,y3, p3,q3);

float x4=5,y4=15;//scale
float p4=45,q4=8.5;//position
//Plots();
BuildingBody(x4,y4, p4,q4);


float x8=5,y8=15;//scale
float p8=85,q8=8.5;//position
//Plots();
BuildingBody(x8,y8, p8,q8);


}


void plot(float Treex,float Treey,float Treea,float Treeb)
{

    glColor3ub(1.0f,1.0f,1.0f);
    glBegin(GL_LINES);
    glVertex2f(((-5.0*Treex)+Treea),(Treeb+(0.0*Treey)));
    glVertex2f(((5.0*Treex)+Treea),(Treeb+(Treey*0.0)));
    glVertex2f(((0.0*Treex)+Treea),(Treeb+(-Treey*5.0)));
    glVertex2f(((0.0*Treex)+Treea),(Treeb+(Treey*10.0)));
    glEnd();

}
void TreeBody(float Treex,float Treey,float Treea,float Treeb)
{
    glColor3ub(210.0f,105.0,30.0);//RGB chocholate
    glBegin(GL_QUADS);//body
    glVertex2f(((-1.0*Treex)+Treea),(Treeb+(-Treey*2.0f)));
    glVertex2f(((0.5*Treex)+Treea),(Treeb+(Treey*0.0f)));
    glVertex2f(((0.80*Treex)+Treea),(Treeb+(Treey*8.0f)));
    glVertex2f(((-0.5*Treex)+Treea),(Treeb+(Treey*6.0f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Left_Branch
    glVertex2f(((-0.5*Treex)+Treea),(Treeb+(Treey*6.0f)));
    glVertex2f(((-3.5*Treex)+Treea),(Treeb+(Treey*9.0f)));
    glVertex2f(((-0.5*Treex)+Treea),(Treeb+(Treey*5.4f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Right_Branch
    glVertex2f(((0.5*Treex)+Treea),(Treeb+(Treey*5.8f)));
    glVertex2f(((5.0*Treex)+Treea),(Treeb+(Treey*11.5f)));
    glVertex2f(((0.7*Treex)+Treea),(Treeb+(Treey*5.3f)));
    glEnd();

    glColor3ub(139.0,69.0,19.0);//RGB_saddle-brown
    glBegin(GL_TRIANGLES);//Right_root
    glVertex2f(((0.5*Treex)+Treea),(Treeb+(Treey*0.0f)));
    glVertex2f(((0.4*Treex)+Treea),(Treeb+(Treey*1.0f)));
    glVertex2f(((4.0*Treex)+Treea),(Treeb+(Treey*0.0f)));
    glEnd();

    glBegin(GL_TRIANGLES);//Left_root
    glVertex2f(((-0.5*Treex)+Treea),(Treeb+(Treey*0.5f)));
    glVertex2f(((-0.4*Treex)+Treea),(Treeb+(Treey*1.5f)));
    glVertex2f(((-4.0*Treex)+Treea),(Treeb+(Treey*0.0f)));
    glEnd();

}
void Leaf(float Treex,float Treey,float Treea,float Treeb)
{

    glBegin(GL_POLYGON);// Draw a green circle centered at up left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(Treea+(Treex*( (r * cos(A))-5)));
            float q =(Treeb+(Treey*( 10+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p =(Treea+(Treex*((r * cos(A))-4)));
            float q =(Treeb+(Treey*(13+r * sin(A))));
            glVertex2f(p,q);
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up Right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (Treea+(Treex*((r * cos(A))+5)));
            float q = (Treeb+(Treey*(10+r * sin(A))));
            glVertex2f(p,q);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a green circle centered at upper left
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (Treea+(Treex*((r * cos(A))-4)));
            float q = (Treeb+(Treey*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

		glBegin(GL_POLYGON);// Draw a green circle centered at upper right
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float p = (Treea+(Treex*((r * cos(A))+4)));
            float q = (Treeb+(Treey*(13+r * sin(A))));
            glVertex2f(p,q );
        }
	glEnd();

    glBegin(GL_POLYGON);// Draw a green circle centered at up middle
	for(int i=0;i<200;i++)
        {
            glColor3ub(54.0f,128.0f,45.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5.5;
            float p = (Treea+(Treex*(r * cos(A))));
            float q = (Treeb+(Treey*(13+r * sin(A))));
            glVertex2f(p,q);
        }

	glEnd();


}
void Tree() {


float Treex=4,Treey=7;//Scale
float Treea=35,Treeb=110;//Position
TreeBody(Treex,Treey,Treea,Treeb);
Leaf(Treex,Treey,Treea,Treeb);
//plot(x,y);

float Treex2=4,Treey2=7;//Scale
float Treea2=135,Treeb2=120;//Position
TreeBody(Treex2,Treey2,Treea2,Treeb2);
Leaf(Treex2,Treey2,Treea2,Treeb2);

float Treex3=4,Treey3=7;//Scale
float Treea3=-220,Treeb3=120;//Position
TreeBody(Treex3,Treey3,Treea3,Treeb3);
Leaf(Treex3,Treey3,Treea3,Treeb3);

 float Treex4=5,Treey4=7;//Scale
float Treea4=350,Treeb4=115;//Position
TreeBody(Treex4,Treey4,Treea4,Treeb4);
Leaf(Treex4,Treey4,Treea4,Treeb4);
Treea4=Treea4-40;
TreeBody(Treex4,Treey4,Treea4,Treeb4);
Leaf(Treex4,Treey4,Treea4,Treeb4);

Treea4=Treea4-60;
TreeBody(Treex4,Treey4,Treea4,Treeb4);
Leaf(Treex4,Treey4,Treea4,Treeb4);
Treea4=Treea4-60;
TreeBody(Treex4,Treey4,Treea4,Treeb4);

}


void StreetLightBody(float x,float y,float a,float b) {
// Draw a Red 1x1 Square centered at origin
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-pillar
glVertex2f((a+(-0.1*x)),(b+(0.0*y)));
glVertex2f((a+(0.1*x)),(b+(0.0*y)));
glVertex2f((a+(0.1*x)),(b+(8.0*y)));
glVertex2f((a+(-0.1*x)),(b+(8.0*y)));
glEnd();
glBegin(GL_QUADS);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p1
glVertex2f((a+(-0.1*x)),(b+(8.0*y)));
glVertex2f((a+(0.1*x)),(b+(7.8*y)));
glVertex2f((a+(0.9*x)),(b+(9.3*y)));
glVertex2f((a+(0.7*x)),(b+(9.5*y)));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f((a+(0.7*x)),(b+(9.5*y)));
glVertex2f((a+(0.9*x)),(b+(9.3*y)));
glVertex2f((a+(2.0*x)),(b+(9.3*y)));
glVertex2f((a+(1.8*x)),(b+(9.5*y)));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(67.0f,	70.0f,	75.0f);//steel-blue-holder-p2
glVertex2f((a+(2.0*x)),(b+(9.3*y)));
glVertex2f((a+(2.0*x)),(b+(9.0*y)));
glVertex2f((a+(1.3*x)),(b+(9.0*y)));
glVertex2f((a+(1.3*x)),(b+(9.3*y)));
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255.0f,255.0f,0.0f);//bright-yellow-light
glVertex2f((a+(1.3*x)),(b+(9.0*y)));
glVertex2f((a+(1.5*x)),(b+(8.6*y)));
glVertex2f((a+(1.8*x)),(b+(8.5*y)));
glVertex2f((a+(2.0*x)),(b+(9.0*y)));
glEnd();


glColor3ub(67.0f,	75.0f,	75.0f);//steel-blue-pillar

glBegin(GL_QUADS);
glVertex2f((a+(-0.3*x)),(b+(0.0*y)));
glVertex2f((a+(0.3*x)),(b+(0.0*y)));
glVertex2f((a+(0.2*x)),(b+(1.5*y)));
glVertex2f((a+(-0.2*x)),(b+(1.5*y)));

glEnd();



}

void StreetLight() {


float StreetLightx=20,StreetLighty=25;//Scale
float StreetLighta=150+5,StreetLightb=-50;//Position
StreetLightBody(StreetLightx,StreetLighty,StreetLighta,StreetLightb);


float StreetLightx2=20,StreetLighty2=25;//Scale
float StreetLighta2=-150+5,StreetLightb2=-50;//Position
StreetLightBody(StreetLightx2,StreetLighty2,StreetLighta2,StreetLightb2);


float StreetLightx3=20,StreetLighty3=25;//Scale
float StreetLighta3=-300+5,StreetLightb3=-50;//Position
StreetLightBody(StreetLightx3,StreetLighty3,StreetLighta3,StreetLightb3);

float StreetLightx4=20,StreetLighty4=25;//Scale
float StreetLighta4=300+5,StreetLightb4=-50;//Position
StreetLightBody(StreetLightx4,StreetLighty4,StreetLighta4,StreetLightb4);

float StreetLightx5=20,StreetLighty5=25;//Scale
float StreetLighta5=05,StreetLightb5=-50;//Position
StreetLightBody(StreetLightx5,StreetLighty5,StreetLighta5,StreetLightb5);
}
void Combined()
{
    glutInitWindowSize(500,500);
    gluOrtho2D(-20,20,-10,30);
    glPointSize(200);
    glClearColor(0.393f, 0.370f, 0.701f,1.0f ); // Set background color to navy-blue
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(200.0);
    Street1();
    Street2();
    Street3();
    Building();
    Tree();
    TrafficLight();

    CarReverse();
    StreetLight();
    CarForward();
    Bench();
    Moon();
    Bat();
    glFlush();
}
/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
glutInit(&argc, argv); // Initialize GLUT
glutCreateWindow("Scenery 2.0"); // Create a window with the given title


glutDisplayFunc(Combined); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
