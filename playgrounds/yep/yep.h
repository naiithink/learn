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

#if (defined __APPLE__ && defined __MACH__)
int
isa_translated_process (void)
{
   int ret = 0;
   size_t size = sizeof(ret);
   if (sysctlbyname ("sysctl.proc_translated", &ret, &size, NULL, 0) == -1) 
   {
      if (errno == ENOENT)
         return 0;
      return -1;
   }
   return ret;
}
#endif