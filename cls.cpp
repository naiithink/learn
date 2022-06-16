#include <iostream>

class Greeter
{
    public:
        int n;
};

int main(void)
{
    Greeter greet;
    greet.n = 101;

    Greeter *greet_p = &greet;
    
    std::cout << (*greet_p).n << std::endl;
    std::cout << greet_p->n << std::endl;

    return 0;
}
