#include <iostream>

int get_one()
{
    return 1;
}

int main()
{
    int n = 0;
    
    n = get_one(n);

    std::cout << n << std::endl;

    return 0;
}