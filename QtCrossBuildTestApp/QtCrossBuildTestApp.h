#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCrossBuildTestApp.h"

class QtCrossBuildTestApp : public QMainWindow
{
	Q_OBJECT

public:
	QtCrossBuildTestApp(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtCrossBuildTestAppClass ui;
};
