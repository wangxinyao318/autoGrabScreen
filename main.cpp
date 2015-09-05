#include "autograbwindow.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	autoGrabWindow w;
	w.show();
	return a.exec();
}
