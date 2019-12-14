#include "Day1Solution.h"
#include "Day2Solution.h"
#include "Solution.h"
#include <iostream>
#include <map>

int main()
{
    std::map<int, Solution*> solutions = {
        { 1, new Day1Solution },
        { 2, new Day2Solution }
    };

    for (const auto& [day, solution] : solutions) {
        std::cout << "Day " << day << std::endl;
        solution->run();
        std::cout << "--------------------------------------------------------------------" << std::endl;
    }

    return 0;
}