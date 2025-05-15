#include "../headers/RadarSensor.hpp"
#include <iostream>
#include <random>
#include <chrono>

void RadarSensor::run(){
    while(running){
        int objectDistance = rand()%100 + 1;
        awareness-> updateRadar(id, objectDistance);
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
}

void RadarSensor::stopRunning(){
    running= false;
}