#ifndef MYTIMER_H
#define MYTIMER_H

#include <QTimer>

class mytimer : public QObject
{
    Q_OBJECT
public:
    mytimer();
    QTimer *timer;

public slots:
    void mytimerSlot();
};

#endif // MYTIMER_H
