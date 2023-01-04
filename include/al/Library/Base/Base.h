#pragma once

#include <basis/seadTypes.h>
#include <cstring>
#include <cstdarg>

namespace al {
    const char *calcHashCode(const char *);
    const char *calcHashCodeLower(const char *);
    const char *calcHashCodeFmt(const char *, std::va_list);
    const char *calcHashCodeFmt(const char *, ...);
    const char *getBaseName(const char *);
}    // namespace al