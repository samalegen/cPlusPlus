#include <iostream>

class GradeBook {
    public:
        void displayMessage() {
            std::cout << "Welcome to Grade Book!" << std::endl;
        }
};

int main() {
    GradeBook myBook;
    myBook.displayMessage();
}
