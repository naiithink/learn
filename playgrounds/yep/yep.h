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

enum YEP_TYPE_ID
{
    YEP_TYPE_BOOL,
    YEP_TYPE_SHORT_INT,
    YEP_TYPE_UNSIGNED_SHORT_INT,
    YEP_TYPE_INT,
    YEP_TYPE_UNSIGNED_INT,
    YEP_TYPE_LONG_INT,
    YEP_TYPE_UNSIGNED_LONG_INT,
    YEP_TYPE_LONG_LONG_INT,
    YEP_TYPE_UNSIGNED_LONG_LONG_INT,
    YEP_TYPE_FLOAT,
    YEP_TYPE_DOUBLE,
    YEP_TYPE_LONG_DOUBLE,
    YEP_TYPE_CHAR,
    YEP_TYPE_SIGNED_CHAR,
    YEP_TYPE_UNSIGNED_CHAR,
    YEP_TYPE_INT_PTR,
    YEP_TYPE_CHAR_PTR,
    YEP_TYPE_VOID_PTR,
    YEP_TYPE_UNKNOWN_TYPE = -1
};

#define YEP_TYPE(x) _Generic(   x,                                                                  \
                                _Bool:                      YEP_TYPE_BOOL,                          \
                                short int:                  YEP_TYPE_SHORT_INT,                     \
                                unsigned short int:         YEP_TYPE_UNSIGNED_SHORT_INT,            \
                                int:                        YEP_TYPE_INT,                           \
                                unsigned int:               YEP_TYPE_UNSIGNED_INT,                  \
                                long int:                   YEP_TYPE_LONG_INT,                      \
                                unsigned long int:          YEP_TYPE_UNSIGNED_LONG_INT,             \
                                long long int:              YEP_TYPE_LONG_LONG_INT,                 \
                                unsigned long long int:     YEP_TYPE_UNSIGNED_LONG_LONG_INT,        \
                                float:                      YEP_TYPE_FLOAT,                         \
                                double:                     YEP_TYPE_DOUBLE,                        \
                                long double:                YEP_TYPE_LONG_DOUBLE,                   \
                                char:                       YEP_TYPE_CHAR,                          \
                                signed char:                YEP_TYPE_SIGNED_CHAR,                   \
                                unsigned char:              YEP_TYPE_UNSIGNED_CHAR,                 \
                                int *:                      YEP_TYPE_INT_PTR,                       \
                                char *:                     YEP_TYPE_CHAR_PTR,                      \
                                void *:                     YEP_TYPE_VOID_PTR,                      \
                                default:                    YEP_TYPE_UNKNOWN_TYPE                   )
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