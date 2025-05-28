#include "TaskManager.hpp"
#include <iostream>

void TaskManager::addTask(const std::string& task){
    tasks.push_back("[ ]" + task);
}

void TaskManager::listTasks() const {
    if (tasks.empty()){
        std::cout << "No task found" << std::endl;
        return;
    }

    for (size_t i = 0; i < tasks.size(); ++i){
        std::cout << i + 1 << ". " << tasks[1] << std::endl;
    }
}

void TaskManager::markTaskDone(int index) {
    if (index >= 0 && index < tasks.size()) {
        if (tasks[index].substr(0, 3) == "[ ]") {
            tasks[index].replace(0, 3, "[x]");
        }
    }
}

void TaskManager::removeTask(int index){
    if(index >= 0 && index < tasks.size()){
        tasks.erase(tasks.begin() + index);
    }
}