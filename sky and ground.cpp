#include <windows.h>7878
#include <iostream>
#include <GL/glut.h>
#include <cmath>
#include<mmsystem.h>
#define PI  3.14159265358979323846
using namespace std;
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

void midPointEllipse(float xradius, float yradius, float q,float r,float g,float b)
{
	glBegin(GL_POLYGON);
    glColor3ub(r, g, b);
	for(int i=0; i < 360; i++)
	{
		float degInRad = i*DEG2RAD/q;
		glVertex2f(cos(degInRad)*xradius,sin(degInRad)*yradius);
	}
	glEnd();
}
void sunComponent()
{
    Circle(0.8f, 0.8f, 0.08f, 255, 255, 0);
}


void moonComponent()
{
    Circle(0.8f, 0.8f, 0.08f, 245, 245, 245);
}
void starComponent(){
    glPointSize(2);
    glBegin(GL_POINTS);
	glColor3ub(255,255,255);
    glVertex2f(0.0f,0.79f);
    glVertex2f(0.03f,0.95f);
    glVertex2f(0.13f,0.79f);
    glVertex2f(0.13f,0.9f);
    glVertex2f(0.23f,0.75f);
    glVertex2f(0.23f,0.85f);
    glVertex2f(0.33f,0.65f);
    glVertex2f(0.33f,0.785f);
    glVertex2f(0.33f,0.958f);
    glVertex2f(0.43f,0.55f);
    glVertex2f(0.43f,0.75f);
    glVertex2f(0.43f,0.89f);
    glVertex2f(0.55f,0.47f);
    glVertex2f(0.55f,0.67f);
    glVertex2f(0.55f,0.87f);
    glVertex2f(0.5f,0.42f);
    glVertex2f(0.58f,0.45f);
    glVertex2f(0.58f,0.65f);
    glVertex2f(0.58f,0.95f);
    glVertex2f(0.49f,0.51f);
    glVertex2f(0.63f,0.525f);
    glVertex2f(0.63f,0.725f);
    glVertex2f(0.63f,0.925f);
    glVertex2f(0.73f,0.425f);
    glVertex2f(0.73f,0.525f);
    glVertex2f(0.73f,0.725f);
    glVertex2f(0.83f,0.35f);
    glVertex2f(0.83f,0.46f);
    glVertex2f(0.83f,0.56f);
    glVertex2f(0.83f,0.76f);
    glVertex2f(0.83f,0.96f);
    glVertex2f(0.93f,0.485f);
    glVertex2f(0.93f,0.585f);
    glVertex2f(0.93f,0.785f);
    glVertex2f(0.98f,0.885f);
    glVertex2f(0.98f,0.285f);
    glVertex2f(-0.03f,0.85f);
    glVertex2f(-0.03f,0.95f);
    glVertex2f(-0.13f,0.79f);
    glVertex2f(-0.13f,0.9f);
    glVertex2f(-0.23f,0.75f);
    glVertex2f(-0.23f,0.85f);
    glVertex2f(-0.33f,0.65f);
    glVertex2f(-0.33f,0.785f);
    glVertex2f(-0.33f,0.958f);
    glVertex2f(-0.43f,0.55f);
    glVertex2f(-0.43f,0.75f);
    glVertex2f(-0.43f,0.89f);
    glVertex2f(-0.55f,0.47f);
    glVertex2f(-0.55f,0.67f);
    glVertex2f(-0.55f,0.87f);
    glVertex2f(-0.5f,0.42f);
    glVertex2f(-0.58f,0.45f);
    glVertex2f(-0.58f,0.65f);
    glVertex2f(-0.58f,0.95f);
    glVertex2f(-0.49f,0.51f);
    glVertex2f(-0.63f,0.525f);
    glVertex2f(-0.63f,0.725f);
    glVertex2f(-0.63f,0.925f);
    glVertex2f(-0.73f,0.425f);
    glVertex2f(-0.73f,0.525f);
    glVertex2f(-0.73f,0.725f);
    glVertex2f(-0.83f,0.35f);
    glVertex2f(-0.83f,0.46f);
    glVertex2f(-0.83f,0.56f);
    glVertex2f(-0.83f,0.76f);
    glVertex2f(-0.83f,0.96f);
    glVertex2f(-0.93f,0.485f);
    glVertex2f(-0.93f,0.585f);
    glVertex2f(-0.93f,0.785f);
    glVertex2f(-0.98f,0.885f);
    glVertex2f(-0.98f,0.285f);
    glEnd();
    glPointSize(7);
}
void cloudComponent(){
    Circle(0.58f, 0.75f,  0.060f, 204, 204, 204);
    Circle(0.5f, 0.82f,  0.068f, 204, 204, 204);
    Circle(0.42f, 0.75f,  0.068f, 204, 204, 204);
    Circle(0.5f, 0.72f,  0.07f, 204, 204, 204);
}

