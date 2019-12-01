#include <cmath>
#include <iostream>

int calculate_total_mass(int module_mass)
{
    double module_mass_double { static_cast<double>(module_mass) };

    module_mass_double = std::floor(module_mass_double / 3.0);

    return static_cast<int>(module_mass_double) - 2;
}

int main(int argc, char* argv[])
{
    int module_mass { 0 };
    int total { 0 };

    while (std::cin >> module_mass)
    {
        bool fuel_zero { false };

        do
        {
            module_mass = calculate_total_mass(module_mass);

            if (module_mass <= 0)
            {
                fuel_zero = true;
            }
            else
            {
                total += module_mass;
                std::cout << "Current total is: " << total << std::endl;
            }
        }
        while (!fuel_zero);

        std::cout << "Current total is: " << total << std::endl;
    }

    std::cout << "Total mass is: " << total << std::endl;

    return 0;
}
