# AsyncFunctorThread.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# AsyncFunctorThread.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al18AsyncFunctorThreadC1ERKN4sead14SafeStringBaseIcEERKNS_11FunctorBaseEiiNS1_6CoreIdE` | `al::AsyncFunctorThread::AsyncFunctorThread(sead::SafeStringBase<char> const&,al::FunctorBase const&,int,int,sead::CoreId)` | :x: |
| `_ZN2al18AsyncFunctorThread14threadFunctionEPN4sead6ThreadEl` | `al::AsyncFunctorThread::threadFunction(sead::Thread *,long)` | :x: |
| `_ZN2al18AsyncFunctorThreadD2Ev` | `al::AsyncFunctorThread::~AsyncFunctorThread()` | :x: |
| `_ZN2al18AsyncFunctorThreadD0Ev` | `al::AsyncFunctorThread::~AsyncFunctorThread()` | :x: |
| `_ZN2al18AsyncFunctorThread5startEv` | `al::AsyncFunctorThread::start(void)` | :x: |
| `_ZNK2al18AsyncFunctorThread6isDoneEv` | `al::AsyncFunctorThread::isDone(void)const` | :x: |
| `_ZN4sead9Delegate2IN2al18AsyncFunctorThreadEPNS_6ThreadElE6invokeES4_l` | `sead::Delegate2<al::AsyncFunctorThread,sead::Thread *,long>::invoke(sead::Thread *,long)` | :x: |
| `_ZNK4sead9Delegate2IN2al18AsyncFunctorThreadEPNS_6ThreadElE5cloneEPNS_4HeapE` | `sead::Delegate2<al::AsyncFunctorThread,sead::Thread *,long>::clone(sead::Heap *)const` | :x: |
| `_ZN2al30createAndStartInitializeThreadEPN4sead4HeapEiRKNS_11FunctorBaseE` | `al::createAndStartInitializeThread(sead::Heap *,int,al::FunctorBase const&)` | :x: |
| `_ZN2al37tryWaitDoneAndDestroyInitializeThreadEPNS_16InitializeThreadE` | `al::tryWaitDoneAndDestroyInitializeThread(al::InitializeThread *)` | :x: |
| `_ZN2al16getCurrentCoreIdEv` | `al::getCurrentCoreId(void)` | :x: |
