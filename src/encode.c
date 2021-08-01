#include "encode.h"

Result encode(const char* string, unsigned short int range) {
    Result result;
    result.exitCode = 0;

    char* encodedString = malloc(strlen(string) + 1);
    int index = 0;
    while (strcmp(&string[index], "\0") != 0) {
        const int ascii = (int) string[index];
        char newChar = (char) (ascii << range);

        encodedString[index++] = newChar;
    }
    encodedString[index] = *"\0";

    result.string = malloc(strlen(string) + 1);
    strcpy(result.string, encodedString);
    free(encodedString);

    return result;
}
