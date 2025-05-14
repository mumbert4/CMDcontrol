#pragma once 
#include "../headers/SituationAwareness.hpp"

class CommandInterface{
    public:
        CommandInterface(SituationAwareness* sa): awareness(sa){}
        void run();
    private:
        SituationAwareness* awareness;

};