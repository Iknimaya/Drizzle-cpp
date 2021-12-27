#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QTableWidget>
#include <QDebug>
#include <QEvent>

#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QMenu>
#include <QAction>
#include <map>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
using std::map;
using std::pair;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
//    void connectInterfaces();

private:

    Ui::MainWindow *ui;

//public slots:




};
#endif // MAINWINDOW_H
