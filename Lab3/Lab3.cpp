#include <iostream>
#include <fstream>
#include <string>
#include <GL/freeglut.h>
#include <math.h>
using namespace std;

//01

//int screenWidth = 640;
//int screenHeight = 480;
//
//void myDisplay(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glFlush();
//}
//
//void myMouse(int button, int state, int mx , int my)
//{
//	if ( button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
//	{
//		glutPostRedisplay();
//	}
//	if ( button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
//	{
//		glClear(GL_COLOR_BUFFER_BIT);//function to clear the color buffer of the OpenGL rendering context.
//		glFlush();
//	}
//}
//
//void myinit()
//{
//	glClearColor(0.9f,0.9f,0.9f,0.0);//background
//	glColor3f(1,0,0); // Foreground
//}
//
//void myReshape(int w ,int h)
//{
//	int screenwidth = w;
// 	int screenHeight = h;
//   
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluOrtho2D(0.0,(GLdouble)screenwidth,0.0,(GLdouble)screenHeight);
//    
////    glMatrixModel(GL_MODELVIEW)
////    glLoadIdentity();
//   
//}
//void mouseMove(int x , int y)
//{
//	glutPostRedisplay();
//}
//
//void myKeys(unsigned char key,int x,int y)
//{
//	switch(key)
//	{
//		case 'q':exit(0);
//		case 's': break;
//	}
//	glutPostRedisplay();
//}
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(screenWidth, screenHeight);
//    glutCreateWindow("Arham Sharif EB21102022");  
//    myinit();
//    glutReshapeFunc(myReshape);
//    glutDisplayFunc(myDisplay);
//    glutKeyboardFunc(myKeys);
//    glutMouseFunc(myMouse);
//    glutMotionFunc(mouseMove);
//    glutMainLoop();
//    return 0;
//}

//02

void myinit(void)
{
    glClearColor(0.0, 0.0, 0.0, 1.0); // Set the clear color to black
    glColor3f(0.0, 0.0, 1.0); // Set the drawing color to blue
    glPointSize(10.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 640, 0, 480);
}

void display(void)
{   
    glFlush();
}

void mouse(int button, int state, int x, int y)
{   
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        
        glBegin(GL_POINTS);
        glVertex2d(x, 480 - y);
        glEnd();
        
    }
    else if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
        glClearColor(0.0, 0.0, 0.0, 1.0); // Set the clear color to black
        glClear(GL_COLOR_BUFFER_BIT);   
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Arham Sharif EB21102022");
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    myinit();
    glutMainLoop();
    return 0;
}
 
 
// 03

//void myinit(void)
//{
//    glClearColor(0.0, 0.0, 0.0, 1.0); // Set the clear color to black
//    glColor3f(0.0, 0.0, 1.0); // Set the drawing color to blue
//    gluOrtho2D(0, 640, 0, 480);
//}
//
//void display(void)
//{   
//    glFlush();
//}
//
//void myMovedMouse(int mouseX, int mouseY)
//{
//	
//  int x = mouseX; //grab the mouse position
//  int y = 480 - mouseY; // flip it as usual
//  int brushSize = 10;
//  glRecti(x,y, x + brushSize, y + brushSize);
//  glFlush();
//  
//  
//}
//
//
//int main(int argc, char** argv)
//{
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(640, 480);
//    glutCreateWindow("Arham Sharif EB21102022");
//    glutMotionFunc(myMovedMouse);
//    glutDisplayFunc(display);
//    
//    myinit();
//    glutMainLoop();
//    return 0;
//}

//04 

//#include<windows.h> 
//#include"mmsystem.h"
//int main()
//{
//	PlaySound(TEXT("Rains Of Castamere Instrumental.wav"),NULL,SND_SYNC);
//	/*TEXT("Rains Of Castamere Instrumental.wav"): This is the first argument to the PlaySound function and specifies the name of the audio file to be played. The TEXT macro is used to make the string compatible with both Unicode and ANSI character encodings, depending on the build configuration of the program.
//    NULL: This is the second argument, and it represents a handle to a module (in this case, NULL indicates the current module). It's not used in this context and can be set to NULL.
//   SND_SYNC: This is the third argument and is a flag that specifies how the sound should be played. SND_SYNC indicates that the sound should be played synchronously, which means the PlaySound function will not return until the sound has finished playing.
//    */
//	return 0;
//}
