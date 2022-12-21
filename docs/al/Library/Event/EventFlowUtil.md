# EventFlowUtil.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# EventFlowUtil.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al10isNodeNameEPKNS_13EventFlowNodeEPKc` | `al::isNodeName(al::EventFlowNode const*,char const*)` | :x: |
| `_ZN2al15getScareMessageEPKNS_13EventFlowNodeE` | `al::getScareMessage(al::EventFlowNode const*)` | :x: |
| `_ZN2al16startEventCameraEPNS_13EventFlowNodeEPKci` | `al::startEventCamera(al::EventFlowNode *,char const*,int)` | :x: |
| `_ZN2al20startEventAnimCameraEPNS_13EventFlowNodeEPKcS3_i` | `al::startEventAnimCamera(al::EventFlowNode *,char const*,char const*,int)` | :x: |
| `_ZN2al14endEventCameraEPNS_13EventFlowNodeEPKcib` | `al::endEventCamera(al::EventFlowNode *,char const*,int,bool)` | :x: |
| `_ZN2al26tryEndEventCameraIfPlayingEPNS_13EventFlowNodeEPKcib` | `al::tryEndEventCameraIfPlaying(al::EventFlowNode *,char const*,int,bool)` | :x: |
| `_ZN2al25isEndInterpoleEventCameraEPKNS_13EventFlowNodeEPKc` | `al::isEndInterpoleEventCamera(al::EventFlowNode const*,char const*)` | :x: |
| `_ZN2al24isPlayingEventAnimCameraEPKNS_13EventFlowNodeEPKc` | `al::isPlayingEventAnimCamera(al::EventFlowNode const*,char const*)` | :x: |
| `_ZN2al17requestDemoActionEPNS_13EventFlowNodeEPKcb` | `al::requestDemoAction(al::EventFlowNode *,char const*,bool)` | :x: |
| `_ZN2al23requestPlayerDemoActionEPNS_13EventFlowNodeEPKc` | `al::requestPlayerDemoAction(al::EventFlowNode *,char const*)` | :x: |
| `_ZN2al15isEndDemoActionEPKNS_13EventFlowNodeE` | `al::isEndDemoAction(al::EventFlowNode const*)` | :x: |
| `_ZN2al17setDemoTalkActionEPNS_13EventFlowNodeEPKc` | `al::setDemoTalkAction(al::EventFlowNode *,char const*)` | :x: |
| `_ZN2al19resetDemoTalkActionEPNS_13EventFlowNodeE` | `al::resetDemoTalkAction(al::EventFlowNode *)` | :x: |
| `_ZN2al17requestDemoCameraEPNS_13EventFlowNodeEPKc` | `al::requestDemoCamera(al::EventFlowNode *,char const*)` | :x: |
| `_ZN2al22isEndRequestDemoCameraEPKNS_13EventFlowNodeE` | `al::isEndRequestDemoCamera(al::EventFlowNode const*)` | :x: |
| `_ZN2al16isHideDemoPlayerEPKNS_13EventFlowNodeE` | `al::isHideDemoPlayer(al::EventFlowNode const*)` | :x: |
| `_ZN2al21requestHideDemoPlayerEPNS_13EventFlowNodeE` | `al::requestHideDemoPlayer(al::EventFlowNode *)` | :x: |
| `_ZN2al21requestShowDemoPlayerEPNS_13EventFlowNodeE` | `al::requestShowDemoPlayer(al::EventFlowNode *)` | :x: |
| `_ZN2al20calcPlayerWatchTransEPN4sead7Vector3IfEEPKNS_13EventFlowNodeE` | `al::calcPlayerWatchTrans(sead::Vector3<float> *,al::EventFlowNode const*)` | :x: |
| `_ZN2al36requestCommandCloseTalkMessageLayoutEPNS_13EventFlowNodeE` | `al::requestCommandCloseTalkMessageLayout(al::EventFlowNode *)` | :x: |
| `_ZN19alEventFlowFunction38isReceiveCommandCloseTalkMessageLayoutEPKN2al17SceneEventFlowMsgE` | `alEventFlowFunction::isReceiveCommandCloseTalkMessageLayout(al::SceneEventFlowMsg const*)` | :x: |
| `_ZN19alEventFlowFunction22clearSceneEventFlowMsgEPN2al17SceneEventFlowMsgE` | `alEventFlowFunction::clearSceneEventFlowMsg(al::SceneEventFlowMsg *)` | :x: |
| `_ZN2al20EventFlowRequestInfoC2Ev` | `al::EventFlowRequestInfo::EventFlowRequestInfo(void)` | :x: |
| `_ZN2al20EventFlowRequestInfo5resetEv` | `al::EventFlowRequestInfo::reset(void)` | :x: |
| `_ZN2al20EventFlowRequestInfo17requestDemoActionEPKc` | `al::EventFlowRequestInfo::requestDemoAction(char const*)` | :x: |
| `_ZN2al20EventFlowRequestInfo17requestDemoCameraEPKc` | `al::EventFlowRequestInfo::requestDemoCamera(char const*)` | :x: |
| `_ZN2al8isActiveEPKNS_17EventFlowExecutorE` | `al::isActive(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al7isScareEPKNS_17IUseEventFlowDataE` | `al::isScare(al::IUseEventFlowData const*)` | :x: |
| `_ZN2al19tryGetScareEnemyPosEPN4sead7Vector3IfEEPKNS_17IUseEventFlowDataE` | `al::tryGetScareEnemyPos(sead::Vector3<float> *,al::IUseEventFlowData const*)` | :x: |
| `_ZN2al26invalidateUiCollisionCheckEPNS_17EventFlowExecutorE` | `al::invalidateUiCollisionCheck(al::EventFlowExecutor *)` | :x: |
| `_ZN2al22onExistLookAtJointCtrlEPNS_17EventFlowExecutorE` | `al::onExistLookAtJointCtrl(al::EventFlowExecutor *)` | :x: |
| `_ZN2al19setTalkSubActorNameEPNS_17EventFlowExecutorEPKc` | `al::setTalkSubActorName(al::EventFlowExecutor *,char const*)` | :x: |
| `_ZN2al21resetTalkSubActorNameEPNS_17EventFlowExecutorE` | `al::resetTalkSubActorName(al::EventFlowExecutor *)` | :x: |
| `_ZN2al16startEventActionEPNS_9LiveActorEPKNS_17IUseEventFlowDataEPKc` | `al::startEventAction(al::LiveActor *,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al19makeEventActionNameEPN4sead22BufferedSafeStringBaseIcEEPKNS_17IUseEventFlowDataEPKc` | `al::makeEventActionName(sead::BufferedSafeStringBase<char> *,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al29startEventActionAtRandomFrameEPNS_9LiveActorEPKNS_17IUseEventFlowDataEPKc` | `al::startEventActionAtRandomFrame(al::LiveActor *,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al31tryStartEventActionIfNotPlayingEPNS_9LiveActorEPKNS_17IUseEventFlowDataEPKc` | `al::tryStartEventActionIfNotPlaying(al::LiveActor *,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al20isPlayingEventActionEPKNS_9LiveActorEPKNS_17IUseEventFlowDataEPKc` | `al::isPlayingEventAction(al::LiveActor const*,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al18isExistEventActionEPKNS_9LiveActorEPKNS_17IUseEventFlowDataEPKc` | `al::isExistEventAction(al::LiveActor const*,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al20isOneTimeEventActionEPKNS_9LiveActorEPKNS_17IUseEventFlowDataEPKc` | `al::isOneTimeEventAction(al::LiveActor const*,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al22getEventActionFrameMaxEPKNS_9LiveActorEPKNS_17IUseEventFlowDataEPKc` | `al::getEventActionFrameMax(al::LiveActor const*,al::IUseEventFlowData const*,char const*)` | :x: |
| `_ZN2al17getParamMoveSpeedEPKNS_17IUseEventFlowDataE` | `al::getParamMoveSpeed(al::IUseEventFlowData const*)` | :x: |
| `_ZN2al23getParamTurnSpeedDegreeEPKNS_17IUseEventFlowDataE` | `al::getParamTurnSpeedDegree(al::IUseEventFlowData const*)` | :x: |
| `_ZN2al19getRecordActorFrontEPKNS_17IUseEventFlowDataE` | `al::getRecordActorFront(al::IUseEventFlowData const*)` | :x: |
| `_ZN2al16recordActorFrontEPNS_17IUseEventFlowDataERKN4sead7Vector3IfEE` | `al::recordActorFront(al::IUseEventFlowData *,sead::Vector3<float> const&)` | :x: |
| `_ZN2al23checkInsideTerritoryPosEPKNS_17IUseEventFlowDataEPKNS_9LiveActorERKN4sead7Vector3IfEEf` | `al::checkInsideTerritoryPos(al::IUseEventFlowData const*,al::LiveActor const*,sead::Vector3<float> const&,float)` | :x: |
| `_ZN2al30checkInsideEmotionTerritoryPosEPKNS_17IUseEventFlowDataEPKNS_9LiveActorERKN4sead7Vector3IfEE` | `al::checkInsideEmotionTerritoryPos(al::IUseEventFlowData const*,al::LiveActor const*,sead::Vector3<float> const&)` | :x: |
| `_ZN2al41checkInsideEmotionLowPriorityTerritoryPosEPKNS_17IUseEventFlowDataEPKNS_9LiveActorERKN4sead7Vector3IfEE` | `al::checkInsideEmotionLowPriorityTerritoryPos(al::IUseEventFlowData const*,al::LiveActor const*,sead::Vector3<float> const&)` | :x: |
| `_ZN2al27checkInsideTalkTerritoryPosEPKNS_17IUseEventFlowDataEPKNS_9LiveActorERKN4sead7Vector3IfEE` | `al::checkInsideTalkTerritoryPos(al::IUseEventFlowData const*,al::LiveActor const*,sead::Vector3<float> const&)` | :x: |
| `_ZN2al17calcBalloonOffsetEPN4sead7Vector3IfEEPKNS_17IUseEventFlowDataEPKNS_9LiveActorE` | `al::calcBalloonOffset(sead::Vector3<float> *,al::IUseEventFlowData const*,al::LiveActor const*)` | :x: |
| `_ZN2al21setBalloonLocalOffsetEPNS_17EventFlowExecutorERKN4sead7Vector3IfEE` | `al::setBalloonLocalOffset(al::EventFlowExecutor *,sead::Vector3<float> const&)` | :x: |
| `_ZN2al36getBalloonCollisionCheckOffsetRadiusEPKNS_17IUseEventFlowDataE` | `al::getBalloonCollisionCheckOffsetRadius(al::IUseEventFlowData const*)` | :x: |
| `_ZN2al32isDisableOpenBalloonByOrderGroupEPKNS_9LiveActorEPKNS_17IUseEventFlowDataE` | `al::isDisableOpenBalloonByOrderGroup(al::LiveActor const*,al::IUseEventFlowData const*)` | :x: |
| `_ZN2al36isEnableForceOpenBalloonByOrderGroupEPKNS_9LiveActorEPKNS_17IUseEventFlowDataE` | `al::isEnableForceOpenBalloonByOrderGroup(al::LiveActor const*,al::IUseEventFlowData const*)` | :x: |
| `_ZN2al21isWaitAtPointMovementEPKNS_17EventFlowExecutorE` | `al::isWaitAtPointMovement(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al14isStopMovementEPKNS_17IUseEventFlowDataE` | `al::isStopMovement(al::IUseEventFlowData const*)` | :x: |
| `_ZN2al24isRequestEventDemoActionEPKNS_17EventFlowExecutorE` | `al::isRequestEventDemoAction(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al24isPlayingEventDemoActionEPKNS_17EventFlowExecutorE` | `al::isPlayingEventDemoAction(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al22getEventDemoActionNameEPKNS_17EventFlowExecutorE` | `al::getEventDemoActionName(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al26isExistEventDemoTalkActionEPKNS_17EventFlowExecutorE` | `al::isExistEventDemoTalkAction(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al26getEventDemoTalkActionNameEPKNS_17EventFlowExecutorE` | `al::getEventDemoTalkActionName(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al30isResetEventDemoPlayerDynamicsEPKNS_17EventFlowExecutorE` | `al::isResetEventDemoPlayerDynamics(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al20startEventDemoActionEPNS_17EventFlowExecutorE` | `al::startEventDemoAction(al::EventFlowExecutor *)` | :x: |
| `_ZN2al18endEventDemoActionEPNS_17EventFlowExecutorE` | `al::endEventDemoAction(al::EventFlowExecutor *)` | :x: |
| `_ZN2al24isRequestEventDemoCameraEPKNS_17EventFlowExecutorE` | `al::isRequestEventDemoCamera(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al26getEventDemoCameraAnimNameEPKNS_17EventFlowExecutorE` | `al::getEventDemoCameraAnimName(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al27clearEventDemoCameraRequestEPNS_17EventFlowExecutorE` | `al::clearEventDemoCameraRequest(al::EventFlowExecutor *)` | :x: |
| `_ZN2al16isHideDemoPlayerEPKNS_17EventFlowExecutorE` | `al::isHideDemoPlayer(al::EventFlowExecutor const*)` | :x: |
| `_ZN2al17isExistEventEntryEPKNS_17EventFlowExecutorEPKc` | `al::isExistEventEntry(al::EventFlowExecutor const*,char const*)` | :x: |
| `_ZN2al19isCurrentEventEntryEPKNS_17EventFlowExecutorEPKc` | `al::isCurrentEventEntry(al::EventFlowExecutor const*,char const*)` | :x: |
| `_ZN2al11isEventNameEPKNS_18EventFlowEventDataEPKcz` | `al::isEventName(al::EventFlowEventData const*,char const*,...)` | :x: |
| `_ZN2al12getEventNameEPKNS_18EventFlowEventDataE` | `al::getEventName(al::EventFlowEventData const*)` | :x: |
| `_ZN2al23getEventDataParamStringEPKNS_18EventFlowEventDataEPKc` | `al::getEventDataParamString(al::EventFlowEventData const*,char const*)` | :x: |
| `_ZN2al20isEventDataParamBoolEPKNS_18EventFlowEventDataEPKc` | `al::isEventDataParamBool(al::EventFlowEventData const*,char const*)` | :x: |
