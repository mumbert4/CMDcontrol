#pragma once
#include "SituationAwareness.hpp"
#include <thread>
#include <atomic>

class RadarSensor {
    public:
        RadarSensor(SituationAwareness* sa ): awareness(sa), running(true){}
        void run();
    
    private:
        SituationAwareness* awareness;
        std::atomic<bool> running;

};