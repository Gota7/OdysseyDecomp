# AsyncFunctorThread.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# AsyncFunctorThread.o
| Symbol (Demangled) | Symbol (Mangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al18AsyncFunctorThreadC1ERKN4sead14SafeStringBaseIcEERKNS_11FunctorBaseEiiNS1_6CoreIdE` | `al::AsyncFunctorThread::AsyncFunctorThread(sead::SafeStringBase<char> const&,al::FunctorBase const&,int,int,sead::CoreId)` | :white_check_mark: |
| `_ZN2al18AsyncFunctorThread14threadFunctionEPN4sead6ThreadEl` | `al::AsyncFunctorThread::threadFunction(sead::Thread *,long)` | :white_check_mark: |
| `_ZN2al18AsyncFunctorThreadD2Ev` | `al::AsyncFunctorThread::~AsyncFunctorThread()` | :white_check_mark: |
| `_ZN2al18AsyncFunctorThreadD0Ev` | `al::AsyncFunctorThread::~AsyncFunctorThread()` | :white_check_mark: |
| `_ZN2al18AsyncFunctorThread5startEv` | `al::AsyncFunctorThread::start(void)` | :white_check_mark: |
| `_ZNK2al18AsyncFunctorThread6isDoneEv` | `al::AsyncFunctorThread::isDone(void)const` | :white_check_mark: |
| `_ZN4sead9Delegate2IN2al18AsyncFunctorThreadEPNS_6ThreadElE6invokeES4_l` | `sead::Delegate2<al::AsyncFunctorThread,sead::Thread *,long>::invoke(sead::Thread *,long)` | :white_check_mark: |
| `_ZNK4sead9Delegate2IN2al18AsyncFunctorThreadEPNS_6ThreadElE5cloneEPNS_4HeapE` | `sead::Delegate2<al::AsyncFunctorThread,sead::Thread *,long>::clone(sead::Heap *)const` | :white_check_mark: |
| `_ZN2al30createAndStartInitializeThreadEPN4sead4HeapEiRKNS_11FunctorBaseE` | `al::createAndStartInitializeThread(sead::Heap *,int,al::FunctorBase const&)` | :white_check_mark: |
| `_ZN2al37tryWaitDoneAndDestroyInitializeThreadEPNS_16InitializeThreadE` | `al::tryWaitDoneAndDestroyInitializeThread(al::InitializeThread *)` | :white_check_mark: |
| `_ZN2al16getCurrentCoreIdEv` | `al::getCurrentCoreId(void)` | :white_check_mark: |
