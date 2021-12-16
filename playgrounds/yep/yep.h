#define YEP_HEADER_VERSION "0.1"

#include <stdlib.h>

// Unixes: unix __unix__ __unix
// MingGW: WIN32 _WIN32 __WIN32 __WIN32__ __MINGW32__ WINNT __WINNT __WINNT__ _X86_ i386 __i386

// ~/lists/predefined_macros.json
#if (defined __linux__)
#define YEP_IS_IN "linux"
#elif ( defined __APPLE__ && defined __MACH__   || \
        defined Macintosh                       || \
        defined macintosh                       \
)
#define YEP_IS_IN "darwin"
#elif ( defined __WIN64                         || \
        defined __WIN32                         || \
        defined __WIN16                         || \
        defined __WINDOWS__                     \
)
#define YEP_IS_IN "win32"
#endif

#if (   defined __amd64__                       || \
        defined __amd64                         || \
        defined __x86_64__                      || \
        defined __x86_64                        || \
        defined i386                            || \
        defined __i386                          || \
        defined __i386__                        || \
        defined _X86_                           || \
        defined _M_IX86                         || \
        defined _M_I86                          \
)
#define YEP_IS_ON "amd64"
#elif ( defined __aarch64__                     || \
        defined __arm__                         \
)
#define YEP_IS_ON "arm64"
#endif

// Data types
typedef struct
{
    int CHAR;
    int INT;
    int LONG;
    int FLOAT;
    int DOUBLE;
}
BYTE_SIZE;

// About exit_status
typedef enum {no, yes} ok_status;

// Platform info
typedef enum {linux, darwin, win32} platform_enum;

// Shells
const enum {bash, zsh, csh, cmd, powershell} shells;

typedef struct
{
    char *command;
}
_shells_;