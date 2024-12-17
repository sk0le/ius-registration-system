#include <stdlib.h>

#include "screen.h"

#ifdef _WIN32
    #define PLATFORM "Windows"
#else
    #define PLATFORM "Linux"
#endif


// Getter implementation
std::string Screen::getCurrentScreen() const {
    return currentScreen;
}

// Setter implementation
std::string Screen::setCurrentScreen(const std::string& newScreen) {
    currentScreen = newScreen;

    std::string commandToClear = "clear";
    if(PLATFORM == "Windows") commandToClear = "cls";
    system("clear");


    return newScreen;
}
