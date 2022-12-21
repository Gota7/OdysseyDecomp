# ExecuteAsyncExecutor.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# ExecuteAsyncExecutor.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al20ExecuteAsyncExecutorC2EPKNS_15ExecuteDirectorEPKcN4sead6CoreIdE` | `al::ExecuteAsyncExecutor::ExecuteAsyncExecutor(al::ExecuteDirector const*,char const*,sead::CoreId)` | :white_check_mark: |
| `_ZN2al20ExecuteAsyncExecutor12executeAsyncEPN4sead6ThreadEl` | `al::ExecuteAsyncExecutor::executeAsync(sead::Thread *,long)` | :white_check_mark: |
| `_ZN2al20ExecuteAsyncExecutorD0Ev` | `al::ExecuteAsyncExecutor::~ExecuteAsyncExecutor()` | :white_check_mark: |
| `_ZN2al20ExecuteAsyncExecutor12executeAsyncEv` | `al::ExecuteAsyncExecutor::executeAsync(void)` | :white_check_mark: |
| `_ZN2al20ExecuteAsyncExecutor9waitAsyncEv` | `al::ExecuteAsyncExecutor::waitAsync(void)` | :white_check_mark: |
| `_ZN2al26ExecuteAsyncExecutorUpdate7executeEv` | `al::ExecuteAsyncExecutorUpdate::execute(void)` | :white_check_mark: |
| `_ZN2al24ExecuteAsyncExecutorDraw7executeEv` | `al::ExecuteAsyncExecutorDraw::execute(void)` | :white_check_mark: |
| `_ZN2al26ExecuteAsyncExecutorUpdateD0Ev` | `al::ExecuteAsyncExecutorUpdate::~ExecuteAsyncExecutorUpdate()` | :white_check_mark: |
| `_ZN2al20ExecuteAsyncExecutorD1Ev` | `al::ExecuteAsyncExecutor::~ExecuteAsyncExecutor()` | :white_check_mark: |
| `_ZN2al24ExecuteAsyncExecutorDrawD0Ev` | `al::ExecuteAsyncExecutorDraw::~ExecuteAsyncExecutorDraw()` | :white_check_mark: |
| `_ZN4sead9Delegate2IN2al20ExecuteAsyncExecutorEPNS_6ThreadElE6invokeES4_l` | `sead::Delegate2<al::ExecuteAsyncExecutor,sead::Thread *,long>::invoke(sead::Thread *,long)` | :white_check_mark: |
| `_ZNK4sead9Delegate2IN2al20ExecuteAsyncExecutorEPNS_6ThreadElE5cloneEPNS_4HeapE` | `sead::Delegate2<al::ExecuteAsyncExecutor,sead::Thread *,long>::clone(sead::Heap *)const` | :white_check_mark: |
| `_ZN17alExecuteFunction11executeDrawEPKN2al15ExecuteDirectorEPKc` | `alExecuteFunction::executeDraw(al::ExecuteDirector const*,char const*)` | :white_check_mark: |
| `_ZN17alExecuteFunction15executeDrawListEPKN2al15ExecuteDirectorEPKcS5_` | `alExecuteFunction::executeDrawList(al::ExecuteDirector const*,char const*,char const*)` | :white_check_mark: |
| `_ZN18alExecutorFunction10isListNameERKN2al12ExecuteOrderEPKc` | `alExecutorFunction::isListName(al::ExecuteOrder const&,char const*)` | :white_check_mark: |
| `_ZN18alExecutorFunction17isUpdateListActorERKN2al12ExecuteOrderE` | `alExecutorFunction::isUpdateListActor(al::ExecuteOrder const&)` | :white_check_mark: |
| `_ZN18alExecutorFunction15isDrawListActorERKN2al12ExecuteOrderE` | `alExecutorFunction::isDrawListActor(al::ExecuteOrder const&)` | :white_check_mark: |
| `_ZN18alExecutorFunction20isDrawListActorModelERKN2al12ExecuteOrderE` | `alExecutorFunction::isDrawListActorModel(al::ExecuteOrder const&)` | :white_check_mark: |
| `_ZN18alExecutorFunction16isDrawListLayoutERKN2al12ExecuteOrderE` | `alExecutorFunction::isDrawListLayout(al::ExecuteOrder const&)` | :white_check_mark: |
| `_ZN18alExecutorFunction22calcExecutorListNumMaxEPKN2al12ExecuteOrderEiPKc` | `alExecutorFunction::calcExecutorListNumMax(al::ExecuteOrder const*,int,char const*)` | :white_check_mark: |
| `_ZN18alExecutorFunction25calcUpdateListActorNumMaxEPKN2al12ExecuteOrderEi` | `alExecutorFunction::calcUpdateListActorNumMax(al::ExecuteOrder const*,int)` | :white_check_mark: |
| `_ZN18alExecutorFunction23calcDrawListActorNumMaxEPKN2al12ExecuteOrderEi` | `alExecutorFunction::calcDrawListActorNumMax(al::ExecuteOrder const*,int)` | :white_check_mark: |
| `_ZN18alExecutorFunction28calcDrawListActorModelNumMaxEPKN2al12ExecuteOrderEi` | `alExecutorFunction::calcDrawListActorModelNumMax(al::ExecuteOrder const*,int)` | :white_check_mark: |
| `_ZN18alExecutorFunction24calcDrawListLayoutNumMaxEPKN2al12ExecuteOrderEi` | `alExecutorFunction::calcDrawListLayoutNumMax(al::ExecuteOrder const*,int)` | :white_check_mark: |
