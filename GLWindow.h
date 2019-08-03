#ifndef GL_WINDOW_H
#define GL_WINDOW_H

#include <QtWidgets/qopenglwidget.h>

class GLWindow: public QOpenGLWidget
{
public:
	GLWindow();
	~GLWindow();
};
#endif