void cloudComponent2(){
    Circle(0.58f, 0.75f,  0.060f, 255, 255, 255);
    Circle(0.5f, 0.82f,  0.068f, 255, 255, 255);
    Circle(0.42f, 0.75f,  0.068f, 255, 255, 255);
    Circle(0.5f, 0.72f,  0.07f, 255, 255, 255);
}
void update(int value) {

    if(cloud_position < -1.2)
    cloud_position = 1.2f;
    cloud_position -=cloud_speed;

    glutPostRedisplay();
    glutTimerFunc(100, update, 0);

void cloudView(){
    glPushMatrix();

    glTranslatef(cloud_position-0.4f,0,0);
    cloudComponent();

    glTranslatef(cloud_position - 0.4f,-0.650,0);
    cloudComponent();

    glPopMatrix();
}
	

void cloudviewDAy(){

    glPushMatrix();

    glTranslatef(cloud_position-0.4f,0,0);
    cloudComponent2();

    glTranslatef(cloud_position - 0.4f,-0.45,0);
    cloudComponent2();

    glPopMatrix();
}
	
	
void SkyComponent(bool isDay){
    if(isDay==true){
    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(-1.0, -0.25f);
    glVertex2f(1.0f, -0.25f);
    glColor3ub(77, 184, 255);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
    sunComponent();
	    
    cloudviewDAy();
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
    moonComponent();
    starComponent();
    }
}
void groundview(){


     glBegin(GL_QUADS);
                glColor3ub(0,204,0);
                glVertex2f(-1,-0.25);
                //glColor3ub(178,255,102);
                glVertex2f(1, -0.25);
                 glColor3ub(229,255,204);
                glVertex2f(1, -1);
                 glColor3ub(229,255,204);
                glVertex2f(-1, -1);
                glEnd();


        glTranslatef(-0.15,-0.70,0);
        glScalef(1.2,1.2,0);
        treeComponent();
        glLoadIdentity();

        glTranslatef(-0.64,-0.76,0);
        glScalef(1.2,1.2,0);
        treeComponent();
        glLoadIdentity();


        glTranslatef(0.8,-0.95,0);
        midPointEllipse(0.9, 0.30, 2,178,255,102);
        glLoadIdentity();

        glTranslatef(-0.5,-0.98,0);
        midPointEllipse(0.4, 0.3, 2,0,204,0);
        glLoadIdentity();

        glTranslatef(-1.9,-0.85,0);
        glScalef(1.5,1.5,0);
        treeComponent();
        glLoadIdentity();

        glTranslatef(-0.8,-1.15,0);
        midPointEllipse(0.4, 0.40, 2,102,204,0);
        glLoadIdentity();

        glTranslatef(-0.18,-0.90,0);
        glScalef(1.5,1.5,0);
        treeComponent();
        glLoadIdentity();

        glTranslatef(-0.63,-0.90,0);
        glScalef(1.5,1.5,0);
        treeComponent();
        glLoadIdentity();

        glTranslatef(0.6,-1.1,0);
        midPointEllipse(0.60, 0.30, 2,102,204,0);
        glLoadIdentity();



        glTranslatef(-0.15,-1.1,0);
        midPointEllipse(0.45, 0.38, 2,0,153,76);
        glLoadIdentity();

 }
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    SkyComponent(isDay);
    groundview();
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
