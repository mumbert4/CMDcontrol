#include "../headers/CommandInterface.hpp"
#include "../headers/SituationAwareness.hpp"
#include "../headers/RadarSensor.hpp"
#include<thread>
#include<chrono>


int main() {
    SituationAwareness awareness;
    
    

    std::vector<std::unique_ptr<RadarSensor>>sensors;
    std::vector<std::thread> sensorThreads;

    
    for(int i = 0; i < 10; ++i){
        sensors.emplace_back(std::make_unique<RadarSensor>(&awareness,i));
        sensorThreads.emplace_back(&RadarSensor::run, sensors.back().get());
    }

    CommandInterface commandInterface(&awareness, sensors);
    
    std::thread commandThread([&](){
        commandInterface.run();
    });

    commandThread.join();
    std::cout<<"COMMAND THREAD JOINED"<<std::endl;

    
    
    

    
    return 0;

}