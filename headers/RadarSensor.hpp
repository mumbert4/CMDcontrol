#pragma once
#include "SituationAwareness.hpp"
#include <thread>
#include <atomic>

class RadarSensor {
    public:
        RadarSensor(SituationAwareness* sa , int id): awareness(sa), running(true), id(id){}
        void run();
        void stopRunning();
    private:
        SituationAwareness* awareness;
        std::atomic<bool> running;
        int id;

};