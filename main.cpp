#include <QCoreApplication>
#include <QDebug>
#include <QtCore>
#include <QtMath>

class SomeMy
{
public:
    void ifStIsPali(QString st1)
    {
        int si1 = st1.size();
        int k1=0;
        QString st2;
        for(int i1=0;i1<si1/2;i1++)
        {
            if(st1[i1] == st1[si1-1-i1])
            {   k1++;   }
        }
        if (k1 == si1/2)
        {   st2 = "palindrome"; }
        else
        {   st2 = "not";    }
        qDebug() << st1 << "is " << st2;
    }


};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qsrand(time(NULL));
    SomeMy s1;

    s1.ifStIsPali("alkkla");
    s1.ifStIsPali("ajhryt");
    s1.ifStIsPali("a7ytrty7a");

    for(int i1=1;i1<20;i1++)
    {

    }
    return a.exec();
}
