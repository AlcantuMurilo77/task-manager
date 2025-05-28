
#include <vector>
#include <string>

class TaskManager {
    public:
        void addTask(const std::string& task);
        void listTasks() const;
        void markTaskDone(int index);
        void removeTask(int index);

    private:
        std::vector<std::string> tasks;

};
