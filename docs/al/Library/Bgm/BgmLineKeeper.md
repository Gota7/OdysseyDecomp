# BgmLineKeeper.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# BgmLineKeeper.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al13BgmLineKeeperC2Ev` | `al::BgmLineKeeper::BgmLineKeeper(void)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper4initEPKNS_11BgmDataBaseEPKNS_22AudioInfoListWithPartsINS_14BgmMusicalInfoEEEPNS_15SeadAudioPlayerEPKcSC_iPN4sead8PtrArrayINS_16BgmParamsChangerEEE` | `al::BgmLineKeeper::init(al::BgmDataBase const*,al::AudioInfoListWithParts<al::BgmMusicalInfo> const*,al::SeadAudioPlayer *,char const*,char const*,int,sead::PtrArray<al::BgmParamsChanger> *)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper5resetEPKci` | `al::BgmLineKeeper::reset(char const*,int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper6updateEv` | `al::BgmLineKeeper::update(void)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper19tryChangeActiveLineEv` | `al::BgmLineKeeper::tryChangeActiveLine(void)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper13clearPlayDataEv` | `al::BgmLineKeeper::clearPlayData(void)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper20clearPlayPointRecordEv` | `al::BgmLineKeeper::clearPlayPointRecord(void)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper8startBgmERKNS_17BgmPlayingRequestE` | `al::BgmLineKeeper::startBgm(al::BgmPlayingRequest const&)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper10prepareBgmERKNS_17BgmPlayingRequestE` | `al::BgmLineKeeper::prepareBgm(al::BgmPlayingRequest const&)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper7stopBgmEPKci` | `al::BgmLineKeeper::stopBgm(char const*,int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper8pauseBgmEPKci` | `al::BgmLineKeeper::pauseBgm(char const*,int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper9resumeBgmEPKci` | `al::BgmLineKeeper::resumeBgm(char const*,int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper12isPlayingBgmEv` | `al::BgmLineKeeper::isPlayingBgm(void)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper12isPlayingBgmEPKc` | `al::BgmLineKeeper::isPlayingBgm(char const*)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper12isRunningBgmEPKc` | `al::BgmLineKeeper::isRunningBgm(char const*)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper20isPauseActiveBgmLineEv` | `al::BgmLineKeeper::isPauseActiveBgmLine(void)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper17pauseBgmIfFadeOutEi` | `al::BgmLineKeeper::pauseBgmIfFadeOut(int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper18resumeBgmIfFadeOutEi` | `al::BgmLineKeeper::resumeBgmIfFadeOut(int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper14stopAllBgmLineEib` | `al::BgmLineKeeper::stopAllBgmLine(int,bool)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper17tryStopAllBgmLineEi` | `al::BgmLineKeeper::tryStopAllBgmLine(int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper23tryPauseBgmIfNotPlayingEPKci` | `al::BgmLineKeeper::tryPauseBgmIfNotPlaying(char const*,int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper24tryPauseBgmIfLowPriorityEPKci` | `al::BgmLineKeeper::tryPauseBgmIfLowPriority(char const*,int)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper14startSituationERKN4sead13FixedPtrArrayINS_17IBgmParamsChangerELi5EEE` | `al::BgmLineKeeper::startSituation(sead::FixedPtrArray<al::IBgmParamsChanger,5> const&)` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper12endSituationERKN4sead13FixedPtrArrayINS_17IBgmParamsChangerELi5EEE` | `al::BgmLineKeeper::endSituation(sead::FixedPtrArray<al::IBgmParamsChanger,5> const&)` | :white_check_mark: |
| `_ZNK2al13BgmLineKeeper13getBgmLineNumEv` | `al::BgmLineKeeper::getBgmLineNum(void)const` | :white_check_mark: |
| `_ZNK2al13BgmLineKeeper10getBgmLineEi` | `al::BgmLineKeeper::getBgmLine(int)const` | :white_check_mark: |
| `_ZNK2al13BgmLineKeeper17getPlayingBgmLineEPKc` | `al::BgmLineKeeper::getPlayingBgmLine(char const*)const` | :white_check_mark: |
| `_ZNK2al13BgmLineKeeper16getActiveBgmLineEv` | `al::BgmLineKeeper::getActiveBgmLine(void)const` | :white_check_mark: |
| `_ZNK2al13BgmLineKeeper20getBgmLineByLineNameEPKc` | `al::BgmLineKeeper::getBgmLineByLineName(char const*)const` | :white_check_mark: |
| `_ZNK2al13BgmLineKeeper15getBgmLineIndexEPKc` | `al::BgmLineKeeper::getBgmLineIndex(char const*)const` | :white_check_mark: |
| `_ZN2al13BgmLineKeeper25setAudioBusSendControllerEPNS_22AudioBusSendControllerE` | `al::BgmLineKeeper::setAudioBusSendController(al::AudioBusSendController *)` | :white_check_mark: |
| `_ZN2al13AudioInfoListINS_11BgmLineInfoEE17compareInfoAndKeyEPKS1_PKc` | `al::AudioInfoList<al::BgmLineInfo>::compareInfoAndKey(al::BgmLineInfo const*,char const*)` | :white_check_mark: |
| `_ZN2al13AudioInfoListINS_19BgmCombinedLineInfoEE17compareInfoAndKeyEPKS1_PKc` | `al::AudioInfoList<al::BgmCombinedLineInfo>::compareInfoAndKey(al::BgmCombinedLineInfo const*,char const*)` | :white_check_mark: |
| `_ZN2al17BgmRhythmDetectorC2Ev` | `al::BgmRhythmDetector::BgmRhythmDetector(void)` | :white_check_mark: |
| `_ZN2al17BgmRhythmDetector4initEPNS_22AudioInfoListWithPartsINS_13BgmRhythmInfoEEEPNS1_INS_10BgmBpmInfoEEEPNS1_INS_20BgmTimeSignatureInfoEEEfPNS_23BgmResourceSpecificInfoElRKNS_17BgmSampleDataInfoE` | `al::BgmRhythmDetector::init(al::AudioInfoListWithParts<al::BgmRhythmInfo> *,al::AudioInfoListWithParts<al::BgmBpmInfo> *,al::AudioInfoListWithParts<al::BgmTimeSignatureInfo> *,float,al::BgmResourceSpecificInfo *,long,al::BgmSampleDataInfo const&)` | :white_check_mark: |
| `_ZN2al17BgmRhythmDetector6updateEl` | `al::BgmRhythmDetector::update(long)` | :white_check_mark: |
| `_ZN2al17BgmRhythmDetector10calcParamsEl` | `al::BgmRhythmDetector::calcParams(long)` | :white_check_mark: |
| `_ZN2al17BgmRhythmDetector17setRhythmInfoListEPNS_22AudioInfoListWithPartsINS_13BgmRhythmInfoEEEPNS1_INS_10BgmBpmInfoEEEPNS1_INS_20BgmTimeSignatureInfoEEEf` | `al::BgmRhythmDetector::setRhythmInfoList(al::AudioInfoListWithParts<al::BgmRhythmInfo> *,al::AudioInfoListWithParts<al::BgmBpmInfo> *,al::AudioInfoListWithParts<al::BgmTimeSignatureInfo> *,float)` | :white_check_mark: |
| `_ZN2al17BgmRhythmDetector19resetRhythmInfoListEv` | `al::BgmRhythmDetector::resetRhythmInfoList(void)` | :white_check_mark: |
| `_ZN2al17BgmRhythmDetector18forceUninitializedEv` | `al::BgmRhythmDetector::forceUninitialized(void)` | :white_check_mark: |
