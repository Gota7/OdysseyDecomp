# System.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# System.o
| Symbol (Demangled) | Symbol (Mangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al16AudioSystemDebugC2Ev` | `al::AudioSystemDebug::AudioSystemDebug(void)` | :white_check_mark: |
| `_ZN2al16AudioSystemDebug6updateEv` | `al::AudioSystemDebug::update(void)` | :white_check_mark: |
| `_ZNK2al16AudioSystemDebug4drawEv` | `al::AudioSystemDebug::draw(void)const` | :white_check_mark: |
| `_ZN2al19AudioEffectDataBase6createEPKcS2_` | `al::AudioEffectDataBase::create(char const*,char const*)` | :white_check_mark: |
| `_ZN2al19AudioEffectDataBaseC1EPNS_8ResourceEPKc` | `al::AudioEffectDataBase::AudioEffectDataBase(al::Resource *,char const*)` | :white_check_mark: |
| `_ZN2al19createAudioInfoListINS_19AudioBusSettingInfoEEEPNS_22AudioInfoListWithPartsIT_EERKNS_9ByamlIterEi` | `al::AudioInfoListWithParts<al::AudioBusSettingInfo> * al::createAudioInfoList<al::AudioBusSettingInfo>(al::ByamlIter const&,int)` | :white_check_mark: |
| `_ZN2al19createAudioInfoListINS_15AudioEffectInfoEEEPNS_22AudioInfoListWithPartsIT_EERKNS_9ByamlIterEi` | `al::AudioInfoListWithParts<al::AudioEffectInfo> * al::createAudioInfoList<al::AudioEffectInfo>(al::ByamlIter const&,int)` | :white_check_mark: |
| `_ZN2al26AudioInfoListCreateFunctorINS_19AudioBusSettingInfoEE30tryCreateAudioInfoAndSetToListERKNS_9ByamlIterE` | `al::AudioInfoListCreateFunctor<al::AudioBusSettingInfo>::tryCreateAudioInfoAndSetToList(al::ByamlIter const&)` | :white_check_mark: |
| `_ZN2al26AudioInfoListCreateFunctorINS_15AudioEffectInfoEE30tryCreateAudioInfoAndSetToListERKNS_9ByamlIterE` | `al::AudioInfoListCreateFunctor<al::AudioEffectInfo>::tryCreateAudioInfoAndSetToList(al::ByamlIter const&)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction9isMainBusEPKc` | `alAudioEffectFunction::isMainBus(char const*)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction8getBusIdEPKc` | `alAudioEffectFunction::getBusId(char const*)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction17getBusIdFromIndexEi` | `alAudioEffectFunction::getBusIdFromIndex(int)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction11getBusIndexEPKc` | `alAudioEffectFunction::getBusIndex(char const*)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction17getBusIndexFromIdEN2nn3atk6AuxBusE` | `alAudioEffectFunction::getBusIndexFromId(nn::atk::AuxBus)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction19getBusNameFromIndexEi` | `alAudioEffectFunction::getBusNameFromIndex(int)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction16getBusNameFromIdEN2nn3atk6AuxBusE` | `alAudioEffectFunction::getBusNameFromId(nn::atk::AuxBus)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction14getOutDeviceIdEPKc` | `alAudioEffectFunction::getOutDeviceId(char const*)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction23getOutDeviceIdFromIndexEi` | `alAudioEffectFunction::getOutDeviceIdFromIndex(int)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction17getOutDeviceIndexEPKc` | `alAudioEffectFunction::getOutDeviceIndex(char const*)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction25getOutDeviceNameFromIndexEi` | `alAudioEffectFunction::getOutDeviceNameFromIndex(int)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction22getOutDeviceNameFromIdEN2nn3atk12OutputDeviceE` | `alAudioEffectFunction::getOutDeviceNameFromId(nn::atk::OutputDevice)` | :white_check_mark: |
| `_ZN21alAudioEffectFunction14getSubMixIndexEPKN2al19AudioBusSettingInfoEPKNS0_23AudioSubMixInfoAccessorE` | `alAudioEffectFunction::getSubMixIndex(al::AudioBusSettingInfo const*,al::AudioSubMixInfoAccessor const*)` | :white_check_mark: |
| `_ZN2al27AudioRequestKeeperSyncedBgmC2Ev` | `al::AudioRequestKeeperSyncedBgm::AudioRequestKeeperSyncedBgm(void)` | :white_check_mark: |
| `_ZN2al27AudioRequestKeeperSyncedBgm4initEPKNS_13AudioDirectorE` | `al::AudioRequestKeeperSyncedBgm::init(al::AudioDirector const*)` | :white_check_mark: |
| `_ZN2al27AudioRequestKeeperSyncedBgm6updateEv` | `al::AudioRequestKeeperSyncedBgm::update(void)` | :white_check_mark: |
| `_ZN2al27AudioRequestKeeperSyncedBgm10requestBgmENS_14BgmPlayingTypeERKNS_17BgmPlayingRequestEi` | `al::AudioRequestKeeperSyncedBgm::requestBgm(al::BgmPlayingType,al::BgmPlayingRequest const&,int)` | :white_check_mark: |
| `_ZNK2al27AudioRequestKeeperSyncedBgm14getAudioKeeperEv` | `al::AudioRequestKeeperSyncedBgm::getAudioKeeper(void)const` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMultiC2Ev` | `alsd::AudioPlayerMulti::AudioPlayerMulti(void)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMultiD2Ev` | `alsd::AudioPlayerMulti::~AudioPlayerMulti()` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti7stopAllEi` | `alsd::AudioPlayerMulti::stopAll(int)` | :white_check_mark: |
| `_ZThn8_N4alsd16AudioPlayerMultiD1Ev` | ``non-virtual thunk to'alsd::AudioPlayerMulti::~AudioPlayerMulti()` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMultiD0Ev` | `alsd::AudioPlayerMulti::~AudioPlayerMulti()` | :white_check_mark: |
| `_ZThn8_N4alsd16AudioPlayerMultiD0Ev` | ``non-virtual thunk to'alsd::AudioPlayerMulti::~AudioPlayerMulti()` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti10initializeEv` | `alsd::AudioPlayerMulti::initialize(void)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti8finalizeEv` | `alsd::AudioPlayerMulti::finalize(void)` | :white_check_mark: |
| `_ZNK4alsd16AudioPlayerMulti12isNwEnabled_Ev` | `alsd::AudioPlayerMulti::isNwEnabled_(void)const` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti16destroySoundHeapEv` | `alsd::AudioPlayerMulti::destroySoundHeap(void)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti22shutdownDataManagementEv` | `alsd::AudioPlayerMulti::shutdownDataManagement(void)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti4calcEv` | `alsd::AudioPlayerMulti::calc(void)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti10startSoundEPNS_11SoundHandleEj` | `alsd::AudioPlayerMulti::startSound(alsd::SoundHandle *,unsigned int)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti10startSoundEPNS_11SoundHandleEPKc` | `alsd::AudioPlayerMulti::startSound(alsd::SoundHandle *,char const*)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti9holdSoundEPNS_11SoundHandleEj` | `alsd::AudioPlayerMulti::holdSound(alsd::SoundHandle *,unsigned int)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti9holdSoundEPNS_11SoundHandleEPKc` | `alsd::AudioPlayerMulti::holdSound(alsd::SoundHandle *,char const*)` | :white_check_mark: |
| `_ZNK4alsd16AudioPlayerMulti13getSoundCountEv` | `alsd::AudioPlayerMulti::getSoundCount(void)const` | :white_check_mark: |
| `_ZNK4alsd16AudioPlayerMulti12getSoundNameEj` | `alsd::AudioPlayerMulti::getSoundName(unsigned int)const` | :white_check_mark: |
| `_ZNK4alsd16AudioPlayerMulti10getSoundIdEPKc` | `alsd::AudioPlayerMulti::getSoundId(char const*)const` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti8pauseAllEi` | `alsd::AudioPlayerMulti::pauseAll(int)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti12setPauseAll_Eib` | `alsd::AudioPlayerMulti::setPauseAll_(int,bool)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti10unpauseAllEi` | `alsd::AudioPlayerMulti::unpauseAll(int)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti17detail_SetupSoundEPN2nn3atk11SoundHandleEjbPKcPKNS2_14SoundStartable9StartInfoE` | `alsd::AudioPlayerMulti::detail_SetupSound(nn::atk::SoundHandle *,unsigned int,bool,char const*,nn::atk::SoundStartable::StartInfo const*)` | :white_check_mark: |
| `_ZThn8_N4alsd16AudioPlayerMulti17detail_SetupSoundEPN2nn3atk11SoundHandleEjbPKcPKNS2_14SoundStartable9StartInfoE` | ``non-virtual thunk to'alsd::AudioPlayerMulti::detail_SetupSound(nn::atk::SoundHandle *,unsigned int,bool,char const*,nn::atk::SoundStartable::StartInfo const*)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti15createSoundHeapEmPN4sead4HeapE` | `alsd::AudioPlayerMulti::createSoundHeap(unsigned long,sead::Heap *)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti19setupDataManagementEjjjPN4sead4HeapEi` | `alsd::AudioPlayerMulti::setupDataManagement(unsigned int,unsigned int,unsigned int,sead::Heap *,int)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti25setupDataManagementInner_ERKN2nn3atk12SoundArchiveEjjjPN4sead4HeapEi` | `alsd::AudioPlayerMulti::setupDataManagementInner_(nn::atk::SoundArchive const&,unsigned int,unsigned int,unsigned int,sead::Heap *,int)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti19setupDataManagementERKNS0_24DataManagementSetupParamE` | `alsd::AudioPlayerMulti::setupDataManagement(alsd::AudioPlayerMulti::DataManagementSetupParam const&)` | :white_check_mark: |
| `_ZNK4alsd16AudioPlayerMulti36isPlayerBufferCrossingMemoryBoundaryEv` | `alsd::AudioPlayerMulti::isPlayerBufferCrossingMemoryBoundary(void)const` | :white_check_mark: |
| `_ZNK4alsd16AudioPlayerMulti36isStreamBufferCrossingMemoryBoundaryEv` | `alsd::AudioPlayerMulti::isStreamBufferCrossingMemoryBoundary(void)const` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti10genMessageEPN4sead6hostio7ContextE` | `alsd::AudioPlayerMulti::genMessage(sead::hostio::Context *)` | :white_check_mark: |
| `_ZN4alsd16AudioPlayerMulti19listenPropertyEventEPKN4sead6hostio13PropertyEventE` | `alsd::AudioPlayerMulti::listenPropertyEvent(sead::hostio::PropertyEvent const*)` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafeC2EPN4sead4HeapE` | `alsd::AudioFsSoundArchiveCafe::AudioFsSoundArchiveCafe(sead::Heap *)` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafeD2Ev` | `alsd::AudioFsSoundArchiveCafe::~AudioFsSoundArchiveCafe()` | :white_check_mark: |
| `_ZThn16_N4alsd23AudioFsSoundArchiveCafeD1Ev` | ``non-virtual thunk to'alsd::AudioFsSoundArchiveCafe::~AudioFsSoundArchiveCafe()` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafeD0Ev` | `alsd::AudioFsSoundArchiveCafe::~AudioFsSoundArchiveCafe()` | :white_check_mark: |
| `_ZThn16_N4alsd23AudioFsSoundArchiveCafeD0Ev` | ``non-virtual thunk to'alsd::AudioFsSoundArchiveCafe::~AudioFsSoundArchiveCafe()` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafe4openEPKv` | `alsd::AudioFsSoundArchiveCafe::open(void const*)` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafe5closeEv` | `alsd::AudioFsSoundArchiveCafe::close(void)` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafe18setLoadLabelStringEb` | `alsd::AudioFsSoundArchiveCafe::setLoadLabelString(bool)` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafe18setContentRootPathEPKc` | `alsd::AudioFsSoundArchiveCafe::setContentRootPath(char const*)` | :white_check_mark: |
| `_ZN4alsd23AudioFsSoundArchiveCafe23setFileAccessInFunctionEb` | `alsd::AudioFsSoundArchiveCafe::setFileAccessInFunction(bool)` | :white_check_mark: |
| `_ZN4alsd27AudioMemorySoundArchiveCafeC1EPN4sead4HeapE` | `alsd::AudioMemorySoundArchiveCafe::AudioMemorySoundArchiveCafe(sead::Heap *)` | :white_check_mark: |
| `_ZN4alsd27AudioMemorySoundArchiveCafeD2Ev` | `alsd::AudioMemorySoundArchiveCafe::~AudioMemorySoundArchiveCafe()` | :white_check_mark: |
| `_ZThn16_N4alsd27AudioMemorySoundArchiveCafeD1Ev` | ``non-virtual thunk to'alsd::AudioMemorySoundArchiveCafe::~AudioMemorySoundArchiveCafe()` | :white_check_mark: |
| `_ZN4alsd27AudioMemorySoundArchiveCafeD0Ev` | `alsd::AudioMemorySoundArchiveCafe::~AudioMemorySoundArchiveCafe()` | :white_check_mark: |
| `_ZThn16_N4alsd27AudioMemorySoundArchiveCafeD0Ev` | ``non-virtual thunk to'alsd::AudioMemorySoundArchiveCafe::~AudioMemorySoundArchiveCafe()` | :white_check_mark: |
| `_ZN4alsd27AudioMemorySoundArchiveCafe4openEPKv` | `alsd::AudioMemorySoundArchiveCafe::open(void const*)` | :white_check_mark: |
| `_ZN4alsd27AudioMemorySoundArchiveCafe5closeEv` | `alsd::AudioMemorySoundArchiveCafe::close(void)` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMultiC2Ev` | `alsd::AudioSoundDataMgrMulti::AudioSoundDataMgrMulti(void)` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMultiD2Ev` | `alsd::AudioSoundDataMgrMulti::~AudioSoundDataMgrMulti()` | :white_check_mark: |
| `_ZThn24_N4alsd22AudioSoundDataMgrMultiD1Ev` | ``non-virtual thunk to'alsd::AudioSoundDataMgrMulti::~AudioSoundDataMgrMulti()` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMultiD0Ev` | `alsd::AudioSoundDataMgrMulti::~AudioSoundDataMgrMulti()` | :white_check_mark: |
| `_ZThn24_N4alsd22AudioSoundDataMgrMultiD0Ev` | ``non-virtual thunk to'alsd::AudioSoundDataMgrMulti::~AudioSoundDataMgrMulti()` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti16connectSoundHeapEPNS_19AudioSoundHeapMultiE` | `alsd::AudioSoundDataMgrMulti::connectSoundHeap(alsd::AudioSoundHeapMulti *)` | :white_check_mark: |
| `_ZNK4alsd22AudioSoundDataMgrMulti12isNwEnabled_Ev` | `alsd::AudioSoundDataMgrMulti::isNwEnabled_(void)const` | :white_check_mark: |
| `_ZNK4alsd22AudioSoundDataMgrMulti15getSoundArchiveEv` | `alsd::AudioSoundDataMgrMulti::getSoundArchive(void)const` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti18setContentRootPathEPKc` | `alsd::AudioSoundDataMgrMulti::setContentRootPath(char const*)` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti23mountSoundArchiveFromFsERKN4sead14SafeStringBaseIcEEPNS1_4HeapEbb` | `alsd::AudioSoundDataMgrMulti::mountSoundArchiveFromFs(sead::SafeStringBase<char> const&,sead::Heap *,bool,bool)` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti13setupManager_EPN4sead4HeapE` | `alsd::AudioSoundDataMgrMulti::setupManager_(sead::Heap *)` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti27mountSoundArchiveFromMemoryEPKvPN4sead4HeapE` | `alsd::AudioSoundDataMgrMulti::mountSoundArchiveFromMemory(void const*,sead::Heap *)` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti19unmountSoundArchiveEv` | `alsd::AudioSoundDataMgrMulti::unmountSoundArchive(void)` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti8loadDataEjjjPNS_19AudioSoundHeapMultiE` | `alsd::AudioSoundDataMgrMulti::loadData(unsigned int,unsigned int,unsigned int,alsd::AudioSoundHeapMulti *)` | :white_check_mark: |
| `_ZNK4alsd22AudioSoundDataMgrMulti36tryGetDefaultSoundHeapAndCheckReady_EPPNS_19AudioSoundHeapMultiE` | `alsd::AudioSoundDataMgrMulti::tryGetDefaultSoundHeapAndCheckReady_(alsd::AudioSoundHeapMulti **)const` | :white_check_mark: |
| `_ZN4alsd22AudioSoundDataMgrMulti8loadDataEPKcjjPNS_19AudioSoundHeapMultiE` | `alsd::AudioSoundDataMgrMulti::loadData(char const*,unsigned int,unsigned int,alsd::AudioSoundHeapMulti *)` | :white_check_mark: |
| `_ZNK4alsd23AudioFsSoundArchiveCafe27checkDerivedRuntimeTypeInfoEPKN4sead15RuntimeTypeInfo9InterfaceE` | `alsd::AudioFsSoundArchiveCafe::checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const` | :white_check_mark: |
| `_ZNK4alsd23AudioFsSoundArchiveCafe18getRuntimeTypeInfoEv` | `alsd::AudioFsSoundArchiveCafe::getRuntimeTypeInfo(void)const` | :white_check_mark: |
| `_ZNK2nn3atk14FsSoundArchive21detail_GetFileAddressEj` | `nn::atk::FsSoundArchive::detail_GetFileAddress(unsigned int)const` | :white_check_mark: |
| `_ZNK2nn3atk12SoundArchive7IsAddonEv` | `nn::atk::SoundArchive::IsAddon(void)const` | :white_check_mark: |
| `_ZNK4alsd27AudioMemorySoundArchiveCafe27checkDerivedRuntimeTypeInfoEPKN4sead15RuntimeTypeInfo9InterfaceE` | `alsd::AudioMemorySoundArchiveCafe::checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const` | :white_check_mark: |
| `_ZNK4alsd27AudioMemorySoundArchiveCafe18getRuntimeTypeInfoEv` | `alsd::AudioMemorySoundArchiveCafe::getRuntimeTypeInfo(void)const` | :white_check_mark: |
| `_ZNK4alsd25AudioSoundArchiveBaseCafe27checkDerivedRuntimeTypeInfoEPKN4sead15RuntimeTypeInfo9InterfaceE` | `alsd::AudioSoundArchiveBaseCafe::checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const` | :white_check_mark: |
| `_ZNK4alsd25AudioSoundArchiveBaseCafe18getRuntimeTypeInfoEv` | `alsd::AudioSoundArchiveBaseCafe::getRuntimeTypeInfo(void)const` | :white_check_mark: |
| `_ZN4alsd25AudioSoundArchiveBaseCafeD2Ev` | `alsd::AudioSoundArchiveBaseCafe::~AudioSoundArchiveBaseCafe()` | :white_check_mark: |
| `_ZN4alsd25AudioSoundArchiveBaseCafeD0Ev` | `alsd::AudioSoundArchiveBaseCafe::~AudioSoundArchiveBaseCafe()` | :white_check_mark: |
| `_ZNK4sead15RuntimeTypeInfo6DeriveIN4alsd25AudioSoundArchiveBaseCafeEE9isDerivedEPKNS0_9InterfaceE` | `sead::RuntimeTypeInfo::Derive<alsd::AudioSoundArchiveBaseCafe>::isDerived(sead::RuntimeTypeInfo::Interface const*)const` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMultiC2EmPN4sead4HeapE` | `alsd::AudioSoundHeapMulti::AudioSoundHeapMulti(unsigned long,sead::Heap *)` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMulti7create_EmPN4sead4HeapE` | `alsd::AudioSoundHeapMulti::create_(unsigned long,sead::Heap *)` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMultiD2Ev` | `alsd::AudioSoundHeapMulti::~AudioSoundHeapMulti()` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMultiD0Ev` | `alsd::AudioSoundHeapMulti::~AudioSoundHeapMulti()` | :white_check_mark: |
| `_ZNK4alsd19AudioSoundHeapMulti24isCrossingMemoryBoundaryEv` | `alsd::AudioSoundHeapMulti::isCrossingMemoryBoundary(void)const` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMulti22setSoundDataManagementERN2nn3atk16SoundDataManagerERNS2_12SoundArchiveE` | `alsd::AudioSoundHeapMulti::setSoundDataManagement(nn::atk::SoundDataManager &,nn::atk::SoundArchive &)` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMulti10genMessageEPN4sead6hostio7ContextE` | `alsd::AudioSoundHeapMulti::genMessage(sead::hostio::Context *)` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMulti19listenPropertyEventEPKN4sead6hostio13PropertyEventE` | `alsd::AudioSoundHeapMulti::listenPropertyEvent(sead::hostio::PropertyEvent const*)` | :white_check_mark: |
| `_ZN4alsd19AudioSoundHeapMulti4dumpEv` | `alsd::AudioSoundHeapMulti::dump(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNinC2Ev` | `alsd::AudioSystemNin::AudioSystemNin(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin10initializeEv` | `alsd::AudioSystemNin::initialize(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin15initializeMain_Ev` | `alsd::AudioSystemNin::initializeMain_(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin8finalizeEv` | `alsd::AudioSystemNin::finalize(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin13finalizeMain_Ev` | `alsd::AudioSystemNin::finalizeMain_(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin20setCommandBufferSizeEii` | `alsd::AudioSystemNin::setCommandBufferSize(int,int)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin14initializeSdk_Ev` | `alsd::AudioSystemNin::initializeSdk_(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin12finalizeSdk_Ev` | `alsd::AudioSystemNin::finalizeSdk_(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin13initializeNw_Ev` | `alsd::AudioSystemNin::initializeNw_(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin24appendSoundFrameCallbackERNS_19ISoundFrameCallbackE` | `alsd::AudioSystemNin::appendSoundFrameCallback(alsd::ISoundFrameCallback &)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin19soundFrameCallback_Em` | `alsd::AudioSystemNin::soundFrameCallback_(unsigned long)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin24removeSoundFrameCallbackERNS_19ISoundFrameCallbackE` | `alsd::AudioSystemNin::removeSoundFrameCallback(alsd::ISoundFrameCallback &)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin23clearSoundFrameCallbackEv` | `alsd::AudioSystemNin::clearSoundFrameCallback(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin15soundFrameProc_Ev` | `alsd::AudioSystemNin::soundFrameProc_(void)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin10genMessageEPN4sead6hostio7ContextE` | `alsd::AudioSystemNin::genMessage(sead::hostio::Context *)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin19listenPropertyEventEPKN4sead6hostio13PropertyEventE` | `alsd::AudioSystemNin::listenPropertyEvent(sead::hostio::PropertyEvent const*)` | :white_check_mark: |
| `_ZNK4alsd11AudioSystem27checkDerivedRuntimeTypeInfoEPKN4sead15RuntimeTypeInfo9InterfaceE` | `alsd::AudioSystem::checkDerivedRuntimeTypeInfo(sead::RuntimeTypeInfo::Interface const*)const` | :white_check_mark: |
| `_ZNK4alsd11AudioSystem18getRuntimeTypeInfoEv` | `alsd::AudioSystem::getRuntimeTypeInfo(void)const` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNinD2Ev` | `alsd::AudioSystemNin::~AudioSystemNin()` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNinD0Ev` | `alsd::AudioSystemNin::~AudioSystemNin()` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin13setOutputModeENS_11AudioGlobal10OutputModeE` | `alsd::AudioSystemNin::setOutputMode(alsd::AudioGlobal::OutputMode)` | :white_check_mark: |
| `_ZNK4alsd14AudioSystemNin13getOutputModeEv` | `alsd::AudioSystemNin::getOutputMode(void)const` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin12appendEffectENS_11AudioGlobal6AuxBusEPNS_7AudioFxE` | `alsd::AudioSystemNin::appendEffect(alsd::AudioGlobal::AuxBus,alsd::AudioFx *)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin14appendFxObjectENS_11AudioGlobal6AuxBusEPNS_13AudioFxObjectE` | `alsd::AudioSystemNin::appendFxObject(alsd::AudioGlobal::AuxBus,alsd::AudioFxObject *)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin11clearEffectENS_11AudioGlobal6AuxBusEi` | `alsd::AudioSystemNin::clearEffect(alsd::AudioGlobal::AuxBus,int)` | :white_check_mark: |
| `_ZN4alsd14AudioSystemNin21isFinishedClearEffectENS_11AudioGlobal6AuxBusE` | `alsd::AudioSystemNin::isFinishedClearEffect(alsd::AudioGlobal::AuxBus)` | :white_check_mark: |
| `_ZN4alsd11SoundHandle4stopEi` | `alsd::SoundHandle::stop(int)` | :white_check_mark: |
| `_ZN4alsd11SoundHandle5pauseEi` | `alsd::SoundHandle::pause(int)` | :white_check_mark: |
| `_ZN4alsd11SoundHandle7unpauseEi` | `alsd::SoundHandle::unpause(int)` | :white_check_mark: |
| `_ZN4alsd11SoundHandle9setVolumeEfi` | `alsd::SoundHandle::setVolume(float,int)` | :white_check_mark: |
| `_ZN4alsd11SoundHandle8setPitchEf` | `alsd::SoundHandle::setPitch(float)` | :white_check_mark: |
| `_ZN4alsd11SoundHandle6setPanEf` | `alsd::SoundHandle::setPan(float)` | :white_check_mark: |
| `_ZNK4alsd11SoundHandle15isAttachedSoundEv` | `alsd::SoundHandle::isAttachedSound(void)const` | :white_check_mark: |
| `_ZNK4alsd11SoundHandle10getSoundIdEv` | `alsd::SoundHandle::getSoundId(void)const` | :white_check_mark: |
| `_ZN23alAudioInfoListFunction26getCreateAudioInfoListSizeERKN2al9ByamlIterEi` | `alAudioInfoListFunction::getCreateAudioInfoListSize(al::ByamlIter const&,int)` | :white_check_mark: |
| `_ZN23alAudioInfoListFunction26getCreateAudioInfoListSizeERKN2al9ByamlIterES3_` | `alAudioInfoListFunction::getCreateAudioInfoListSize(al::ByamlIter const&,al::ByamlIter const&)` | :white_check_mark: |
| `_ZN23alAudioInfoListFunction27createAudioInfoAndSetToListEPN2al30AudioInfoListCreateFunctorBaseERKNS0_9ByamlIterE` | `alAudioInfoListFunction::createAudioInfoAndSetToList(al::AudioInfoListCreateFunctorBase *,al::ByamlIter const&)` | :white_check_mark: |
