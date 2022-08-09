#include <windows.h>7878
#include <iostream>
#include <GL/glut.h>
#include <cmath>
#include<mmsystem.h>
#define PI  3.14159265358979323846
using namespace std;
void anyQuad( float a, float b, float c, float d, float e, float f, float g, float h, int R, int G, int B ){
    glBegin(GL_QUADS);
    glColor3ub(R, G, B);
    glVertex2f(a, b);
    glVertex2f(c, d);
    glVertex2f(e, f);
    glVertex2f(g, h);
    glEnd();
}
void lineComponent(float a, float b, float c, float d){
   glBegin(GL_LINES);
   glVertex2f(a, b);
   glVertex2f(c, d);
   glEnd();
}
void HalfCircle(float r1,float r,float g,float b){
glPushMatrix();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r,g,b);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=r1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
    glPopMatrix();
}
void treeComponent(){
    anyQuad(0.69f, 0.13f, 0.67f, 0.10f, 0.78f, 0.10f, 0.76f, 0.13f, 0, 102, 51);
    anyQuad(0.70f, 0.16f, 0.68f, 0.13f, 0.77f, 0.13f, 0.75f, 0.16f, 0, 153, 0);
    anyQuad(0.71f, 0.19f, 0.69f, 0.16f, 0.76f, 0.16f, 0.74f, 0.19f, 0, 204, 0);
    anyQuad(0.72f, 0.22f,0.70f, 0.19f, 0.75f, 0.19f, 0.73f, 0.22f, 128, 255, 0);
    anyQuad(0.71f, 0.10f, 0.71f, 0.0f, 0.73f, 0.0f, 0.73f, 0.10f, 102, 51, 0);
    anyQuad(0.73f, 0.10f, 0.73f, 0.0f, 0.74f, 0.0f, 0.74f, 0.10f, 153, 76, 0);
}
void window(){
glBegin(GL_QUADS);
                glColor3ub(96,96,96);
                glVertex2f(0.015,-0.04);
                glVertex2f(-0.015, -0.04);
                glColor3ub(160,160,160);
                glVertex2f(-0.015, -0.00);
                glVertex2f(0.015, -0.00);
                glEnd();
                glTranslatef(-0.0005,0,0);
                HalfCircle(0.015,160,160,160);
                glLoadIdentity();
}
void distancetree(float r1){
glPushMatrix();
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,102,51);
            float pi=3.1416/2;
            float A=(i*2*pi)/200;
            float r=r1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }
	glEnd();
    glPopMatrix();
}
void distancetreeview(){


            glTranslatef(-1.0,-0.2521,0);
            distancetree(0.05);
            glLoadIdentity();


            glTranslatef(-0.9,-0.2521,0);
            distancetree(0.07);
            glLoadIdentity();


            glTranslatef(-0.8,-0.2521,0);
            distancetree(0.06);
            glLoadIdentity();


            glTranslatef(-0.7,-0.2521,0);
            distancetree(0.05);
            glLoadIdentity();


            glTranslatef(-0.62,-0.2521,0);
            distancetree(0.04);
            glLoadIdentity();


            glTranslatef(-0.515,-0.2521,0);
            distancetree(0.07);
            glLoadIdentity();


            glTranslatef(-0.43,-0.2521,0);
            distancetree(0.03);
            glLoadIdentity();


            glTranslatef(-0.385,-0.2521,0);
            distancetree(0.02);
            glLoadIdentity();


            glTranslatef(-0.35,-0.2521,0);
            distancetree(0.021);
            glLoadIdentity();


            glTranslatef(-0.32,-0.2521,0);
            distancetree(0.019);
            glLoadIdentity();


            glTranslatef(-0.31,-0.2521,0);
            distancetree(0.018);
            glLoadIdentity();


            glTranslatef(-0.385,-0.2521,0);
            distancetree(0.011);
            glLoadIdentity();


            glTranslatef(-1.0,-0.2521,0);
            distancetree(0.05);
            glLoadIdentity();


            glTranslatef(-0.9,-0.2521,0);
            distancetree(0.07);
            glLoadIdentity();


            glTranslatef(-0.8,-0.2521,0);
            distancetree(0.06);
            glLoadIdentity();


            glTranslatef(-0.7,-0.2521,0);
            distancetree(0.05);
            glLoadIdentity();


            glTranslatef(-0.62,-0.2521,0);
            distancetree(0.04);
            glLoadIdentity();


            glTranslatef(-0.515,-0.2521,0);
            distancetree(0.07);
            glLoadIdentity();


            glTranslatef(-0.43,-0.2521,0);
            distancetree(0.03);
            glLoadIdentity();


            glTranslatef(-0.385,-0.2521,0);
            distancetree(0.02);
            glLoadIdentity();


            glTranslatef(-0.35,-0.2521,0);
            distancetree(0.021);
            glLoadIdentity();


            glTranslatef(-0.32,-0.2521,0);
            distancetree(0.019);
            glLoadIdentity();


            glTranslatef(-0.31,-0.2521,0);
            distancetree(0.018);
            glLoadIdentity();


            glTranslatef(-0.385,-0.2521,0);
            distancetree(0.011);
            glLoadIdentity();


            glTranslatef(1.0,-0.2521,0);
            distancetree(0.05);
            glLoadIdentity();


            glTranslatef(0.9,-0.2521,0);
            distancetree(0.07);
            glLoadIdentity();


            glTranslatef(0.8,-0.2521,0);
            distancetree(0.06);
            glLoadIdentity();


            glTranslatef(0.7,-0.2521,0);
            distancetree(0.05);
            glLoadIdentity();


            glTranslatef(0.62,-0.2521,0);
            distancetree(0.04);
            glLoadIdentity();


            glTranslatef(0.515,-0.2521,0);
            distancetree(0.07);
            glLoadIdentity();


            glTranslatef(0.43,-0.2521,0);
            distancetree(0.03);
            glLoadIdentity();


            glTranslatef(0.385,-0.2521,0);
            distancetree(0.02);
            glLoadIdentity();


            glTranslatef(0.35,-0.2521,0);
            distancetree(0.021);
            glLoadIdentity();


            glTranslatef(0.32,-0.2521,0);
            distancetree(0.019);
            glLoadIdentity();


            glTranslatef(0.31,-0.2521,0);
            distancetree(0.018);
            glLoadIdentity();


            glTranslatef(0.385,-0.2521,0);
            distancetree(0.011);
            glLoadIdentity();

}
 void castle(){

                glBegin(GL_QUADS);
                glColor3ub(211,211,211);
                glVertex2f(0.14,-0.20);
                glColor3ub(255,255,255);
                glVertex2f(0.22, -0.20);
                glVertex2f(0.22, 0.17);
                glVertex2f(0.14, 0.17);
                glEnd();

                glBegin(GL_QUADS);
                glColor3ub(211,211,211);
                glVertex2f(-0.14,-0.20);
                glColor3ub(255,255,255);
                glVertex2f(-0.22, -0.20);
                glVertex2f(-0.22, 0.17);
                glVertex2f(-0.14, 0.17);
                glEnd();


                glBegin(GL_QUADS);
                glColor3ub(211,211,211);
                glVertex2f(0.07,-0.20);
                glColor3ub(255,255,255);
                glVertex2f(-0.07, -0.20);
                glVertex2f(-0.07, 0.36);
                glVertex2f(0.07, 0.36);
                glEnd();


                glBegin(GL_QUADS);
                glColor3ub(211,211,211);
                glVertex2f(0.14,-0.20);
                glColor3ub(255,255,255);
                glVertex2f(-0.18, -0.20);
                glVertex2f(-0.18, -0.04);
                glVertex2f(0.14, -0.04);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(65,105,225);
                glVertex2f(-0.18,-0.04);
                glColor3ub(176,196,222);
                glVertex2f(-0.02,0.04);
                glVertex2f(0.14,0.-0.04);
                  glEnd();

                  glLineWidth(8);
                glBegin(GL_LINES);
               glColor3ub(190,190,190);
                glVertex2f(-0.19,-0.04);
                glVertex2f(0.14, -0.04);
                glEnd();

                float x3=0;
                for(int i=0;i<10;i++){
                glPointSize(10);
                glBegin(GL_POINTS);
                glColor3ub(190,190,190);
                glVertex2f(-0.18-x3,-0.03);
                glEnd();
                x3=x3-0.03;
                  }

                glBegin(GL_QUADS);
                glColor3ub(211,211,211);
                glVertex2f(0.18,-0.20);
                glColor3ub(255,255,255);
                glVertex2f(0.04, -0.20);
                glVertex2f(0.04, 0.06);
                glVertex2f(0.18, 0.06);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(65,105,225);
                glVertex2f(0.04,0.06);
                glColor3ub(176,196,222);
                glVertex2f(0.11,0.10);
                glVertex2f(0.18,0.06);
                  glEnd();

                  glLineWidth(8);
                glBegin(GL_LINES);
               glColor3ub(190,190,190);
                glVertex2f(0.03,0.06);
                glVertex2f(0.19, 0.06);
                glEnd();


                 glBegin(GL_TRIANGLES);
                glColor3ub(65,105,225);
                glVertex2f(-0.07,0.36);
                glColor3ub(176,196,222);
                glVertex2f(0.0,0.41);
                glVertex2f(0.07,0.36);
                  glEnd();

                  glLineWidth(8);
                glBegin(GL_LINES);
               glColor3ub(190,190,190);
                glVertex2f(-0.08,0.36);
                glVertex2f(0.08, 0.36);
                glEnd();


                glBegin(GL_TRIANGLES);
                glColor3ub(65,105,225);
                glVertex2f(0.14,0.17);
                glColor3ub(176,196,222);
                glVertex2f(0.18,0.27);
                glVertex2f(0.22,0.17);
                  glEnd();

                 glBegin(GL_TRIANGLES);
                glColor3ub(65,105,225);
                glVertex2f(-0.14,0.17);
                glColor3ub(176,196,222);
                glVertex2f(-0.18,0.27);
                glVertex2f(-0.22,0.17);
                  glEnd();

                  glLineWidth(8);
                glBegin(GL_LINES);
                glColor3ub(190,190,190);
                glVertex2f(0.13,0.17);
                glVertex2f(0.23, 0.17);
                glEnd();

                glLineWidth(8);
                glBegin(GL_LINES);
               glColor3ub(190,190,190);
                glVertex2f(-0.13,0.17);
                glVertex2f(-0.23, 0.17);
                glEnd();

               float x2=0;
                for(int i=0;i<14;i++){
                glPointSize(10);
                glBegin(GL_POINTS);
                glColor3ub(190,190,190);
                glVertex2f(-0.195-x2,-0.195);
                glEnd();
                x2=x2-0.03;
                  }

                  glBegin(GL_QUADS);
                glColor3ub(190,190,190);
                glVertex2f(-0.20f, -0.40f);
                glVertex2f(0.20f, -0.40f);
                glVertex2f(0.20f, -0.20f);
                glVertex2f(-0.20f, -0.20f);
                glEnd();

                glBegin(GL_QUADS);
                glColor3ub(211,211,211);
                glVertex2f(-0.30f, -0.40f);
                glColor3ub(255,255,255);
                glVertex2f(-0.20f, -0.40f);
                glVertex2f(-0.20f, -0.10f);
                glVertex2f(-0.30f, -0.10f);
                glEnd();

                glBegin(GL_QUADS);
                glColor3ub(211,211,211);
                glVertex2f(0.20,-0.40);
                glColor3ub(255,255,255);
                glVertex2f(0.30, -0.40);
                glVertex2f(0.30, -0.10);
                glVertex2f(0.20, -0.10);
                glEnd();

                glLineWidth(3);
                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(-0.20f, -0.20f);
                glVertex2f(-0.20f, -0.40f);
                glEnd();

                glLineWidth(3);
                glBegin(GL_LINES);
                glColor3f(0,0,0);
                glVertex2f(0.20, -0.20);
                glVertex2f(0.20, -0.40);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(65,105,225);
                glVertex2f(-0.20,-0.12);
                glColor3ub(176,196,222);
                glVertex2f(-0.25,0.0);
                glVertex2f(-0.30,-0.12);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(65,105,225);
                glVertex2f(0.20,-0.12);
                glColor3ub(176,196,222);
                glVertex2f(0.25,0.0);
                glVertex2f(0.30,-0.12);
                  glEnd();

                float x=0;
                for(int i=0;i<5;i++){
                glPointSize(10);
                glBegin(GL_POINTS);
                glColor3ub(190,190,190);
                glVertex2f(-0.19+x,-0.11);
                glEnd();
                x=x-0.03;
                  }
                float x1=0;
                for(int i=0;i<5;i++){
                glPointSize(10);
                glBegin(GL_POINTS);
                glColor3ub(190,190,190);
                glVertex2f(0.31+x1,-0.11);
                glEnd();
                x1=x1-0.03;
                  }

                glLineWidth(8);
                glBegin(GL_LINES);
                glColor3ub(190,190,190);
                glVertex2f(0.18,-0.12);
                glVertex2f(0.32, -0.12);
                glEnd();

                glLineWidth(8);
                glBegin(GL_LINES);
                glColor3ub(190,190,190);
                glVertex2f(-0.18,-0.12);
                glVertex2f(-0.32, -0.12);
                glEnd();

                glLineWidth(8);
                glBegin(GL_LINES);
                glColor3ub(190,190,190);
                glVertex2f(0.085,0.17);
                glVertex2f(-0.085, 0.17);
                glEnd();

               float x4=0;
                for(int i=0;i<7;i++){
                glPointSize(10);
                glBegin(GL_POINTS);
                glColor3ub(190,190,190);
                glVertex2f(0.089+x4,0.185);
                glEnd();
                x4=x4-0.03;
                  }

                  glBegin(GL_QUADS);
                glColor3ub(255,178,102);
                glVertex2f(0.10,-0.40);
                glVertex2f(-0.10, -0.40);
                glColor3ub(255,204,153);
                glVertex2f(-0.10, -0.30);
                glVertex2f(0.10, -0.30);
                glEnd();

                glTranslatef(0,-0.309,0);
                HalfCircle(0.1,255,204,153);
                glLoadIdentity();

                glLineWidth(1);
                glBegin(GL_LINES);
                glColor3ub(0,0,0);
                glVertex2f(0.005,-0.21);
                glVertex2f(0.005,-0.401);
                glEnd();
                glLineWidth(1);
                glBegin(GL_LINES);
                glColor3ub(0,0,0);
                glVertex2f(-0.005,-0.21);
                glVertex2f(-0.005,-0.401);
                glEnd();

                glTranslatef(-0.25,-0.25,0);
                window();
                glLoadIdentity();

                glTranslatef(0.25,-0.25,0);
                window();
                glLoadIdentity();

                glTranslatef(-0.10,-0.105,0);
                window();
                glLoadIdentity();

                glTranslatef(-0.02,-0.105,0);
                window();
                glLoadIdentity();

                glTranslatef(0.00,0.105,0);
                window();
                glLoadIdentity();

                glTranslatef(0.00,0.28,0);
                window();
                glLoadIdentity();

                glScalef(0.55,0.55,0);
                glTranslatef(-0.33,0.23,0);
                window();
                glLoadIdentity();

                glScalef(0.55,0.55,0);
                glTranslatef(-0.33,0.12,0);
                window();
                glLoadIdentity();

                glScalef(0.55,0.55,0);
                glTranslatef(0.33,0.21,0);
                window();
                glLoadIdentity();

                glTranslatef(0.111,-0.1,0);
                window();
                glLoadIdentity();

                glScalef(0.55,0.9,0);
                glTranslatef(0.14,-0.022,0);
                window();
                glLoadIdentity();

                glScalef(0.55,0.9,0);
                glTranslatef(0.26,-0.022,0);
                window();
                glLoadIdentity();

                glBegin(GL_QUADS);
                glColor3ub(200,200,200);
                glVertex2f(0.32,-0.40);
                glVertex2f(-0.32, -0.40);
                glVertex2f(-0.32, -0.42);
                glVertex2f(0.32, -0.42);
                glEnd();

                glBegin(GL_QUADS);
                glColor3ub(204,102,0);
                glVertex2f(0.34,-0.42);
                glVertex2f(-0.34, -0.42);
                glVertex2f(-0.34, -0.44);
                glVertex2f(0.34, -0.44);
                glEnd();

                glBegin(GL_QUADS);
                glColor3ub(200,200,200);
                glVertex2f(0.36,-0.44);
                glVertex2f(-0.36, -0.44);
                glVertex2f(-0.36, -0.46);
                glVertex2f(0.36, -0.46);
                glEnd();

                glBegin(GL_QUADS);
                glColor3ub(204,102,0);
                glVertex2f(0.38,-0.46);
                glVertex2f(-0.38, -0.46);
                glVertex2f(-0.38, -0.48);
                glVertex2f(0.38, -0.48);
                glEnd();

 }
 void display()
{
    glClear(GL_COLOR_BUFFER_BIT);


    distancetreeview();
    castle();
    glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000,900);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Castle");
    init();
    glutDisplayFunc(display);
    glutIdleFunc(Idle);
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(100, update, 0);
    glutTimerFunc(10,updatewindmill,0);
    glutMainLoop();
    return 0;
}
