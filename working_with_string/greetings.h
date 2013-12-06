#include <iostream>
#include <string>

namespace std{
    
class Greeting{
public:
    Greeting(){
        std::cout << "Greeting(string) called" << std::endl;
        std::cout << "Please input your name:";
        std::cin >> name;
    }

    virtual ~Greeting() {
        std::cout << "~Greeting() called" << std::endl;
    }

    void sayhello() const {
        std::cout << "Hello, "<< this->name << std::endl;
    }

private:
    std::string name;
};

}
