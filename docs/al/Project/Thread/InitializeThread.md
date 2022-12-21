# InitializeThread.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# InitializeThread.o
| Symbol (Demangled) | Symbol (Mangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al16InitializeThreadC2ERKN4sead14SafeStringBaseIcEERKNS_11FunctorBaseEPNS1_4HeapEii` | `al::InitializeThread::InitializeThread(sead::SafeStringBase<char> const&,al::FunctorBase const&,sead::Heap *,int,int)` | :white_check_mark: |
| `_ZN2al16InitializeThread14threadFunctionEPN4sead6ThreadEl` | `al::InitializeThread::threadFunction(sead::Thread *,long)` | :white_check_mark: |
| `_ZN2al16InitializeThread5startEv` | `al::InitializeThread::start(void)` | :white_check_mark: |
| `_ZN2al16InitializeThread21tryWaitDoneAndDestroyEv` | `al::InitializeThread::tryWaitDoneAndDestroy(void)` | :white_check_mark: |
| `_ZN4sead9Delegate2IN2al16InitializeThreadEPNS_6ThreadElE6invokeES4_l` | `sead::Delegate2<al::InitializeThread,sead::Thread *,long>::invoke(sead::Thread *,long)` | :white_check_mark: |
| `_ZNK4sead9Delegate2IN2al16InitializeThreadEPNS_6ThreadElE5cloneEPNS_4HeapE` | `sead::Delegate2<al::InitializeThread,sead::Thread *,long>::clone(sead::Heap *)const` | :white_check_mark: |
