#include "../headers/SituationAwareness.hpp"

void SituationAwareness::updateRadar(int distance){
    std::lock_guard<std::mutex> lock(mtx);
    radarData.push_back(distance);
    std::cout<<"[RADAR] Detected object at " << distance << " units\n";
}


void SituationAwareness::showStatus(){
    std::lock_guard<std::mutex> lock(mtx);
    std::cout<<"[STATUS] Radar data: ";
    for(int d: radarData){
        std::cout<<d<<" ";
    }
    std::cout << std::endl;
}