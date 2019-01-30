#include <QObject>
#include <QTest>

class SecondTest: public QObject
{
    Q_OBJECT

private slots:

    void someTest()
    {
        QVERIFY2(3, "Some message");
    }
};