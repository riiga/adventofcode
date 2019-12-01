#include <cmath>
#include <iostream>

unsigned int calculate_total_mass(unsigned int module_mass)
{
    double module_mass_double { static_cast<double>(module_mass) };

    module_mass_double = std::floor(module_mass_double / 3.0);

    return static_cast<unsigned int>(module_mass_double) - 2;
}

int main(int argc, char* argv[])
{
    unsigned int module_mass { 0 };
    unsigned int total { 0 };

    while (std::cin >> module_mass)
    {
        total += calculate_total_mass(module_mass);
        std::cout << "Current total is: " << total << std::endl;
    }

    std::cout << "Total mass is: " << total << std::endl;

    return 0;
}
