#include <iostream>
#include <cstdio>

void
fprintNode (const int fd = 2)
{
    if (fd < 1 || fd > 2)
    {
        std::fprintf (stderr, "%s:%d: ErrorInvalidFileDescriptor\n", __FILE__, __LINE__);
        return ;
    }

    switch (fd)
    {
        case 1:
            std::cout << "cout" << std::endl;
            break;
        case 2:
            std::cerr << "cerr" << std::endl;
            break;
        default:
            std::cerr << "cerr" << std::endl;
    }
}

int main(void)
{
    fprintNode (1);

    return 0;
}