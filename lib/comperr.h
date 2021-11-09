// comperr (c) Nikolas Wipper 2020

#ifndef COMPERR_COMPERR_H
#define COMPERR_COMPERR_H

#ifndef __cplusplus

#include <stdarg.h>
#include <stdbool.h>

#else
#include <cstdarg>

extern "C" {
#endif

enum message_kind {
    ERROR,
    WARNING,
    NOTE
};

#ifndef ERROR_STREAM
#define ERROR_STREAM stdout
#endif
#ifndef WARNING_STREAM
#define WARNING_STREAM stdout
#endif
#ifndef NOTE_STREAM
#define NOTE_STREAM stdout
#endif
#ifndef ENDFILE_STREAM
#define ENDFILE_STREAM stdout
#endif

void comperr(const char *message, enum message_kind kind, const char *fileName, int lineNumber, int row, ...);

void vcomperr(const char *message, enum message_kind kind, const char *fileName, int lineNumber, int row, va_list va);

bool endfile();

int errorcount();
int warncount();

#ifdef __cplusplus
}
#endif

#endif //COMPERR_COMPERR_H
