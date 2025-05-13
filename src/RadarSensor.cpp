#include "../headers/RadarSensor.hpp"
#include <iostream>
#include <random>
#include <chrono>

void RadarSensor::run(){
    while(running){
        int objectDistance = rand()%100 + 1;
        awareness-> updateRadar(objectDistance);
        std::this_tread::sleep_for(std::chrono::seconds(2));
    }
}