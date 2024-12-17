#ifndef SCREEN_H
#define SCREEN_H

#include <string>

struct Screen {
    // Public member
    std::string currentScreen = "login";

    // Getter
    std::string getCurrentScreen() const;

    // Setter
    std::string setCurrentScreen(const std::string& newScreen);
};

#endif // SCREEN_H
