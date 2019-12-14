#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>

int run_program(std::vector<int> program, int noun, int verb)
{
    int program_counter = 0;
    bool running = true;
    program[1] = noun;
    program[2] = verb;
    while (running)
    {
        auto opcode = program[program_counter++];
        auto val1 = program[program[program_counter++]];
        auto val2 = program[program[program_counter++]];

        switch (opcode)
        {
        case 1: // addition
            program[program[program_counter++]] = val1 + val2;
            break;
        case 2: // multiplication
            program[program[program_counter++]] = val1 * val2;
            break;
        case 99: // halt
        default: // unhandled
            running = false;
            break;
        }
    }
    return program[0];
}

int search_program(std::vector<int> program, int expected_value)
{
    for (auto noun = 0; noun < 99; noun++)
    {
        for (auto verb = 0; verb < 99; verb++)
        {
            auto value = run_program(program, noun, verb);
            if (value == expected_value)
            {
                return 100 * noun + verb;
            }
        }
    }
    return -1;
}

int main()
{
    std::string line;
    std::ifstream input_file("../input/day2.txt");
    std::vector<int> program;

    if (input_file.is_open())
    {
        while (getline(input_file, line, ','))
        {
            program.push_back(std::stoi(line));
        }

        auto result1 = run_program(program, 12, 2);
        std::cout << "Part 1 Result: " << result1 << std::endl;

        auto result2 = search_program(program, 19690720);
        std::cout << "Part 2 Result: " << result2 << std::endl;

        input_file.close();
    }

    return 0;
}