#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
float  a=0,b=0,aa=0,bb=0,flag=0,flag3=0;
float x=100,y=0,r=0.5,y11=0,y21=0,y31=0,y41=0,y51=0,y61=0,y71=0,y81=0,y91=0,y10=0,y12=0,y13=0,y14=0,x0=0,xo=0, angle=0.0, pi=3.142;
void create_menu(void);
void menu(int);
void mov(void);

void drawstring(float x,float y,float z,char *string)
{
 char *c;
 glRasterPos3f(x,y,z);
 for(c=string;*c!='\0';c++)
 {
  glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,*c);
 }
}

void init()
{
glClearColor(0.0,1.0,0.9,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
}
void screen()
{    glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0,0.0,1.0);
glFlush();
 glutSwapBuffers();
}
void reshape(GLint w, GLint h)
{
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
if(h>w)
gluOrtho2D(0, 500, ((float)h/(float)w)*(0), ((float)h/(float)w)*500);
else
gluOrtho2D(((float)w/(float)h)*(0), ((float)w/(float)h)*(500), 0, 500);
glMatrixMode(GL_MODELVIEW);
glutPostRedisplay();
}
void fish1()
{


glColor3f(1.0,0.0,0.0);
  glBegin(GL_POLYGON);
   glVertex2f(270+a,350+aa);

   glVertex2f(300+a,325+aa);

   glVertex2f(370+a,350+aa);
   glVertex2f(300+a,375+aa);
  glEnd();

glBegin(GL_POLYGON);

    glVertex2f(360+a,350+aa);
    glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(405+a,370+aa);
   glVertex2f(395+a,350+aa);
   glVertex2f(405+a,327+aa);
  glEnd();

  glBegin(GL_TRIANGLES);

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
    glVertex2f(302+a,373+aa);
   glColor3f(1.0,0.0,0.0);
glVertex2f(340+a,409+aa);
glVertex2f(320+a,360+aa);
  glEnd();

glBegin(GL_TRIANGLES);

glColor3ub( rand()%1, rand()%1000, 0 );
    glVertex2f(302+a,328+aa);
glColor3f(1.0,0.0,0.0);
glVertex2f(340+a,300+aa);
glVertex2f(320+a,340+aa);
  glEnd();


 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(280+a,355+aa);
  glEnd();
}

void fish2()
{
glColor3f(1.0,0.0,0.0);
  glBegin(GL_POLYGON);
     glColor3f(1.0,1.0,0.0);
     glVertex2f(70+b,145+bb);
   glVertex2f(20+b,120+bb);
  glColor3f(1.0,0.0,0.0);
    glVertex2f(30+b,145+bb);
   glVertex2f(20+b,170+bb);


  glEnd();
  glColor3f(1.0,0.0,0.0);
    glBegin(GL_POLYGON);
   glVertex2f(65+b,145+bb);

   glVertex2f(125+b,170+bb);

   glVertex2f(165+b,145+bb);
   glVertex2f(125+b,120+bb);
  glEnd();

  glBegin(GL_TRIANGLES);
  glColor3f(1.0,1.0,0.0);
    glVertex2f(126+b,168+bb);
   glColor3f(1.0,0.0,0.0);
   glVertex2f(110+b,155+bb);
    glVertex2f(85+b,195+bb);
 glEnd();
 glBegin(GL_TRIANGLES);
  glColor3f(1.0,1.0,0.0);
    glVertex2f(126+b,122+bb);
   glColor3f(1.0,0.0,0.0);
glVertex2f(110+b,136+bb);
glVertex2f(85+b,95+bb);
  glEnd();




 glColor3f(0.0,0.0,0.0);
  glPointSize(4.0);
  glBegin(GL_POINTS);
  glVertex2f(150+b,149+bb);
  glEnd();

}


 void pb()
  {
     glBegin(GL_TRIANGLE_FAN);
  for(angle=0; angle<360.0; angle+=.1)
{
glColor3ub( rand()%10000, rand()%1, rand()%10);
    y =(sin(angle*pi/180)*45);
    x =(cos(angle*pi/180)*75);
    glVertex2f(x+250,y-10);

}

glEnd();
}
 void pb1()
  {
     glBegin(GL_TRIANGLE_FAN);
  for(angle=0; angle<360.0; angle+=.1)
{
glColor3ub( rand()%70, rand()%70, rand()%70 );
    y =(sin(angle*pi/180)*35);
    x =(cos(angle*pi/180)*65);
    glVertex2f(x+370,y-5);

}

glEnd();
}
 void pb2()
  {
     glBegin(GL_TRIANGLE_FAN);
  for(angle=0; angle<360.0; angle+=.1)
{
glColor3ub( rand()%1, rand()%1000, rand()%10 );
    y =(sin(angle*pi/180)*55);
    x =(cos(angle*pi/180)*95);
    glVertex2f(x+650,y+10);

}

glEnd();
}


