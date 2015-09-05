#include "autograbwindow.h"
#include <QDesktopWidget>
#include <QPixmap>
#include <QDateTime>
autoGrabWindow::autoGrabWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(&timer, SIGNAL(timeout()), this, SLOT(timeOut()));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(begin()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(end()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(close()));
}

autoGrabWindow::~autoGrabWindow()
{

}

void autoGrabWindow::keyPressEvent(QKeyEvent * ev)
{
	if (ev->key() == Qt::Key_P)
	{
		grab();
	}
}

void autoGrabWindow::grab()
{
	QPixmap fullScreenPixmap = QPixmap::grabWindow(QApplication::desktop()->winId());
	QString strDateTime = QDateTime::currentDateTime().toString("yyyyMMdd_HHmmss");
	strDateTime += ".jpg";
	strDateTime.push_front("pic/");
	fullScreenPixmap.save(strDateTime, "JPG");
}

void autoGrabWindow::timeOut()
{
	grab();
}

void autoGrabWindow::begin()
{
	int time = ui.lineEdit->text().toInt();
	time = time > 200 ? time : 100;
	timer.start(time);
	showMinimized();
}

void autoGrabWindow::end()
{
	timer.stop();
}

void autoGrabWindow::close()
{
	QWidget::close();
}