#ifndef WORKER_H
#define WORKER_H
#include <pthread.h>
#include <sys/types.h>

#include <vector>
#include <memory>

// EventLoop创建了之后线程才能够跑起来
class Worker
{
private:
    pthread_t        ThreadID;


    static void* Run(void* args);
    void WorkerThreadFunc();
    
public:
    // 构造时也会同时构造所拥有的eventloop
    Worker();
    ~Worker();

    void SendToServer();
};
#endif