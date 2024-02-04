#include <stdio.h>
#include <magic.h>

int main(int argc, char **argv)
{
    const char *mime;
    magic_t magic;

    magic = magic_open(MAGIC_MIME_TYPE);

    // Use default magic database file
    // May replaced with a colon-separated list of (basename) magic file names
    magic_load(magic, NULL);

    magic_compile(magic, NULL);
    mime = magic_file(magic, argv[1]);

    printf("%s\n", mime);

    magic_close(magic);
    return 0;
}
