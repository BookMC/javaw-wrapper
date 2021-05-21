#include <iostream>

int main(int argc, char *argv[]) {
    // Simply print out the arguments
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << std::endl;
    }
    return 0;
}
