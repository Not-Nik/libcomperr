// comperr (c) Nikolas Wipper 2020

#include "comperr.h"

int main() {
    comperr("Test warning", WARNING, "Makefile", 1, 5);
    comperr("Test error 1", ERROR, "Makefile", 2, 3);
    comperr("Test error 2", ERROR, "Makefile", 3, 10);
    comperr("Format test %i. %s", ERROR, "Makefile", 3, 10, 1, "Let's hope it works");
    comperr("This is a note", NOTE, "Makefile", 4, 12);
    endfile();
}
