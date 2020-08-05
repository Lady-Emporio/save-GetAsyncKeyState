#include <iostream>
#include <windows.h>

int main()
{
    const int down = -32767;
    const int press= -32768;
    const int alreadyPress= 1;
    const int notPress = 0;
    int res1;
    int res2;
    while(1){
        res1 = GetAsyncKeyState(0x61);//VK_NUMPAD1
        switch (res1) {
        case down:
            std::cout << "down" << std::endl;
            break;
        case press:
            std::cout << "press" << std::endl;
            break;
        case alreadyPress:
            std::cout << "alreadyPress" << std::endl;
            break;
        case notPress:
            std::cout << "notPress" << std::endl;
            break;
        default :
            std::cout << "error"<< std::endl;
            break;
        }
        Sleep(3000);
    }
}
