#include <iostream>

const char FullPossibility[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int FullPossibility_length = sizeof(FullPossibility) - 1;

const char NoSymbols[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int NoSymbols_length = sizeof(NoSymbols) - 1;

bool Symbols;
int Length;

std::string Generate()
{
    std::string Password;

    if (Symbols == false)
    {
        for (int i = 0; i < Length; i++)
        {
            std::cout << NoSymbols[rand() % NoSymbols_length];
        }
    }
    else
    {
        for (int i = 0; i < Length; i++)
        {
            std::cout << FullPossibility[rand() % FullPossibility_length];
        }
    }

    return Password;
}

int main()
{
    srand(time(0));

    std::cout << "Enter the length of password: ";
    std::cin >> Length;
    std::cout << "Should it contain symbols (y/n): ";
    std::cin >> Symbols;
    std::cout << "Generated password: ";
    
    std::cout << Generate();

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Press any key to start again . . ." << std::endl;
    system("pause >nul");
    system("cls");
    main();

    Length = NULL;
    Symbols = NULL;

    return 0;
}