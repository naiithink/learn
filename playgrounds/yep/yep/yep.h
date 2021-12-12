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

#define

typedef struct
{
        int CHAR;
        int INT;
        int LONG;
        int FLOAT;
        int DOUBLE;
}
BYTE_SIZE;

typedef enum {uname, WinVer} get_os;
typedef enum {unix = uname -i, $PSVersionTable.PSVersion} get_arch;

extern
int
encrypt_malloc ()
{}

extern
int
even_index (int index_from_list) {
    //
}

