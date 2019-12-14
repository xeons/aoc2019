#include "Day1Solution.h"
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>

void Day1Solution::run()
{
    std::string line;
    std::ifstream input_file("../input/day1.txt");

    auto part1_sum = 0;
    auto part2_sum = 0;

    if (input_file.is_open()) {
        while (getline(input_file, line)) {
            auto val = std::stoi(line);
            auto calculated_value = std::floor(val / 3) - 2;

            part1_sum += calculated_value;
            while (calculated_value > 0) {
                part2_sum += calculated_value;
                calculated_value = std::floor(calculated_value / 3) - 2;
            }
        }
        input_file.close();
    }

    std::cout << "Part 1 Answer: " << part1_sum << std::endl;
    std::cout << "Part 2 Answer: " << part2_sum << std::endl;
}