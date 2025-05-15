#include "CommandInterface.hpp"
#include <iostream>
#include <string>

void CommandInterface::run(){
    std::string input;
    while (true){
        std::cout<<"Enter command (status/exit):";
        std::getline(std::cin,input);
        if(input =="status"){
            awareness-> showStatus();
        }
        else if(input == "exit"){
            std::cout<<"Exiting command interface.\n";
            for(auto &t: sensors){
                t->stopRunning();
                std::cout<<"Stopping radar"<<std::endl;
            }
            break;
        }
    }
}