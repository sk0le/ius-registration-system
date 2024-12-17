#include <iostream>
#include <unistd.h>
#include "screen.h"

#ifdef _WIN32
    #define PLATFORM "Windows"
#else
    #define PLATFORM "Linux"
#endif


using namespace std;

int main()
{
    Screen screen;
    std::cout << screen.getCurrentScreen() << "\n";

    sleep(2);

    if(screen.getCurrentScreen() == "login") screen.setCurrentScreen("register");
    std::cout << screen.getCurrentScreen() << "\n";

    sleep(2);

    return 0;
}
