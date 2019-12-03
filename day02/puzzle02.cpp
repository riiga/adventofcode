#include <iostream>
#include <vector>

int main(int argc, char* argv[])
{
    std::vector<int> opcodes {};

    int opcode;
    while (std::cin >> opcode)
    {
        opcodes.push_back(opcode);
    }

    std::vector<int> opcodes_backup = opcodes;

    for (int j = 0; j < 100; ++j)
    {
        for (int k = 0; k < 100; ++k)
        {
            int i { 0 };
            opcodes[i + 1] = j;
            opcodes[i + 2] = k;
            do
            {
                switch(opcodes[i])
                {
                    case 1:
                        opcodes[opcodes[i + 3]] = opcodes[opcodes[i + 1]] + opcodes[opcodes[i + 2]];
                        break;
                    case 2:
                        opcodes[opcodes[i + 3]] = opcodes[opcodes[i + 1]] * opcodes[opcodes[i + 2]];
                        break;
                    case 99:
                        break;
                }
                i += 4;
            }
            while (opcodes[i] != 99);

            if (opcodes[0] == 19690720)
            {
                std::cout << "FOUND!" << std::endl;
                std::cout << "noun: " << j << " verb: " << k << std::endl;
                return 0; // We can abort
            }

            opcodes = opcodes_backup;
        }

    }

    return 0;
}


