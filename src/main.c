#include <stdio.h>
#include <stdlib.h>

#include "encode.h"
#include "decode.h"
#include "result.h"

int main(int argc, char* argv[]) {
    const Result* result = encode("test");

    if (result->exitCode == EXIT_SUCCESS) {
        printf("%s\n", result->string);
    }

    return EXIT_SUCCESS;
}
