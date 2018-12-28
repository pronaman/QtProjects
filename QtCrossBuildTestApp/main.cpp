#include "QtCrossBuildTestApp.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtCrossBuildTestApp w;
	w.show();
	return a.exec();
}
