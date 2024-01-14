#include <iostream>

// Run program and show current todos
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
  std::cout << "\n";
  std::cout << "Todos:";
  // fetch todos
}

int main() {
  showHeader();
  showTodos();

	return 0;
}
