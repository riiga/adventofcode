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

    int i { 0 };
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

    std::cout << "At 0: " << opcodes[0] << std::endl;

    return 0;
}

