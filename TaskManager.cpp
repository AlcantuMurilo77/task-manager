#include "TaskManager.hpp"
#include <iostream>
#include <fstream>

void TaskManager::addTask(const std::string& task) {
    tasks.push_back("[ ] " + task);
}

void TaskManager::listTasks() const {
    if (tasks.empty()) {
        std::cout << "No tasks found.\n";
        return;
    }
    for (size_t i = 0; i < tasks.size(); ++i) {
        std::cout << i + 1 << ". " << tasks[i] << "\n";
    }
}

void TaskManager::markTaskDone(int index) {
    if (index >= 0 && index < tasks.size()) {
        if (tasks[index].substr(0, 3) == "[ ]") {
            tasks[index].replace(0, 3, "[x]");
        }
    }
}

void TaskManager::removeTask(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks.erase(tasks.begin() + index);
    }
}

void TaskManager::loadFromFile(const std::string& filename) {
    tasks.clear();
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        tasks.push_back(line);
    }
}

void TaskManager::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);
    for (const auto& task : tasks) {
        file << task << "\n";
    }
}
