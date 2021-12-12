#include <iostream>

#include "aoc1.h"

int main(int argc, char **argv) {
    std::string base_dir = "../Data/";

    // AOC 1
    std::string aoc1_file = base_dir + argv[1];
    int depth_increased = aoc1_fn(aoc1_file);
    std::cout << depth_increased << std::endl;

    // AOC 2
    return 0;
}
