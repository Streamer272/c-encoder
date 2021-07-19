#pragma once

static int exitSuccess = 0;
static int exitFailure = 1;

struct Result_s {
    int exitCode;
    const char* string;
};
typedef struct Result_s Result;
