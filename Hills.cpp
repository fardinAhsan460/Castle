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

void anyTriangle( float a, float b, float c, float d, float e, float f, int R, int G, int B ){
    glBegin(GL_TRIANGLES);
    glColor3ub(R, G, B);
    glVertex2f(a, b);
    glVertex2f(c, d);
    glVertex2f(e, f);
    glEnd();
}

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
void anyText(string text, float x, float y, int R, int G, int B){
    glColor3ub(R, G, B);
    glRasterPos2f(x, y);
    for (i = 0; i < text.length(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }}

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


void hills(){
                glBegin(GL_TRIANGLES);
                glColor3ub(34,139,34);
                glVertex2f(-1.1,-0.25);
                glColor3ub(176,196,222);
                glVertex2f(-0.955,-0.10);
                glVertex2f(-0.90,-0.25);

                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(34,139,34);
                glVertex2f(-0.75,-0.25);
                glColor3ub(176,196,222);
                glVertex2f(-0.45,-0.05);
                glVertex2f(-0.25,-0.25);

                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(34,139,34);
                glVertex2f(-0.95,-0.25);
                glColor3ub(176,196,222);
                glVertex2f(-0.75,0.10);
                glVertex2f(-0.60,-0.25);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(224,224,224);
                glVertex2f(45,-0.25);
                glColor3ub(176,196,222);
                glVertex2f(63,0.10);
                glVertex2f(83,-0.25);
                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(34,139,34);
                glVertex2f(0.25,-0.25);
                glColor3ub(176,196,222);
                glVertex2f(0.40,-0.13);
                glVertex2f(0.55,-0.25);

                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(34,139,34);
                glVertex2f(0.50,-0.25);
                glColor3ub(176,196,222);
                glVertex2f(0.60,-0.10);
                glVertex2f(0.80,-0.25);

                glEnd();

                glBegin(GL_TRIANGLES);
                glColor3ub(34,139,34);
                glVertex2f(0.65,-0.25);
                glColor3ub(176,196,222);
                glVertex2f(0.85,0.05);
                glVertex2f(1.05,-0.25);

                glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    hills();
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
