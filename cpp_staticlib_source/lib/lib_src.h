/**
 *
 */
#pragma once

#include <string>
#define PUBLIC_EXPORT __attribute__((visibility("default")))

PUBLIC_EXPORT void SanitizeToASCII(
    const std::string& inString,
    std::string& outString);