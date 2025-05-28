#ifndef TASK_MANAGER_HPP
#define TASK_MANAGER_HPP

#include <vector>
#include <string>

class TaskManager {
public:
    void addTask(const std::string& task);
    void listTasks() const;
    void markTaskDone(int index);
    void removeTask(int index);
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename) const;

private:
    std::vector<std::string> tasks;
};

#endif
