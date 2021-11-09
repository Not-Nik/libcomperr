# libcomperr

A simple C library to create GCC-like compiler warnings and errors.

## Simple usage example

```c
#include "comperr.h"

int main()
{
    comperr(false, "Test warning", true, "", 0, 0);
    comperr(false, "Test error 1", false, "", 0, 0);
    comperr(false, "Test error 2", false, "", 0, 0);
    endfile();
}
```

## Internal stuff...

...you might want to know.

* Streams are flushed after each message
* Tabs in files are replaced with single whitespaces
* ANSI color codes are used so your terminal has to support that

There are three compile flags:

### ERROR_STREAM, WARNING_STREAM, NOTE_STREAM, ENDFILE_STREAM

These set the stream that should be use when printing an error, a warning, a noe and the endfile message respectively.

### AUTO_EXIT

If defined the library will automatically `exit(1)` if there has been an error when `endfile()` is called.