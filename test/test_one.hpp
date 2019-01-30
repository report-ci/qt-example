#include <QObject>
#include <QTest>

class MyFirstTest: public QObject
{
    Q_OBJECT

private:
    bool myCondition()
    {
        return false;
    }

private slots:
    void initTestCase()
    {
        qDebug("Called before everything else.");
    }

    void myFirstTest()
    {
        QVERIFY(false); // check that a condition is satisfied
        QCOMPARE(1, 2); // compare two values
    }

    void mySecondTest()
    {
        QVERIFY(myCondition());
    }

    void cleanupTestCase()
    {
        qDebug("Called after myFirstTest and mySecondTest.");
    }
};