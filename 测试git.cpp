#include <iostream>

int Mutiply(int a, int b)
{
    return a * b;
}

void Log(int a, int b)
{
    int result = Mutiply(a, b);
    std::cout << result << std::endl;
}

int main()
{
    Log(5, 8);
    Log(9, 3);
    std::cin.get();
}