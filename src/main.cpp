#include "../headers/CommandInterface.hpp"
#include "../headers/SituationAwareness.hpp"
#include "../headers/RadarSensor.hpp"
#include<thread>
#include<chrono>


int main() {
    SituationAwareness awareness;
    RadarSensor radar(&awareness);
    CommandInterface commandInterface(&awareness);

    std::thread sensorThread([&](){
        radar.run();
    });

    std::thread commandThread([&](){
        commandInterface.run();
    });

    sensorThread.join();
    commandThread.join();

    return 0;

}