#include <stdio.h>
#include <X11/Xlib.h>

int
main (int argc, char **argv)
{
    const char *display_name = "localhost:0.0";
    unsigned long valuemask = CWBackPixel | CWBorderPixel;
    XSetWindowAttributes *attribute;

    attribute->/*  */; 

    Display *my_display = XOpenDisplay (display_name);

    if (my_display == NULL)
    {
        fprintf (stderr, "ERROR: Could not open display\n");
        exit (1);
    }

    Window my_window_root = XDefaultRootWindow (my_display);
    Window XCreateWindow (my_display,
                          my_window_root,
                          0, 0,
                          10, 10
                          0,
                          InputOutput,
                          DirectColor,
                          /*  */);

    XCloseDisplay (display_name);

    return 0;
}