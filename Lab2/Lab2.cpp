#include <iostream>
#include <fstream>
#include <string>
#include <GL/glut.h>

using namespace std;
// Function to draw the hut
void drawHut() {
    // Draw the hut's body (rectangle)
    glColor3f(0.8, 0.6, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f(0.2, 0.2);
    glVertex2f(0.8, 0.2);
    glVertex2f(0.8, 0.6);
    glVertex2f(0.2, 0.6);
    glEnd();

    // Draw the hut's roof (triangle)
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.2, 0.6);
    glVertex2f(0.5, 0.8);
    glVertex2f(0.8, 0.6);
    glEnd();

    // Draw the window (rectangle)
    glColor3f(0.4, 0.7, 0.9);
    glBegin(GL_POLYGON);
    glVertex2f(0.3, 0.3);
    glVertex2f(0.4, 0.3);
    glVertex2f(0.4, 0.4);
    glVertex2f(0.3, 0.4);
    glEnd();

    // Draw the door (rectangle)
    glColor3f(0.5, 0.3, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.6, 0.2);
    glVertex2f(0.7, 0.2);
    glVertex2f(0.7, 0.4);
    glVertex2f(0.6, 0.4);
    glEnd();
}

// Function to draw mountains
void drawMountains() {
    // Draw light brown mountains
    glColor3f(0.7, 0.5, 0.3);

    // Draw 2 mountains starting from x = 0
	for (int i = 0; i < 2; i++) {
	    glBegin(GL_TRIANGLES);
	    glVertex2f(i * 0.5, 0.2);
	    glVertex2f(0.25 + i * 0.5, 0.7);
	    glVertex2f(0.5 + i * 0.5, 0.2);
	    glEnd();
	}
}

// Function to draw the scenery
void drawScenery() {
    // Draw the sky (background)
    glClearColor(0.6, 0.9, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
 	
	// Draw the mountains
    drawMountains();
    
    // Draw the grass (ground)
    glColor3f(0.0, 0.6, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(1.0, 0.2);
    glVertex2f(0.0, 0.2);
    glEnd();

    // Draw the water (rectangle)
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(1.0, 0.15);
    glVertex2f(0.0, 0.15);
    glEnd();

    // Draw the hut
    drawHut();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Arham Sharif EB21102022");
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0);
    glutDisplayFunc(drawScenery);
    glutMainLoop();
    return 0;
}

