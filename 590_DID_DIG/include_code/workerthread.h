#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H

#include <QMutex>
#include <QThread>
#include <QWaitCondition>

class WorkerThread : public QThread
{
    Q_OBJECT

public:
    WorkerThread(QObject *parent = 0);
    ~WorkerThread();
    double sampleCurTemp;
    double sampleSetTemp;
    double fidCurTemp;
    double fidSetTemp;
    int airFlow;
    int fuelFlow;
    int sampleFlow;

signals:
    void workDone(bool error, int errNum);

protected:
    void run() override;

private:
    bool restart;
    bool error;
    int errNum;
};

#endif // WORKERTHREAD_H
