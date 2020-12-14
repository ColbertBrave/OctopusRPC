#ifndef CLIENT_H
#define CLIENT_H

#include <vector>

#include "Worker.h"
#include "include/nlohmann/json.hpp"

// Client此处是发起请求，Server是被动地监听请求，并处理请求。
// Server监听获得一个请求列表，线程上锁依次取出请求，调用相应
// 的请求处理方法对请求进行处理。
class Client
{
private:
    unsigned int        WorkerNum;
    unsigned int        TaskNum;
    vector<Worker>      WorkerGroup;
    
public:
    Client(unsigned int workerNum, unsigned int taskNum);
    ~Client();
};

Client::Client()
{
}

Client::~Client()
{
}


#endif