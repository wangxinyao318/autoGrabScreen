#ifndef AUTOGRABWINDOW_H
#define AUTOGRABWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_autograbwindow.h"
#include <QKeyEvent>
#include <QTimer>
class autoGrabWindow : public QMainWindow
{
	Q_OBJECT

public:
	autoGrabWindow(QWidget *parent = 0);
	~autoGrabWindow();

	void keyPressEvent(QKeyEvent * ev);
	void grab();
public slots:
	void timeOut();
	void begin();
	void end();
	void close();
private:
	Ui::autoGrabWindowClass ui;
	bool mIsGrab;
	QTimer timer;
};

#endif // AUTOGRABWINDOW_H
