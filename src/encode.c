#include <stdlib.h>
#include <string.h>

#include "encode.h"

Result encode(const char* string) {
    Result result;

    result.exitCode = 0;
    result.string = malloc(strlen(string) + 1);
    strcpy(result.string, string);

    return result;
}
