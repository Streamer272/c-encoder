#include "decode.h"

Result decode(const char* string) {
    Result result;

    result.exitCode = 0;
    result.string = *string;

    return result;
}
