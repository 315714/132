#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    cout << "你好" << endl;
    cout << "测试" << endl;;

    
    return a.exec();
}
