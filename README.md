# Task Manager CLI (C++)

A simple command-line task manager built with C++. Tasks are stored in a text file and persist between runs.

## Features

- Add tasks
- List tasks
- Mark tasks as done
- Remove tasks
- Save/load from `tasks.txt`

## How to Compile

In a Linux terminal, navigate to the project folder and run:

```bash
g++ main.cpp TaskManager.cpp -o taskcli

```

To run the Help menu:

```bash
./taskcli
```
## Future Improvements


- Add unit tests using [Catch2](https://github.com/catchorg/Catch2) or doctest
- Create a `Makefile` to simplify compilation
- Improve argument parsing for more robust CLI usage
- Store tasks in JSON format using [nlohmann/json](https://github.com/nlohmann/json)
- Add task metadata (e.g., creation date, priority levels)
- Implement filtering/sorting options (e.g., show only incomplete tasks)
- Add colored terminal output for better readability
- Support cross-platform compilation (Linux, Windows, Mac)
