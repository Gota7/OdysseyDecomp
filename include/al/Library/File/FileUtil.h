#pragma once

#include <prim/seadSafeString.h>

namespace al {
    class IAudioResourceLoader;
    class Resource;

    void isExistFile(sead::SafeStringBase<char> const&);
    void isExistDirectory(sead::SafeStringBase<char> const&);
    void isExistArchive(sead::SafeStringBase<char> const&);
    void isExistArchive(sead::SafeStringBase<char> const&,const char*);
    void getFileSize(sead::SafeStringBase<char> const&);
    void calcFileAlignment(sead::SafeStringBase<char> const&);
    void calcBufferSizeAlignment(sead::SafeStringBase<char> const&);
    void loadFile(sead::SafeStringBase<char> const&,int);
    void tryLoadFileToBuffer(sead::SafeStringBase<char> const&,unsigned char *,unsigned int,int);
    void loadArchive(sead::SafeStringBase<char> const&);
    void loadArchiveWithExt(sead::SafeStringBase<char> const&,const char*);
    void tryRequestLoadArchive(sead::SafeStringBase<char> const&,sead::Heap *);
    void loadSoundItem(unsigned int,unsigned int,al::IAudioResourceLoader *);
    void tryRequestLoadSoundItem(unsigned int);
    void tryRequestPreLoadFile(al::Resource const*,int,sead::Heap *,al::IAudioResourceLoader *);
    void tryRequestPreLoadFile(al::Resource const*,sead::SafeStringBase<char> const&,sead::Heap *,al::IAudioResourceLoader *);
    void waitLoadDoneAllFile(void);
    void clearFileLoaderEntry(void);
    void makeLocalizedArchivePath(sead::BufferedSafeStringBase<char> *,sead::SafeStringBase<char> const&);
    void makeLocalizedArchivePathByCountryCode(sead::BufferedSafeStringBase<char> *,sead::SafeStringBase<char> const&);
    void setFileLoaderThreadPriority(int);
}