#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifdef __linux__
#include <linux/limits.h>
#else
#include <limits.h>
    #if (defined WIN32)
    #define PATH_MAX MAX_PATH
    #elif (defined __APPLE__ && defined __MACH__)
    #define YEP_ISON_MACINTOSH 1
    #include <sys/sysctl.h>
    #endif
#endif

#define RESET "\033[0;39m"
#define LIGHT_GREEN "\033[0;92m"
#define EVER_GREEN "\033[0;96m"

int main(void)
{
    char *ps1 = "฿ ";
    char *ps2 = "> ";
    char *pwd = getenv("PWD");
    char *login_name = getenv("LOGNAME");
    char *path = getenv("PATH");
    int recent_exit = NULL;

    char user_command[PATH_MAX];

    while (1)
    {
        printf("%s%s@%s%s %s%s", EVER_GREEN, login_name, LIGHT_GREEN, pwd, RESET, ps1);
        fgets(user_command, PATH_MAX, stdin);

        if (!*user_command)
            continue;
        else
        {
            /* ขี้เกียจละครับ */
            return 127;
        }
    }

    return 0;
}