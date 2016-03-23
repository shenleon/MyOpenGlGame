#include <stdio.h>
#include <stdlib.h>
#include <glut.h>
#include <math.h>

#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

#define PI 3.1415926
int n = 10000;
const GLfloat R = 0.5f;


GLint circle_pints = 100;

void display()
{
	int i;
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON);
	for(i=0;i<n;i++)
		 glVertex2f(R*cos(2*PI/n*i), R*sin(2*PI/n*i));
	glEnd();

	glFlush();
}

int main(int argc,char * argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutInitWindowSize(400,400);
	glutInitWindowPosition(200,100);	
	glutCreateWindow("My Windows");
	

	glutDisplayFunc(&display);
	glutMainLoop();
	return 0;
}