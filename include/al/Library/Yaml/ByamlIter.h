#pragma once

#include <gfx/seadColor.h>
#include <math/seadBoundBox.h>
#include <math/seadVector.h>

namespace al {
    class ByamlData;
    class ByamlHeader;

    class ByamlIter {
    public:
        ByamlIter();
        ByamlIter(const u8 *);
        ByamlIter(const u8 *, const u8 *);

        inline void set(const u8 *pData, const u8 *pRoot) {
            mData = pData;
            mRootNode = pRoot;
        }

        bool isValid() const;
        bool isTypeHash() const;
        bool isTypeArray() const;
        bool isTypeContainer() const;
        bool isExistKey(const char *) const;
        s32 getKeyIndex(const char *) const;
        bool isInvertOrder() const;
        s32 getSize() const;
        ByamlIter getIterByIndex(s32) const;
        bool getByamlDataByIndex(ByamlData *, int) const;
        ByamlIter getIterByKey(const char *) const;
        bool getByamlDataByKey(ByamlData *, const char *) const;
        bool getByamlDataByKeyIndex(ByamlData *, int) const;
        bool getByamlDataAndKeyName(ByamlData *, const char **, int) const;
        bool getKeyName(const char **, int) const;
        bool tryGetIterByIndex(ByamlIter *, int) const;
        bool tryGetIterAndKeyNameByIndex(ByamlIter *, const char **, int) const;
        bool tryGetIterByKey(ByamlIter *, const char *) const;
        bool tryGetStringByKey(const char **, const char *) const;
        bool tryConvertString(const char **, const ByamlData **) const;
        bool tryGetBinaryByKey(const u8 **, int *, const char *) const;
        bool tryConvertBinary(const u8 **, int *, const ByamlData *) const;
        bool tryGetBoolByKey(bool *, const char *) const;
        bool tryConvertBool(bool *, const ByamlData *) const;
        bool tryGetIntByKey(int *, const char *) const;
        bool tryConvertInt(int *, const ByamlData *) const;
        bool tryGetUIntByKey(u32 *, const char *) const;
        bool tryConvertUInt(u32 *, const ByamlData *) const;
        bool tryGetFloatByKey(f32 *, const char *) const;
        bool tryConvertFloat(f32 *, const ByamlData *);
        bool tryGetInt64ByKey(s64 *, const char *) const;
        bool tryConvertInt64(s64 *, const ByamlData *) const;
        bool tryConvertUInt64ByKey(u64 *, const char *) const;
        bool tryConvertUInt64(u64 *, const ByamlData *) const;
        bool tryGetDoubleByKey(f64 *, const char * const) const;
        bool tryConvertDouble(f64 *, const ByamlData *) const;
        bool tryGetStringByIndex(const char **, int) const;
        bool tryGetBinaryByIndex(const u8 **, int *, int) const;
        bool tryGetBoolByIndex(bool *, int) const;
        bool tryGetIntByIndex(int *, int) const;
        bool tryGetUIntByIndex(u32 *, int) const;
        bool tryGetFloatByIndex(f32 *, int) const;
        bool tryGetInt64ByIndex(s32 *, int) const;
        bool tryGetUInt64ByIndex(u64 *, int) const;
        bool tryGetDoubleByIndex(f64 *, int) const;
        bool tryConvertIter(ByamlIter *, const ByamlData *) const;
        bool isEqualData(const ByamlIter &) const;

        union {
            const u8* mData;                // _0
            const ByamlHeader* mHeader;
        };
        
        const u8* mRootNode;               // _8
    };

    class ByamlHeader {
    public:
        u16 getTag() const;
        bool isInvertOrder() const;
        u64 getVersion() const;
        u32 getHashKeyTableOffset() const;
        u32 getStringTableOffset() const;
        u32 getDataOffset() const;
    };

    class ByamlContainerHeader {
    public:
        u32 getType() const;
        u32 getCount(bool) const;

        u32 mData;
    };

    class ByamlData {
    public:
        ByamlData();

        u8 getType() const;
        u32 getValue() const;

        u32 mValue = 0;
        u8 mType = 0;
    };

    bool tryGetByamlU8(u8 *, const ByamlIter &, const char *);
    bool tryGetByamlU16(u16 *, const ByamlIter &, const char *);
    bool tryGetByamlS16(s16 *, const ByamlIter &, const char *);
    bool tryGetByamlS32(int *, const ByamlIter &, const char *);
    bool tryGetByamlU32(u32 *, const ByamlIter *, const char *);
    bool tryGetByamlS64(s64 *, const ByamlIter &, const char *);
    bool tryGetByamlU64(u64 *, const ByamlIter &, const char *);
    bool tryGetByamlF32(f32 *, const ByamlIter &, const char *);
    bool tryGetByamlV2f(sead::Vector2f *, const ByamlIter &);
    bool tryGetByamlV3f(sead::Vector3f *, const ByamlIter &);
    bool tryGetByamlV4f(sead::Vector4f *, const ByamlIter &);
    bool tryGetByamlScale(sead::Vector3f *, const ByamlIter &);
    bool tryGetByamlV2s32(sead::Vector2i *, const ByamlIter &);
    bool tryGetByamlV3s32(sead::Vector3i *, const ByamlIter &);
    bool tryGetByamlBox3f(sead::BoundBox3f *, const ByamlIter &);
    bool tryGetByamlV3f(sead::Vector3f *, const ByamlIter &, const char *);
    bool tryGetByamlV3f(sead::Vector3f *, const ByamlIter &, const char *);
    bool tryGetByamlV4f(sead::Vector4f *, const ByamlIter &, const char *);
    bool tryGetByamlScale(sead::Vector3f *, const ByamlIter &, const char *);
    bool tryGetByamlV2s32(sead::Vector2i *, const ByamlIter &, const char *);
    bool tryGetByamlV3s32(sead::Vector3i *, const ByamlIter &, const char *);
    bool tryGetByamlBox3f(sead::BoundBox3f *, const ByamlIter &, const char *);
    bool tryGetByamlString(const char **, const ByamlIter &, const char *);
    bool tryGetByamlColor(sead::Color4f *, const ByamlIter &);
    bool tryGetByamlColor(sead::Color4f *, const ByamlIter &, const char *);
    bool tryGetByamlBool(bool *, const ByamlIter &, const char *);
    const char* getByamlKeyString(const ByamlIter &, const char *);
    int getByamlKeyInt(const ByamlIter &, const char *);
    f32 getByamlKeyFloat(const ByamlIter &, const char *);
    bool getByamlKeyBool(const ByamlIter &, const char *);
    const char* tryGetByamlKeyStringOrNULL(const ByamlIter &, const char *);
    int tryGetByamlKeyIntOrZero(const ByamlIter &, const char *);
    u32 tryGetByamlKeyU32OrZero(const ByamlIter &, const char *);
    f32 tryGetByamlKeyFloatOrZero(const ByamlIter &, const char *);
    bool tryGetByamlKeyBoolOrFalse(const ByamlIter &, const char *);
};

class alByamlLocalUtil {
public:
    static u64 getData64Bit(const u8 *, u32, bool);
};