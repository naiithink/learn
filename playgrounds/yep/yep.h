/*
*   Predefined macro ref:
*       - ARCH
*           - ARM: https://developer.arm.com/documentation/dui0774/e/Other-Compiler-specific-Features/Predefined-macros
*       - OS
*           - Apple macOS: https://opensource.apple.com/source/WTF/WTF-7601.1.46.42/wtf/Platform.h.auto.html
*           // Further MSVC
*           - Microsoft Windows: https://docs.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-170
*/

#if (   defined(WIN32)      \
    || defined(_WIN32))
    #define YEP_IS_IN "win32"
#elif defined(__linux__)
    #define YEP_IS_IN "linux"
#elif __APPLE__
    #include <Availability.h>
    #include <AvailabilityMacros.h>
    #include <TargetConditionals.h>
    #if TARGET_OS_MAC
    #define YEP_IS_IN "mac"
    #elif TARGET_OS_IPHONE
        #define YEP_IS_IN "ios"
    #endif
#elif ( defined(unix)       \
    || defined(__unix)      \
    || defined(__unix__)
    #define YEP_IS_IN "unix -1"
#else
    #define YEP_IS_IN 0
#endif

#if (   defined __arm__     \
    || defined __aarch64__)
    #define YEP_IS_ON "arm"
#elif (defined __)
#endif

struct cli_opt
{
    char *name;
    int has_arg;
    int *flag;
    int val;
};

/* dne: does not exist; undefined. */
typedef enum {dne = -1, false, true} yep_ok;
typedef char *string;