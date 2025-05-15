#include "../headers/SituationAwareness.hpp"

void SituationAwareness::updateRadar(int id, int distance){
    std::lock_guard<std::mutex> lock(mtx);
    radarData[id].push_back(distance);
    std::cout<<"[RADAR "<<id<<"] Detected object at " << distance << " units\n";
}


void SituationAwareness::showStatus(){
    std::lock_guard<std::mutex> lock(mtx);
    std::cout<<"[STATUS] Radar data: ";


    std::cout << std::endl;
}