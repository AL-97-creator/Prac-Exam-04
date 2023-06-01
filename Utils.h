#ifndef UTILS_H
#define UTILS_H

#include <cmath>
#include <cstdlib>
#include <ctime>
#include <tuple>

class Utils {
public:
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
        srand(time(NULL));
        int randomX = std::rand() % gridWidth;
        srand(time(NULL));
        int randomY = std::rand() % gridHeight;
        std::tuple<int, int> randomPosition(randomX, randomY);
        return randomPosition;
    }
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
        int x1 = std::get<0>(pos1);
        int x2 = std::get<1>(pos2);
        int y1 = std::get<0>(pos1);
        int y2 = std::get<1>(pos2);
        double distance = sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
        return distance;
    }
};

#endif