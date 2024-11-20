#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <opencv2/opencv.hpp>

#include "DIP_works.h"
void func_ctrl(void);
int main() {
    system("chcp 65001");
    std::cout << "Hello World!" << std::endl;
    std::cout << "-------------------------------------------------------------------!" << std::endl;
    std::cout << "in week02 homework, choose the wanted function by typing in numbers:" << std::endl;
    
    func_ctrl();
    std::cout << "end test!" << std::endl;
    return 0;
}

void func_ctrl(void) {
    std::cout << "Current function: " << __func__ << std::endl;
    int cmd;
    while (1) {
        std::cin >> cmd;
        std::cout << "CMD =" << cmd << std::endl;
        switch (cmd) {
            case 1:
                Geometric_Transformation();
                break;

            case 0:
                std::cout << "cmd =" << cmd << ", return." << std::endl;
                return;
        }
        std::cout << "Current function: " << __func__ << std::endl;
    }
}