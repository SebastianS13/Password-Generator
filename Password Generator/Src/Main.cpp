#include <iostream>

const char alphanum[] = "0123456789!@#$%^&*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum) - 1;

int main()
{
    srand(time(0));
    int Length;

    std::cout << "Enter the length of password: ";
    std::cin >> Length;
    std:: cout << "Generated password: ";
    
    for (int i = 0; i < Length; i++)
    {
        std::cout << alphanum[rand() % string_length];
    }
    
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Press any key to start again . . ." << std::endl;
    system("pause >nul");
    system("cls");
    main();

    return 0;
}