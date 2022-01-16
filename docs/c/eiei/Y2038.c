#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t epoch = 0;
    time_t timestamp = epoch + 2147483647;

    timestamp += 2147483647;
    
    printf("%s", asctime(gmtime(&timestamp)));
    
    return 0;
}