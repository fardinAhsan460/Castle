#include <windows.h>7878
#include <iostream>
#include <GL/glut.h>
#include <cmath>
#include<mmsystem.h>
#define PI  3.14159265358979323846
using namespace std;
bool isDay = true;
bool isRain=false;
bool keymap=true;
float angle1=0.0;
float angle2=120.0;
float angle3=240.0;
GLfloat cloud_position = 0.85f;
GLfloat cloud_speed = 0.008f;
int i;
int triangleAmount = 500;
const float DEG2RAD = 3.14159/180.0;
GLfloat x = 0,y = 0,radius = 0;
GLfloat twicePi = 2.0f * PI;

void Circle(GLfloat cx, GLfloat cy, GLfloat radius, int r, int g, int b)
{
    glColor3ub(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(cx, cy);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            cx + (radius * cos(i *  twicePi / triangleAmount)),
			    cy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}
void turbine(){
                 glPushMatrix();
                 glBegin(GL_POLYGON);
                 glColor3ub(255,255,255);
                 glVertex2f(0.12,0.45);
                 glVertex2f(0.12, 0.6);
                 glVertex2f(0.13,0.6);
                 glVertex2f(0.13, 0.45);
                 glEnd();
                 glPushMatrix();
                 glTranslatef(0.125,0.6,0.0);
                 glRotatef(angle1,0.0,0.0,1);
                 glTranslatef(-0.125,-0.6,0.0);
                 glBegin(GL_POLYGON);
                 glColor3ub(255,255,255);
                 glVertex2f(0.125,0.6);
                 glColor3ub(204,204,204);
                 glVertex2f(0.12, 0.6);
                 glVertex2f(0.12,0.66);
                 glVertex2f(0.13, 0.66);
                 glVertex2f(0.13, 0.6);
                 glEnd();
                 glPopMatrix();


                 glPushMatrix();
                 glTranslatef(0.125,0.6,0.0);
                 glRotatef(angle2,0.0,0.0,1);
                 glTranslatef(-0.125,-0.6,0.0);
                 glBegin(GL_POLYGON);
                 glColor3ub(255,255,255);
                 glVertex2f(0.125,0.6);
                 glColor3ub(204,204,204);
                 glVertex2f(0.12, 0.6);
                 glVertex2f(0.12,0.66);
                 glVertex2f(0.13, 0.66);
                 glVertex2f(0.13, 0.6);
                 glEnd();
                 glPopMatrix();


                 glPushMatrix();
                 glTranslatef(0.125,0.6,0.0);
                 glRotatef(angle3,0.0,0.0,1);
                 glTranslatef(-0.125,-0.6,0.0);
                 glBegin(GL_POLYGON);
                 glColor3ub(255,255,255);
                 glVertex2f(0.125,0.6);
                 glColor3ub(204,204,204);
                 glVertex2f(0.12, 0.6);
                 glVertex2f(0.12,0.66);
                 glVertex2f(0.13, 0.66);
                 glVertex2f(0.13, 0.6);
                 glEnd();
                 glPopMatrix();

                 Circle(0.125,0.6,0.01,255,255,255);

 }

void turbineview(){

        glTranslatef(0.35,-0.925,0);
        glScalef(1.5,1.5,0);
        turbine();
        glLoadIdentity();

        glTranslatef(0.60,-0.925,0);
        glScalef(1.5,1.5,0);
        turbine();
        glLoadIdentity();

        glTranslatef(-0.76,-0.925,0);
        glScalef(1.5,1.5,0);
        turbine();
        glLoadIdentity();

        glTranslatef(-0.99,-0.925,0);
        glScalef(1.5,1.5,0);
        turbine();
        glLoadIdentity();


}
 void updateturbine(int value){
 angle1-=0.5;
 angle2-=0.5;
 angle3-=0.5;
 glutPostRedisplay();
 glutTimerFunc(10,updateturbine,0);
 }
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    turbineview();
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
    glutTimerFunc(10,updateturbine,0);
    glutMainLoop();
    return 0;
}


