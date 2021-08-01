#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "encode.h"
#include "decode.h"

// https://stackoverflow.com/questions/42239280/extract-bits-of-character-in-c-using-limited-bitwise-operators
// https://stackoverflow.com/questions/10825218/convert-from-a-binary-to-char-in-c

int main(int argc, char* argv[]) {
    Result result;

    if (argc < 1) {
        return EXIT_SUCCESS;
    }
    else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
        printf("This is automatic response provided by help command.\n");
        printf("Program arguments:\n");
        printf("\t<encoder action (-e | -d)> - action you want the encoder to do (-e for encode, -d for decode).\n");
        printf("\t<encoder string> - string you want to decode/encode\n");

        return EXIT_SUCCESS;
    }
    else if (argc >= 2) {
        if (strcmp(argv[1], "-d") == 0 || strcmp(argv[1], "--decode") == 0) {
            result = decode(argv[2], 1);
        }
        else if (strcmp(argv[1], "-e") == 0 || strcmp(argv[1], "--encode") == 0) {
            result = encode(argv[2], 1);
        }
        else {
            printf("Incorrect arguments. Run `encoder --help` to show help.\n");
            return EXIT_FAILURE;
        }
    }

    if (result.exitCode == EXIT_FAILURE || result.string == (void*)0) {
        return EXIT_FAILURE;
    }
    else {
        printf("Encoder result: \"%s\"\n", result.string);
    }

    return EXIT_SUCCESS;
}
