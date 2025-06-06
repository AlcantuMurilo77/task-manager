#include "TaskManager.hpp"
#include <iostream>
#include <string>

void showHelp() {
    std::cout << "Available commands:\n"
              << "  add <task>           - Add a new task\n"
              << "  list                 - List all tasks\n"
              << "  done <number>        - Mark a task as done\n"
              << "  remove <number>      - Remove a task\n"
              << "  help                 - Show this help message\n";
}

int main(int argc, char* argv[]) {
    TaskManager manager;
    manager.loadFromFile("tasks.txt");

    if (argc < 2) {
        showHelp();
        return 0;
    }

    std::string command = argv[1];

    if (command == "add" && argc >= 3) {
        manager.addTask(argv[2]);
    } else if (command == "list") {
        manager.listTasks();
    } else if (command == "done" && argc >= 3) {
        manager.markTaskDone(std::stoi(argv[2]) - 1);
    } else if (command == "remove" && argc >= 3) {
        manager.removeTask(std::stoi(argv[2]) - 1);
    } else {
        showHelp();
    }

    manager.saveToFile("tasks.txt");
    return 0;
}
