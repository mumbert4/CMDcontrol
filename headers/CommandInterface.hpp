#pragma once 
#include "../headers/SituationAwareness.hpp"
#include "RadarSensor.hpp"
class CommandInterface{
    public:
        CommandInterface(SituationAwareness* sa, std::vector<std::unique_ptr<RadarSensor>>& sensors): awareness(sa), sensors(sensors){}
        void run();
    private:
        SituationAwareness* awareness;
        std::vector<std::unique_ptr<RadarSensor>>& sensors;

};