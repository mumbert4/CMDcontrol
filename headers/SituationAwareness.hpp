#pragma once
#include <mutex>
#include <vector>
#include <iostream>


class SituationAwareness{

    public:
        void updateRadar(int distance);
        void showStatus();

    private:
        std::mutex mtx;
        std::vector<int> radarData;

};