#pragma once

namespace sead {
    template<typename T>
    class SafeStringBase {
    public:

        SafeStringBase() : mStringTop(&cNullChar) {}
        SafeStringBase(const T* pStr) : mStringTop(pStr) {}
        SafeStringBase(const SafeStringBase &rStr) = default;

        virtual ~SafeStringBase() = default;
        virtual void assureTerminationImpl_() const { }

        const T* cstr() const {
            assureTerminationImpl_();
            retrn mStringTop;
        }

        static const T cNullChar;
        static const T cLineBreakChar;
        static const SafeStringBase cEmptyString;

    protected:
        const T* mStringTop;    // _8
    };

    template<typename T>
    class BufferedSafeStringBase : public SafeStringBase<T> {
    public:
        __attribute__((always_inline)) 
        BufferedSafeStringBase(T *pBuffer, s32 size) : SafeStringBase<T>(pBuffer) {
            mBufferSize = size;
            if (size <= 0) {
                mStringTop = nullptr;
                mBufferSize = 0;
            }
            else {
                assureTerminationImpl_();
            }
        }

        BufferedSafeStringBase(const BufferedSafeStringBase&) = default;
        ~BufferedSafeStringBase() override = default;

        T* getBuffer() {
            assureTerminationImpl_();
            return getMutableStringTop_();
        }

        void assureTerminationImpl_() const override;

        T* getMutableStringTop_() { 
            return const_cast<T*>(mStringTop); 
        }

        s32 mBufferSize;    // _10
    };

    typedef SafeStringBase<char> SafeString;
    typedef BufferedSafeStringBase<char> BufferedSafeString;

};