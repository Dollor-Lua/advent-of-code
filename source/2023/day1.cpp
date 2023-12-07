#include "core.h"

static std::vector<std::string> rep { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" }

int main() {
    std::string input;

    int total = 0;
    while (std::getline(std::cin, input)) {
        for (size_t i = 0; i < rep.size(); i++)
            std::replace(input.begin(), input.end(), rep[i], std::to_string(i) + rep[i]);

        std::string val =
            input.substr(input.find_first_of("0123456789"), 1) + input.substr(input.find_last_of("0123456789"), 1);
        total += std::stoi(val);
    }

    std::cout << total << std::endl;
    return 0;
}