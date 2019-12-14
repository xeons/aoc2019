#ifndef AOC2019_DAY2SOLUTION_H
#define AOC2019_DAY2SOLUTION_H

#include "Solution.h"
#include <vector>

class Day2Solution : public Solution {
public:
    void run() override;

private:
    int run_program(std::vector<int> program, int noun, int verb);
    int search_program(std::vector<int> program, int expected_value);
};

#endif //AOC2019_DAY2SOLUTION_H
