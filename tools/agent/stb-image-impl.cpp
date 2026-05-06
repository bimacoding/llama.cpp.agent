// Compile stb_image implementation for llama-agent (terminal image preview).
// This avoids depending on mtmd's shared library for these symbols on Windows.
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wcast-qual"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wcast-qual"
#endif

#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
