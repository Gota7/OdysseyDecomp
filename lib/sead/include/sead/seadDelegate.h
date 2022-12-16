#pragma once

namespace sead {
    class Heap;

    class IDelegate {
    public:
        virtual void invoke() = 0;
        virtual IDelegate* clone(sead::Heap *) const = 0;

        void operator()() {
            invoke();
        }
    };

    template<typename Arg>
    class IDelegate1 {
    public:
        virtual void invoke(Arg arg) = 0;
        virtual IDelegate1* clone(sead::Heap *) const = 0;

        void operator()(Arg arg) {
            invoke(arg);
        }
    };

    template<typename Arg1, typename Arg2>
    class IDelegate2 {
    public:
        virtual void invoke(Arg1 arg1, Arg2 arg2) = 0;
        virtual IDelegate2* clone(sead::Heap *) const = 0;

        void operator()(Arg1 arg1, Arg2 arg2) {
            invoke(arg1, arg2);
        }
    };

    template<typename Arg1, typename Arg2, typename Return>
    class IDelegate2R {
    public:
        virtual Return invoke(Arg1 arg1, Arg2 arg2) = 0;
        virtual IDelegate2R* clone(sead::Heap *) const = 0;

        Return operator()(Arg1 arg1, Arg2 arg2) {
            return invoke(arg1, arg2);
        }
    };

    template<typename T, typename PTMF, typename BaseClass>
    class DelegateBase : BaseClass {
    public:
        DelegateBase() = default;

        DelegateBase(T *pInstance, PTMF func) {
            mInstance = pInstance;
            mFuncPtr = func;
        }

        T* mInstance = nullptr;     //  _0
        PTMF mFuncPtr = nullptr;    // _8
    };

    template<typename T>
    class Delegate : public DelegateBase<T, void(T::*)(), IDelegate> {
    public:
        void invoke() {
            operator()();
        }

        void operator()() const {
            if (mInstance != nullptr && mFuncPtr != nullptr) {
                return (mInstance->*(mFuncPtr))();
            }
        }
    };

    template<typename T, typename Arg>
    class Delegate1 : public DelegateBase<T, void (T::*)(Arg), IDelegate1<Arg>> {
    public:
        void invoke(Arg arg) {
            operator()(arg);
        }

        void operator()(Arg arg) const {
            if (mInstance != nullptr && mFuncPtr != nullptr) {
                return mInstance->*(mFuncPtr))(arg);
            }
        }
    };
};