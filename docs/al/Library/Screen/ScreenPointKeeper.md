# ScreenPointKeeper.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# ScreenPointKeeper.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al19ScreenPointDirectorC2Ev` | `al::ScreenPointDirector::ScreenPointDirector(void)` | :x: |
| `_ZN2al19ScreenPointDirector14registerTargetEPNS_17ScreenPointTargetE` | `al::ScreenPointDirector::registerTarget(al::ScreenPointTarget *)` | :x: |
| `_ZN2al19ScreenPointDirector13setCheckGroupEPNS_17ScreenPointTargetE` | `al::ScreenPointDirector::setCheckGroup(al::ScreenPointTarget *)` | :x: |
| `_ZN2al19ScreenPointDirector15hitCheckSegmentEPNS_13ScreenPointerEPN4sead8ObjArrayINS_24ScreenPointTargetHitInfoEEEiRKNS3_7Vector3IfEESB_` | `al::ScreenPointDirector::hitCheckSegment(al::ScreenPointer *,sead::ObjArray<al::ScreenPointTargetHitInfo> *,int,sead::Vector3<float> const&,sead::Vector3<float> const&)` | :x: |
| `_ZN2al19ScreenPointDirector20hitCheckScreenCircleEPNS_13ScreenPointerEPN4sead8ObjArrayINS_24ScreenPointTargetHitInfoEEEiRKNS3_7Vector2IfEEff` | `al::ScreenPointDirector::hitCheckScreenCircle(al::ScreenPointer *,sead::ObjArray<al::ScreenPointTargetHitInfo> *,int,sead::Vector2<float> const&,float,float)` | :x: |
| `_ZN2al19ScreenPointDirector20hitCheckLayoutCircleEPNS_13ScreenPointerEPN4sead8ObjArrayINS_24ScreenPointTargetHitInfoEEEiRKNS3_7Vector2IfEEffPFiPKS5_SD_E` | `al::ScreenPointDirector::hitCheckLayoutCircle(al::ScreenPointer *,sead::ObjArray<al::ScreenPointTargetHitInfo> *,int,sead::Vector2<float> const&,float,float,int (*)(al::ScreenPointTargetHitInfo const*,al::ScreenPointTargetHitInfo const*))` | :x: |
| `_ZN2al13ScreenPointerC1ERKNS_13ActorInitInfoEPKc` | `al::ScreenPointer::ScreenPointer(al::ActorInitInfo const&,char const*)` | :x: |
| `_ZN2al13ScreenPointer15hitCheckSegmentERKN4sead7Vector3IfEES5_` | `al::ScreenPointer::hitCheckSegment(sead::Vector3<float> const&,sead::Vector3<float> const&)` | :x: |
| `_ZN2al13ScreenPointer20hitCheckScreenCircleERKN4sead7Vector2IfEEff` | `al::ScreenPointer::hitCheckScreenCircle(sead::Vector2<float> const&,float,float)` | :x: |
| `_ZN2al13ScreenPointer20hitCheckLayoutCircleERKN4sead7Vector2IfEEffPFiPKNS_24ScreenPointTargetHitInfoES8_E` | `al::ScreenPointer::hitCheckLayoutCircle(sead::Vector2<float> const&,float,float,int (*)(al::ScreenPointTargetHitInfo const*,al::ScreenPointTargetHitInfo const*))` | :x: |
| `_ZN2al13ScreenPointer21recheckAndSortSegmentERKN4sead7Vector3IfEES5_` | `al::ScreenPointer::recheckAndSortSegment(sead::Vector3<float> const&,sead::Vector3<float> const&)` | :x: |
| `_ZNK2al13ScreenPointer12getHitTargetEi` | `al::ScreenPointer::getHitTarget(int)const` | :x: |
| `_ZNK2al13ScreenPointer11isHitTargetEPKNS_17ScreenPointTargetE` | `al::ScreenPointer::isHitTarget(al::ScreenPointTarget const*)const` | :x: |
| `_ZN2al24compareScreenPointTargetEPKNS_24ScreenPointTargetHitInfoES2_` | `al::compareScreenPointTarget(al::ScreenPointTargetHitInfo const*,al::ScreenPointTargetHitInfo const*)` | :x: |
| `_ZN2al40compareScreenPointTargetPriorDirectPointEPKNS_24ScreenPointTargetHitInfoES2_` | `al::compareScreenPointTargetPriorDirectPoint(al::ScreenPointTargetHitInfo const*,al::ScreenPointTargetHitInfo const*)` | :x: |
| `_ZN2al30isExistScreenPointTargetKeeperEPNS_9LiveActorE` | `al::isExistScreenPointTargetKeeper(al::LiveActor *)` | :x: |
| `_ZN2al28isScreenPointTargetArrayFullEPNS_9LiveActorE` | `al::isScreenPointTargetArrayFull(al::LiveActor *)` | :x: |
| `_ZN2al24isExistScreenPointTargetEPNS_9LiveActorEPKc` | `al::isExistScreenPointTarget(al::LiveActor *,char const*)` | :x: |
| `_ZN2al20addScreenPointTargetEPNS_9LiveActorERKNS_13ActorInitInfoEPKcfS6_RKN4sead7Vector3IfEE` | `al::addScreenPointTarget(al::LiveActor *,al::ActorInitInfo const&,char const*,float,char const*,sead::Vector3<float> const&)` | :x: |
| `_ZN2al32hitCheckSegmentScreenPointTargetEPNS_13ScreenPointerERKN4sead7Vector3IfEES6_` | `al::hitCheckSegmentScreenPointTarget(al::ScreenPointer *,sead::Vector3<float> const&,sead::Vector3<float> const&)` | :x: |
| `_ZN2al37hitCheckScreenCircleScreenPointTargetEPNS_13ScreenPointerERKN4sead7Vector2IfEEff` | `al::hitCheckScreenCircleScreenPointTarget(al::ScreenPointer *,sead::Vector2<float> const&,float,float)` | :x: |
| `_ZN2al37hitCheckLayoutCircleScreenPointTargetEPNS_13ScreenPointerERKN4sead7Vector2IfEEffPFiPKNS_24ScreenPointTargetHitInfoES9_E` | `al::hitCheckLayoutCircleScreenPointTarget(al::ScreenPointer *,sead::Vector2<float> const&,float,float,int (*)(al::ScreenPointTargetHitInfo const*,al::ScreenPointTargetHitInfo const*))` | :x: |
| `_ZN2al22isHitScreenPointTargetEPNS_13ScreenPointerEPKNS_17ScreenPointTargetE` | `al::isHitScreenPointTarget(al::ScreenPointer *,al::ScreenPointTarget const*)` | :x: |
| `_ZN2al24sendMsgScreenPointTargetERKNS_9SensorMsgEPNS_13ScreenPointerEPNS_17ScreenPointTargetE` | `al::sendMsgScreenPointTarget(al::SensorMsg const&,al::ScreenPointer *,al::ScreenPointTarget *)` | :x: |
| `_ZN2al15getHitTargetNumEPNS_13ScreenPointerE` | `al::getHitTargetNum(al::ScreenPointer *)` | :x: |
| `_ZN2al15getHitTargetPosEPNS_13ScreenPointerEi` | `al::getHitTargetPos(al::ScreenPointer *,int)` | :x: |
| `_ZN2al18getHitTargetRadiusEPNS_13ScreenPointerEi` | `al::getHitTargetRadius(al::ScreenPointer *,int)` | :x: |
| `_ZN21alScreenPointFunction20updateScreenPointAllEPN2al9LiveActorE` | `alScreenPointFunction::updateScreenPointAll(al::LiveActor *)` | :x: |
| `_ZN2al21ScreenPointCheckGroupC2Ei` | `al::ScreenPointCheckGroup::ScreenPointCheckGroup(int)` | :x: |
| `_ZN2al21ScreenPointCheckGroup8setValidEPNS_17ScreenPointTargetE` | `al::ScreenPointCheckGroup::setValid(al::ScreenPointTarget *)` | :x: |
| `_ZN2al21ScreenPointCheckGroup10setInvalidEPNS_17ScreenPointTargetE` | `al::ScreenPointCheckGroup::setInvalid(al::ScreenPointTarget *)` | :x: |
| `_ZNK2al21ScreenPointCheckGroup9getTargetEi` | `al::ScreenPointCheckGroup::getTarget(int)const` | :x: |
| `_ZN2al21ScreenPointCheckGroup9setTargetEPNS_17ScreenPointTargetE` | `al::ScreenPointCheckGroup::setTarget(al::ScreenPointTarget *)` | :x: |
| `_ZN2al17ScreenPointKeeper11isExistFileEPKNS_8ResourceEPKc` | `al::ScreenPointKeeper::isExistFile(al::Resource const*,char const*)` | :x: |
| `_ZN2al17ScreenPointKeeperC2Ev` | `al::ScreenPointKeeper::ScreenPointKeeper(void)` | :x: |
| `_ZN2al17ScreenPointKeeper10initByYamlEPNS_9LiveActorEPKNS_8ResourceERKNS_13ActorInitInfoEPKc` | `al::ScreenPointKeeper::initByYaml(al::LiveActor *,al::Resource const*,al::ActorInitInfo const&,char const*)` | :x: |
| `_ZN2al17ScreenPointKeeper9initArrayEi` | `al::ScreenPointKeeper::initArray(int)` | :x: |
| `_ZN2al17ScreenPointKeeper9addTargetEPNS_9LiveActorERKNS_13ActorInitInfoEPKcfPKN4sead7Vector3IfEES7_RSB_` | `al::ScreenPointKeeper::addTarget(al::LiveActor *,al::ActorInitInfo const&,char const*,float,sead::Vector3<float> const*,char const*,sead::Vector3<float> const&)` | :x: |
| `_ZN2al17ScreenPointKeeper6updateEv` | `al::ScreenPointKeeper::update(void)` | :x: |
| `_ZN2al17ScreenPointKeeper8validateEv` | `al::ScreenPointKeeper::validate(void)` | :x: |
| `_ZNK2al17ScreenPointKeeper9getTargetEi` | `al::ScreenPointKeeper::getTarget(int)const` | :x: |
| `_ZN2al17ScreenPointKeeper10invalidateEv` | `al::ScreenPointKeeper::invalidate(void)` | :x: |
| `_ZN2al17ScreenPointKeeper16validateBySystemEv` | `al::ScreenPointKeeper::validateBySystem(void)` | :x: |
| `_ZN2al17ScreenPointKeeper18invalidateBySystemEv` | `al::ScreenPointKeeper::invalidateBySystem(void)` | :x: |
| `_ZNK2al17ScreenPointKeeper9getTargetEPKc` | `al::ScreenPointKeeper::getTarget(char const*)const` | :x: |
| `_ZNK2al17ScreenPointKeeper13isExistTargetEPKc` | `al::ScreenPointKeeper::isExistTarget(char const*)const` | :x: |
