#include <iostream>

// Receive input for and handle:
// - add new todo
// - mark a todo as complete

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

int main() {
  showHeader();
  showTodos();

  bool shouldDisplayMainMenu = true;

  int choice;
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

              // add a todo


              break;
          case 2:
              std::cout << "You selected Option 2." << std::endl;
              shouldDisplayMainMenu = false;
              break;
          case 0:
              std::cout << "Exiting the program." << std::endl;
              break;
          default:
              std::cout << "Invalid choice. Please enter a valid option." << std::endl;
              break;
      }
  };


	return 0;
}
