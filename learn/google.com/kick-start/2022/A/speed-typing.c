/**
 * Speed Typing (5pts, 9pts)
 * 
 * Limits
 * 
 * - Memory limit: 1 GB.
 * - 1 ≤ T ≤ 100.
 * - Both the strings contain letters from a-z and A-Z.
 * - Length of the given strings will be 1 ≤ |I|, |P| ≤ 10**5.
 */

#include <stdio.h>

#define I_STREAMS 2
#define T_LLIMIT 1
#define T_ULIMIT 100
#define STR_MAX (10 * 10 * 10 * 10 * 10)

int main(void)
{
    const int T = -1;
    char IP[I_STREAMS][STR_MAX+1];
    int I_len = -1;
    int P_len = -1;
    
    for (int i = 0; i < T; ++i)
    {
        scanf("%s\n", IP[0]);
        scanf("%s\n", IP[1]);
        
        for (int stream = 0; stream < I_STREAMS;)
        {
            if (IP[stream][I_len] == '\0')
            {
                stream++;
            }

            char *str = IP[stream];
            
            if (str[I_len] < 65 || str[I_len] > 122 && (str[I_len] > 90 && str[I_len] < 97))
            {

                return 1;
            }
        }
        for (P_len = 0; P[P_len] != '\0'; ++P_len);
        
        if (I_len > P_len || I_len < 1 || P_len > STR_MAX)
        {
            printf("IMPOSSIBLE\n");
            return 0;
        }
        
        for (int s_I = 0; s_I < I_len; ++s_I)
        {
            for (int s_P = 0; s_P < P_len; ++s_P)
            {
                if 
            }
        }
    }
    
    
    return 0;
}