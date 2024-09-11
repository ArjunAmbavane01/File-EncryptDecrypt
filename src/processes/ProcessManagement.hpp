#ifndef PROCESS_MANAGEMENT_HPP
#define PROCESS_MANAGEMENT_HPP

#include "Task.hpp"
#include <queue>
#include <memory>

class ProcessManagement{
    private:
    std::queue<std::unique_ptr<Task>> taskqueue;

    public:
    ProcessManagement();
    bool submitToQueue(std::unique_ptr<Task> task);
    void executeTask();
};


#endif PROCESS_MANAGEMENT_HPP
