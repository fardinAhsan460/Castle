#include <windows.h>7878
#include <iostream>
#include <GL/glut.h>
#include <cmath>
#include<mmsystem.h>
#define PI  3.14159265358979323846
using namespace std;
void river(){
  glBegin(GL_TRIANGLES);
                glColor3ub(0,105,255);
                glVertex2f(-1,-0.25);
                glColor3ub(255,51,255);
                glVertex2f(0,-0.25);
                glVertex2f(-1,-0.45);
                glEnd();
 }
void rainView(bool isRain)
{
    if(isRain==true){
            if(isDay==true){
    glBegin(GL_QUADS);
    glColor3ub(77, 184, 255);
    glVertex2f(-1.0, -0.25f);
    glColor3ub(224, 224, 224);
    glVertex2f(1.0f, -0.25f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
    cloudView();
            }
            else{
                glBegin(GL_QUADS);
                 glColor3ub(0, 0,51);
                glVertex2f(-1.0, -0.25f);
                glColor3ub(0, 0,110);
                glVertex2f(1.0f, -0.25f);
                glVertex2f(1.0f, 1.0f);
                glVertex2f(-1.0f, 1.0f);
                glEnd();
                cloudView();
            }

    float x=0.0, y = -0.5, x1=-0.099;
    glColor3ub(255,255,255);
    glPushMatrix();
    glTranslatef(0,-0.5,0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    for(int i=500;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            glVertex3f(x,y,0);
            glVertex3f(x+0.05,y+0.04,0);
            x+=float(rand()%5)/10;
        }
        for(int j=0;j<=i;j++)
        {
            glVertex3f(x1,y,0);
            glVertex3f(x1+0.05,y+0.04,0);
            x1-=float(rand()%5)/10;
        }
        y+=float(rand()%10)/10;
        x=0.0;
        x1=-0.099;
    }
    glEnd();
    glPopMatrix();
    }
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    rainView(isRain);
    river();
    glFlush();
}


int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1000,900);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Castle");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
