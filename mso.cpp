#include "include/mso.h"
#include <iostream>
using namespace std;
int main(int argv, char **args) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        cout << "SDL error on init.";
        return 1;
    }

    return 0;
}