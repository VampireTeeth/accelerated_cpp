#include <iostream>
#include "greetings.h"

int main(int argc, char **argv) {
	std::cout << "hello world" << std::endl;
    std::Greeting g;
    g.sayhello();
	return 0;
}
