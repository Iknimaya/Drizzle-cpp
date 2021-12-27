#ifndef QLogBrowser_H
#define QLogBrowser_H

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

class QLogBrowser : public QTextBrowser
{
    Q_OBJECT

public:
    QLogBrowser(QWidget *parent = nullptr);
    ~QLogBrowser();

//public slots:




};
#endif // QLogBrowser_H
