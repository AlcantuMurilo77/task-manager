#include "TaskManager.hpp"
#include <iostream>
#include <string>

void showHelp(){
    std::cout << "Available commands:\n"
              << "  add <task>         - Adds a new task \n"
              << "  list                 - List all the tasks\n"
              << "  done <número>        - Marks a task as done\n"
              << "  remove <número>      - Removes a task\n"
              << "  help                 - Show help menu\n";
}

int main(int argc, char* argv[]) {
    TaskManager manager;

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

    return 0;
}