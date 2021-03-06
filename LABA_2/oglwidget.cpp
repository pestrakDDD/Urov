#include "oglwidget.h"

OGLWidget::OGLWidget(QWidget* pwgt) : QOpenGLWidget(pwgt)
{

}
void OGLWidget::initializeGL()
{
    glClearColor(0,0,0,1);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);
}

void OGLWidget::resizeGL(int nWidth, int nHeight)
{
    glViewport(0,0,nWidth,nHeight);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void OGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
      glBegin(GL_TRIANGLES);
      glColor3f(1.0, 0.0, 0.0);
      glVertex3f(-0.5, -0.5, 0);
      glColor3f(0.0, 1.0, 0.0);
      glVertex3f( 0.5, -0.5, 0);
      glColor3f(0.0, 0.0, 1.0);
      glVertex3f( 0.0,  0.5, 0);
      glEnd();
}
