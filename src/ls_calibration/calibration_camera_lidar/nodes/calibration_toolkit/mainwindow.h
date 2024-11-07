#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <calibrationtoolkit.h>

#include <QDebug>
#include <QInputDialog>
#include <QMainWindow>
#include <QSettings>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QStringList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
};

#endif  // MAINWINDOW_H
