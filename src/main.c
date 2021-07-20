#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

#include "encode.h"
#include "decode.h"
#include "result.h"

// https://stackoverflow.com/questions/42239280/extract-bits-of-character-in-c-using-limited-bitwise-operators
// https://stackoverflow.com/questions/10825218/convert-from-a-binary-to-char-in-c

int main(int argc, char* argv[]) {
    Result result;

    if (argc == 0) {
        return EXIT_SUCCESS;
    }
    else if (argc >= 2) {
        if (strcmp(argv[1], "-d") == 0 || strcmp(argv[1], "--decode") == 0) {
            result = decode(argv[2]);
        }
        else if (strcmp(argv[1], "-e") == 0 || strcmp(argv[1], "--encode") == 0) {
            result = encode(argv[2]);
        }
        else {
            printf("Didn't provide correct arguments.");
            return EXIT_FAILURE;
        }
    }

    if (result.exitCode == EXIT_FAILURE) {
        return EXIT_FAILURE;
    }
    else {
        printf("%s\n", result.string);
    }

    return EXIT_SUCCESS;
}
