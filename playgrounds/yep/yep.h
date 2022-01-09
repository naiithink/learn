/* Data type */
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

/* File type */
enum YEP_FILE_TYPE_ID
{
    YEP_FILE_TYPE_FIFO,
    YEP_FILE_TYPE_CHAR_S,
    YEP_FILE_TYPE_DIR,
    YEP_FILE_TYPE_BLOCK_S,
    YEP_FILE_TYPE_SYM_LINK,
    YEP_FILE_TYPE_SOCK,
    YEP_FILE_TYPE_WHT_OUT
};

#define YEP_FILE_TYPE(x) (  (x) ==                              \
                            S_IFIFO:    YEP_FILE_TYPE_FIFO,     \
                            S_IFCHR:    YEP_FILE_TYPE_CHAR_S,   \
                            S_IFDIR:    YEP_FILE_TYPE_DIR,      \
                            S_IFBLK:    YEP_FILE_TYPE_BLOCK_S,  \
                            S_IFLNK:    YEP_FILE_TYPE_SYM_LINK, \
                            S_IFSOCK:   YEP_FILE_TYPE_SOCK,     \
                            S_IFWHT:    YEP_FILE_TYPE_WHT_OUT   )

/* Jobctl */
typedef enum { dne = -1, false, true } running_ok;

/* ANSI Escape */
#define ANSI(x) ()

/* File */
#define S_IFMT 0170000           /* type of file */
#define        S_IFIFO  0010000  /* named pipe (fifo) */
#define        S_IFCHR  0020000  /* character special */
#define        S_IFDIR  0040000  /* directory */
#define        S_IFBLK  0060000  /* block special */
#define        S_IFREG  0100000  /* regular */
#define        S_IFLNK  0120000  /* symbolic link */
#define        S_IFSOCK 0140000  /* socket */
#define        S_IFWHT  0160000  /* whiteout */