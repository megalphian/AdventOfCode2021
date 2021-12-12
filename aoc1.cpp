//
// Created by Megnath Ramesh on 2021-12-12.
//

#include "aoc1.h"
#include "utils.h"

int aoc1_fn(std::string filename) {
    // Read a list of integers as the input sonar readings
    std::string filename_str(filename);
    std::ifstream InFile(filename);

    if (!InFile.is_open()) {
        std::cerr << "Could not open the file - '"
             << filename << "'" << std::endl;
        return EXIT_FAILURE;
    }

    std::vector<int> sonar_readings;
    int number;
    while(InFile >> number)
        sonar_readings.push_back(number);

    int no_increases = 0;
    for(int i=1; i < sonar_readings.size(); i++) {
        if(sonar_readings[i-1] < sonar_readings[i]) {
            no_increases++;
        }
    }

    return no_increases;
};