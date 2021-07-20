#include "decode.h"
#include "result.h"

Result decode(const char* string) {
    Result result;

    result.exitCode = 0;
    result.string = string;

    return result;
}
