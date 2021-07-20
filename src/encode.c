#include "encode.h"

Result encode(const char* string) {
    Result result;

    result.exitCode = 0;
    result.string = *string;

    return result;
}
