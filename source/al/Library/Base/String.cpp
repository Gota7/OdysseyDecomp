#include "Base/String.h"

namespace al {

    bool isEqualString(const char16_t *a, const char16_t *b) {
        u16 cur;

        while (true) {
            cur = *a;
            if (cur != *b)
                break;

            ++b;
            ++a;
            if (!cur)
                return true;
        }
        return false;
    }

    bool isEqualSubString(const char *a, const char *b) {
        return strstr(a, b);
    }
    bool isEqualSubString(const sead::SafeStringBase<char> &a, const sead::SafeStringBase<char> &b) {
        return strstr(a.cstr(), b.cstr());
    }

    bool isStartWithString(const char *str, const char *prefix) {
        if (prefix[0] == '\0')
            return true;

        u8 prefix_char = prefix[0];
        const char *prefix_iter = prefix + 1;

        while (*str && *str == prefix_char) {
            prefix_char = *prefix_iter++;
            str++;
            if (prefix_char == '\0')
                return true;
        }

        return false;
    }

    bool isMatchString(const char *str, const al::MatchStr &match) {
        auto result = al::getSubStringUnmatched(str, match);
        if (result) {
            return result[0] == 0;
        }
        return false;
    }

    s32 compareStringIgnoreCase(const char *a, const char *b) {
        return strcasecmp(a, b);
    }

    void copyString(char *str, const char *copy, u32 range) {
        strncpy(str, copy, range);
    }
    void copyStringW(char16_t *str, const char16_t *copy, u32 range) {
        sead::StringUtil::wcs16cpy(str, range, copy);
    }

    bool isInStack(const void *addr) {
        return sead::MemUtil::isStack(addr);
    }

    bool isEqualString(const char *a, const char *b) {
        while (*a == *b) {
            char cur = *a;

            ++b;
            ++a;
            if (!cur)    // End of string
                return true;
        }
        return false;
    }

    bool isEqualString(const sead::SafeStringBase<char> &a, const sead::SafeStringBase<char> &b) {
        auto strA = a.cstr();
        auto strB = b.cstr();
        while (*strA == *strB) {
            char cur = *strA;

            ++strB;
            ++strA;

            if (!cur)    // End of string
                return true;
        }
        return false;
    }

    bool isEqualStringCase(const char *a, const char *b) {
        return !strcasecmp(a, b);
    }
    bool isEqualStringCase(const sead::SafeStringBase<char> &a, const sead::SafeStringBase<char> &b) {
        return !strcasecmp(a.cstr(), b.cstr());
    }
}    // namespace al