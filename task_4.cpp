#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask() {
    string description;
    cout << "Enter task description: ";
    cin.ignore();
    getline(cin, description);
    tasks.push_back({description, false});
    cout << "Task added successfully!\n";
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }
    cout << "\nTo-Do List:\n";
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i].description << " [" << (tasks[i].completed ? "Completed" : "Pending") << "]\n";
    }
}

void markTaskCompleted() {
    int index;
    viewTasks();
    cout << "Enter task number to mark as completed: ";
    cin >> index;
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number!\n";
    } else {
        tasks[index - 1].completed = true;
        cout << "Task marked as completed!\n";
    }
}

void removeTask() {
    int index;
    viewTasks();
    cout << "Enter task number to remove: ";
    cin >> index;
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number!\n";
    } else {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task removed successfully!\n";
    }
}

int main() {
    int choice;
    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markTaskCompleted(); break;
            case 4: removeTask(); break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice, try again.\n";
        }
    } while (choice != 5);
    
    return 0;
}