void circle()
{
glBegin(GL_POINTS);
for(angle=0; angle<360.0; angle+=.1)
{

    y =y21+(sin(angle*pi/180)*15);
    x =(cos(angle*pi/180)*15);
    glVertex2f(x+40,y-30);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y31+(sin(angle*pi/180)*5);
    x =(cos(angle*pi/180)*5);
    glVertex2f(x+30,y-60);
}
for(angle=0; angle<360.0; angle+=.1)
{
    y =y41+(sin(angle*pi/180)*7);
    x =(cos(angle*pi/180)*7);
    glVertex2f(x+40,y-90);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y51+(sin(angle*pi/180)*12);
    x =(cos(angle*pi/180)*12);
    glVertex2f(x+30,y-120);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y61+(sin(angle*pi/180)*15);
    x =(cos(angle*pi/180)*15);
    glVertex2f(x+40,y-150);
}
  for(angle=0; angle<360.0; angle+=.1)
{

    y =y71+(sin(angle*pi/180)*5);
    x =(cos(angle*pi/180)*5);
    glVertex2f(x+30,y-180);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y81+(sin(angle*pi/180)*3);
    x =(cos(angle*pi/180)*3);
    glVertex2f(x+40,y-210);
}
for(angle=0; angle<360.0; angle+=.1)
{
    y =y81+(sin(angle*pi/180)*15);
    x =(cos(angle*pi/180)*15);
    glVertex2f(x+30,y-240);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y91+(sin(angle*pi/180)*12);
    x =(cos(angle*pi/180)*12);
    glVertex2f(x+40,y-270);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y10+(sin(angle*pi/180)*10);
    x =(cos(angle*pi/180)*10);
    glVertex2f(x+30,y-300);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y12+(sin(angle*pi/180)*16);
    x =(cos(angle*pi/180)*16);
    glVertex2f(x+40,y-330);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y13+(sin(angle*pi/180)*15);
    x =(cos(angle*pi/180)*15);
    glVertex2f(x+30,y-360);
}
for(angle=0; angle<360.0; angle+=.1)
{

    y =y14+(sin(angle*pi/180)*10);
    x =(cos(angle*pi/180)*10);
    glVertex2f(x+40,y-400);
}


glEnd();
if(y11<500)
{
y11=y11+2.0;

}
else
{
y11=0;
}
glutPostRedisplay();
if(y21<500)
{
y21=y21+3.0;

}
else
{
y21=0;
}
glutPostRedisplay();
if(y31<500)
{
y31=y31+4.5;

}
else
{
y31=0;
}
glutPostRedisplay();
if(y41<500)
{
y41=y41+7.0;

}
else
{

y41=0;
}
glutPostRedisplay();
if(y51<500)
{
y51=y51+6.5;

}
else
{
y51=0;
}
glutPostRedisplay();
if(y61<500)
{
y61=y61+18.0;

}
else
{
y61=0;
}
glutPostRedisplay();
if(y71<500)
{
y71=y71+17.5;

}
else
{
y71=0;
}
glutPostRedisplay();
if(y81<500)
{
y81=y81+8.0;

}
else
{
y81=0;
}
glutPostRedisplay();
if(y91<500)
{
y91=y91+7.5;

}
else
{
y91=0;
}
glutPostRedisplay();
if(y10<500)
{
y10=y10+10.0;

}
else
{
y10=0;
}
glutPostRedisplay();
if(y12<500)
{
y12=y12+11.0;

}
else
{
y12=0;
}
glutPostRedisplay();


if(y14<500)
{
y14=y14+8.0;

}
else
{
y14=0;
}
glutPostRedisplay();
if(y12<500)
{
y12=y12+9.0;

}
else
{
y12=0;
}
glutPostRedisplay();
if(y13<500)
{
y13=y13+1.0;

}
else
{
y13=0;
}
glutPostRedisplay();
}

