#pragma once

#include <prim/seadSafeString.h>
#include <prim/seadStringUtil.h>
#include <strings.h>

namespace al {
    template <s32 L>
    class StringTmp : public sead::FixedSafeString<L> {    // equal to WFormatFixedSafeString
    public:
        StringTmp(const char *format, ...) : sead::FixedSafeString<L>() {
            std::va_list args;
            va_start(args, format);
            this->formatV(format, args);
            va_end(args);
        }
        ~StringTmp() = default;
    };
    class MatchStr;

    const char *createStringIfInStack(const char *);
    const char *createConcatString(const char *, const char *);
    al::StringTmp<128> createFileNameBySuffix(sead::BufferedSafeStringBase<char> *, const char *, const char *);
    void outputValueWithComma(char *, unsigned int, unsigned long, bool, bool);
    void extractString(char *, const char *, unsigned int, unsigned int);

    const char *searchSubString(const char *, const char *);
    const char *searchSubString(const char *, const char *, int);

    const char *getSubStringUnmatched(const char **, const char *, al::MatchStr const &, void (*)(const char *, const char *, void *), void *);
    const char *getSubStringUnmatched(const char *, al::MatchStr const &);

    int extractBaseNameW(sead::BufferedSafeStringBase<char16_t> *, sead::SafeStringBase<char16_t> const &);
    void removeExtensionString(char *, unsigned int, const char *);
    void removeStringFromEnd(char *, unsigned int, const char *, const char *);
    void translateCharacters(char *, const char *, const char *);

    bool tryReplaceString(sead::BufferedSafeStringBase<char> *, const char *, const char *);
    bool tryReplaceString(sead::BufferedSafeStringBase<char> *, const char *, const char *, const char *);
    bool tryReplaceStringNoRecursive(sead::BufferedSafeStringBase<char> *, const char *, const char *, const char *);

    bool isEqualString(char16_t const *, char16_t const *);
    bool isEqualSubString(const char *, const char *);
    bool isEqualSubString(sead::SafeStringBase<char> const &, sead::SafeStringBase<char> const &);
    bool isStartWithString(const char *, const char *);
    bool isEndWithString(const char *, const char *);
    bool isMatchString(const char *, al::MatchStr const &);

    int compareStringIgnoreCase(const char *, const char *);
    void makeUrlEncodeString(char *, unsigned int, const char *);
    void makeUrlDecodeString(char *, unsigned int, const char *);
    void copyString(char *, const char *, unsigned int);
    void copyStringW(char16_t *, char16_t const *, unsigned int);

    bool isInStack(void const *);

    bool isEqualString(const char *, const char *);
    bool isEqualString(sead::SafeStringBase<char> const &, sead::SafeStringBase<char> const &);
    bool isEqualStringCase(const char *, const char *);
    bool isEqualStringCase(sead::SafeStringBase<char> const &, sead::SafeStringBase<char> const &);
};    // namespace al