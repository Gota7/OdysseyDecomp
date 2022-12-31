#pragma once

#include <prim/seadSafeString.h>

namespace al {
    class IAudioResourceLoader;
    class Resource;

    void isExistFile(const sead::SafeStringBase<char> &);
    void isExistDirectory(const sead::SafeStringBase<char> &);
    void isExistArchive(const sead::SafeStringBase<char> &);
    void isExistArchive(const sead::SafeStringBase<char> &, const char *);
    void getFileSize(const sead::SafeStringBase<char> &);
    void calcFileAlignment(const sead::SafeStringBase<char> &);
    void calcBufferSizeAlignment(const sead::SafeStringBase<char> &);
    void loadFile(const sead::SafeStringBase<char> &, s32);
    void tryLoadFileToBuffer(const sead::SafeStringBase<char> &, unsigned char *, u32, s32);
    void loadArchive(const sead::SafeStringBase<char> &);
    void loadArchiveWithExt(const sead::SafeStringBase<char> &, const char *);
    void tryRequestLoadArchive(const sead::SafeStringBase<char> &, sead::Heap *);
    void loadSoundItem(u32, u32, al::IAudioResourceLoader *);
    void tryRequestLoadSoundItem(u32);
    void tryRequestPreLoadFile(const al::Resource *, s32, sead::Heap *, al::IAudioResourceLoader *);
    void tryRequestPreLoadFile(const al::Resource *, const sead::SafeStringBase<char> &, sead::Heap *, al::IAudioResourceLoader *);
    void waitLoadDoneAllFile(void);
    void clearFileLoaderEntry(void);
    void makeLocalizedArchivePath(sead::BufferedSafeStringBase<char> *, const sead::SafeStringBase<char> &);
    void makeLocalizedArchivePathByCountryCode(sead::BufferedSafeStringBase<char> *, const sead::SafeStringBase<char> &);
    void setFileLoaderThreadPriority(s32);
}    // namespace al