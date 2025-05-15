#pragma once
#include <mutex>
#include <vector>
#include <iostream>
#include <map>

class SituationAwareness{

    public:
        void updateRadar(int id, int distance);
        void showStatus();

    private:
        std::mutex mtx;
        std::map<int, std::vector<int>> radarData;

};