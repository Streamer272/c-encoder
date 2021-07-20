#include "encode.h"
#include "result.h"

Result encode(const char* string) {
    Result result;

    result.exitCode = 0;
    result.string = string;

    return result;
}
