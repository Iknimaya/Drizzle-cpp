#ifndef Terminal_H
#define Terminal_H

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
using std::map;
using std::pair;
QT_END_NAMESPACE
#include <QTextBrowser>

class Terminal : public QTextBrowser
{
    Q_OBJECT

public:
    Terminal(QWidget *parent = nullptr);
    ~Terminal();

//public slots:




};
#endif // Terminal_H
