#include <iostream>
#include <string>

void showHeader() {
  std::cout << "  _____           _       " << std::endl;
  std::cout << " |_   _|__     __| | ___  " << std::endl;
  std::cout << "   | |/ _ \\   / _` |/ _ \\ " << std::endl;
  std::cout << "   | | (_) | | (_| | (_) |" << std::endl;
  std::cout << "   |_|\\___/   \\__,_|\\___/ " << std::endl;
}

void showTodos() {
  // fetch todos
}

void storeTodo(const std::string& newTodo) {
  //
}

int main() {
  showHeader();
  showTodos();

  bool shouldDisplayMainMenu = true;

  int choice;
  std::string newTodo;
  while (shouldDisplayMainMenu) {
    std::cout << "Select an option:" << std::endl;
    std::cout << "1. Add a task" << std::endl;
    std::cout << "2. Edit a task" << std::endl;
    std::cout << "0. Exit" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        shouldDisplayMainMenu = false;
        std::cout << "Enter todo text:\n" << std::endl;
        std::cin >> newTodo;
        storeTodo(newTodo);
        break;
      case 2:
        shouldDisplayMainMenu = false;
        // edit todo
        break;
      case 0:
        std::cout << "Exiting the program." << std::endl;
        break;
      default:
        std::cout << "Invalid choice. Please enter a valid option."
                  << std::endl;
        break;
    }
  };

  return 0;
}