void plant()
{

glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(50,0);

   glVertex2f(30,40);
 glColor3f(1.0,1.0,0.0);
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(40,0);
  glVertex2f(65,60);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(90,0);

   glVertex2f(70,40);

 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(80,0);
  glVertex2f(105,60);
  glEnd();
  glColor3f(0.0,1.0,0.0);
 glBegin(GL_POLYGON);
   glVertex2f(120,0);

   glVertex2f(100,45);

 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(110,0);
  glVertex2f(135,65);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(140,0);

  glVertex2f(120,43);
 glColor3f(1.0,1.0,0.0);
   glVertex2f(130,0);
  glVertex2f(155,60);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(100,0);

   glVertex2f(80,40);

 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
   glVertex2f(90,0);
  glVertex2f(105,50);
  glEnd();

  glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(70,0);

   glVertex2f(50,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(60,0);
  glVertex2f(85,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(470,0);

   glVertex2f(450,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(460,0);
  glVertex2f(485,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(490,0);

   glVertex2f(470,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(480,0);
  glVertex2f(505,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(520,0);

   glVertex2f(500,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(510,0);
  glVertex2f(535,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(540,0);

   glVertex2f(520,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(530,0);
  glVertex2f(555,50);
  glEnd();
 glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
   glVertex2f(950,0);

   glVertex2f(930,40);
   glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(940,0);
  glVertex2f(965,50);
  glEnd();
glColor3ub( rand()%1, rand()%1000, rand()%1000 );
  glBegin(GL_POLYGON);
  glVertex2f(870,0);

   glVertex2f(850,40);
  glColor3ub( rand()%1, rand()%1000, rand()%1000 );

   glVertex2f(860,0);
  glVertex2f(885,50);
  glEnd();
}

void display(void)
{



glClear(GL_COLOR_BUFFER_BIT);
pb1();
pb2();

 fish1();

fish2();
if(flag3==0)
{
screen();

}
 glColor3f(1.0,1.0,1.0);


 glPointSize(2.0);
 circle();
plant();
pb();



 glFlush();

 glutSwapBuffers();
}


void mov(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
 glColor3f(1.0,1.0,1.0);
 glPointSize(2.0);
 circle();
plant();


if(a>=-500)

a=a-4.900;

else

 a=500;




 if(a<-500)
 {
  aa=aa-250;
 }
 if(aa<-251)
 {
  aa=50;
 }


if(b<=1000)
 b=b+6.0;
  else

  b=-500;
if(b>1000)
{
bb=bb+150;
}
if(bb>251)
{
bb=50;
}



 fish1();

fish2();
pb();
pb1();pb2();
 glutPostRedisplay();
 glFlush();
 glutSwapBuffers();

}

void mydisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
   if(flag3==0)
  screen();
if(flag3==1)
display();

}

void create_menu(void)
   {
     glutCreateMenu(menu);
     glutAttachMenu(GLUT_LEFT_BUTTON);
     glutAttachMenu(GLUT_RIGHT_BUTTON);
     glutAddMenuEntry("move", 1);
     glutAddMenuEntry("quit", 2);


    }


void menu(int val)
   {


     switch (val) {

     case 1:
glutDisplayFunc(mov);;
break;
case 2 : exit(0);




}
}






void speed()
{
a=a-9.0;
}
void slow()
{
a=a-0.0001;
}
void key(unsigned char k,int x,int y)
{
if(k=='i')
glutIdleFunc(speed);
if(k=='d')
glutIdleFunc(slow);




if(k=='p')
flag3=1;

}
int main(int argc,char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1200,600);
    glutCreateWindow("fish");
    init();
    glutReshapeFunc(reshape);
    glutKeyboardFunc(key);
    glutDisplayFunc(display);
    create_menu();
    glutMainLoop();
}
