# ModelShapeCtrl.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# ModelShapeCtrl.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al14ModelShapeCtrlC2Ev` | `al::ModelShapeCtrl::ModelShapeCtrl(void)` | :white_check_mark: |
| `_ZN2al14ModelShapeCtrl4initEPN2nn3g3d8ModelObjEPNS2_8ShapeObjEPNS2_11MaterialObjE` | `al::ModelShapeCtrl::init(nn::g3d::ModelObj *,nn::g3d::ShapeObj *,nn::g3d::MaterialObj *)` | :white_check_mark: |
| `_ZN2al14ModelShapeCtrl18updateSubMeshRangeERKN2nn3g3d10ViewVolumeERKNS2_8ShapeObjEi` | `al::ModelShapeCtrl::updateSubMeshRange(nn::g3d::ViewVolume const&,nn::g3d::ShapeObj const&,int)` | :white_check_mark: |
| `_ZNK2al14ModelShapeCtrl31isChangeDrawStatePrepassCullingEv` | `al::ModelShapeCtrl::isChangeDrawStatePrepassCulling(void)const` | :white_check_mark: |
| `_ZN2al14ModelShapeCtrl20setCulledIndexBufferEPNS_17CulledIndexBufferE` | `al::ModelShapeCtrl::setCulledIndexBuffer(al::CulledIndexBuffer *)` | :white_check_mark: |
| `_ZN2al14ModelShapeCtrl11setLodLevelEi` | `al::ModelShapeCtrl::setLodLevel(int)` | :white_check_mark: |
| `_ZN2al14ModelShapeCtrl18addToDrawerCullingEv` | `al::ModelShapeCtrl::addToDrawerCulling(void)` | :white_check_mark: |
| `_ZN2al14ModelShapeCtrl23removeFromDrawerCullingEv` | `al::ModelShapeCtrl::removeFromDrawerCulling(void)` | :white_check_mark: |
| `_ZN2al14ModelShapeCtrl34tryClearPrepassCullingIndirectDataEv` | `al::ModelShapeCtrl::tryClearPrepassCullingIndirectData(void)` | :white_check_mark: |
| `_ZN20alModelShapeFunction34isEnableGsCullingCulledIndexBufferERKN2al14ModelShapeCtrlE` | `alModelShapeFunction::isEnableGsCullingCulledIndexBuffer(al::ModelShapeCtrl const&)` | :white_check_mark: |
| `_ZN20alModelShapeFunction29isEnableDrawCulledIndexBufferERKN2al14ModelShapeCtrlE` | `alModelShapeFunction::isEnableDrawCulledIndexBuffer(al::ModelShapeCtrl const&)` | :white_check_mark: |
| `_ZN20alModelShapeFunction15drawShapeCulledEPN3agl11DrawContextERKN2al14ModelShapeCtrlE` | `alModelShapeFunction::drawShapeCulled(agl::DrawContext *,al::ModelShapeCtrl const&)` | :white_check_mark: |
| `_ZN20alModelShapeFunction9drawShapeEPN3agl11DrawContextERKN2al14ModelShapeCtrlEPKN2nn3g3d10ViewVolumeERKNS8_8ShapeObjEib` | `alModelShapeFunction::drawShape(agl::DrawContext *,al::ModelShapeCtrl const&,nn::g3d::ViewVolume const*,nn::g3d::ShapeObj const&,int,bool)` | :white_check_mark: |
| `_ZN20alModelShapeFunction23drawShapePrepareCullingEPN3agl11DrawContextERKN2al14ModelShapeCtrlEPKN2nn3g3d10ViewVolumeERKNS8_8ShapeObjEib` | `alModelShapeFunction::drawShapePrepareCulling(agl::DrawContext *,al::ModelShapeCtrl const&,nn::g3d::ViewVolume const*,nn::g3d::ShapeObj const&,int,bool)` | :white_check_mark: |
| `_ZN20alModelShapeFunction13drawShapeCtrlEPN3agl11DrawContextERKN2al14ModelShapeCtrlEPKN2nn3g3d10ViewVolumeERKNS8_8ShapeObjEib` | `alModelShapeFunction::drawShapeCtrl(agl::DrawContext *,al::ModelShapeCtrl const&,nn::g3d::ViewVolume const*,nn::g3d::ShapeObj const&,int,bool)` | :white_check_mark: |
| `_ZN20alModelShapeFunction21drawShapeCtrlZprepassEPN3agl11DrawContextERKN2al14ModelShapeCtrlEPKN2nn3g3d10ViewVolumeERKNS8_8ShapeObjEib` | `alModelShapeFunction::drawShapeCtrlZprepass(agl::DrawContext *,al::ModelShapeCtrl const&,nn::g3d::ViewVolume const*,nn::g3d::ShapeObj const&,int,bool)` | :white_check_mark: |
| `_ZN2al15getMaterialNameEPKNS_11ModelKeeperEi` | `al::getMaterialName(al::ModelKeeper const*,int)` | :white_check_mark: |
| `_ZN2al16getMaterialIndexEPKNS_11ModelKeeperEPKc` | `al::getMaterialIndex(al::ModelKeeper const*,char const*)` | :white_check_mark: |
| `_ZN2al16getMaterialCountEPKNS_11ModelKeeperE` | `al::getMaterialCount(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al12hideMaterialEPNS_11ModelKeeperEPKc` | `al::hideMaterial(al::ModelKeeper *,char const*)` | :white_check_mark: |
| `_ZN2al12hideMaterialEPNS_11ModelKeeperEi` | `al::hideMaterial(al::ModelKeeper *,int)` | :white_check_mark: |
| `_ZN2al12showMaterialEPNS_11ModelKeeperEPKc` | `al::showMaterial(al::ModelKeeper *,char const*)` | :white_check_mark: |
| `_ZN2al12showMaterialEPNS_11ModelKeeperEi` | `al::showMaterial(al::ModelKeeper *,int)` | :white_check_mark: |
| `_ZN2al14calcPolygonNumEPKNS_11ModelKeeperEi` | `al::calcPolygonNum(al::ModelKeeper const*,int)` | :white_check_mark: |
| `_ZN2al24calcPolygonNumCurrentLodEPKNS_11ModelKeeperE` | `al::calcPolygonNumCurrentLod(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al11getLodLevelEPKNS_11ModelKeeperE` | `al::getLodLevel(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al19getMaterialLodLevelEPKNS_11ModelKeeperE` | `al::getMaterialLodLevel(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al18getLodLevelNoClampEPKNS_11ModelKeeperE` | `al::getLodLevelNoClamp(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al32isGreaterEqualMaxLodLevelNoClampEPKNS_11ModelKeeperE` | `al::isGreaterEqualMaxLodLevelNoClamp(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al27isGreaterMaxLodLevelNoClampEPKNS_11ModelKeeperE` | `al::isGreaterMaxLodLevelNoClamp(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al24isLessMaxLodLevelNoClampEPKNS_11ModelKeeperE` | `al::isLessMaxLodLevelNoClamp(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al20isMaxLodLevelNoClampEPKNS_11ModelKeeperE` | `al::isMaxLodLevelNoClamp(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al16validateLodModelEPNS_11ModelKeeperE` | `al::validateLodModel(al::ModelKeeper *)` | :white_check_mark: |
| `_ZN2al18invalidateLodModelEPNS_11ModelKeeperE` | `al::invalidateLodModel(al::ModelKeeper *)` | :white_check_mark: |
| `_ZN2al19isEnableMaterialLodEPKNS_11ModelKeeperE` | `al::isEnableMaterialLod(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al18isValidateLodModelEPKNS_11ModelKeeperE` | `al::isValidateLodModel(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al11setUvOffsetEPKNS_11ModelKeeperERKN4sead7Vector2IfEE` | `al::setUvOffset(al::ModelKeeper const*,sead::Vector2<float> const&)` | :white_check_mark: |
| `_ZN2al16setModelProjMtx0EPKNS_11ModelKeeperERKN4sead8Matrix44IfEE` | `al::setModelProjMtx0(al::ModelKeeper const*,sead::Matrix44<float> const&)` | :white_check_mark: |
| `_ZN2al16setModelProjMtx1EPKNS_11ModelKeeperERKN4sead8Matrix44IfEE` | `al::setModelProjMtx1(al::ModelKeeper const*,sead::Matrix44<float> const&)` | :white_check_mark: |
| `_ZN2al16setModelProjMtx2EPKNS_11ModelKeeperERKN4sead8Matrix44IfEE` | `al::setModelProjMtx2(al::ModelKeeper const*,sead::Matrix44<float> const&)` | :white_check_mark: |
| `_ZN2al20setModelProgProjMtx0EPKNS_11ModelKeeperERKN4sead8Matrix44IfEE` | `al::setModelProgProjMtx0(al::ModelKeeper const*,sead::Matrix44<float> const&)` | :white_check_mark: |
| `_ZN2al18createRetargetInfoERKN4sead7Vector3IfEEPKcS6_S6_` | `al::createRetargetInfo(sead::Vector3<float> const&,char const*,char const*,char const*)` | :white_check_mark: |
| `_ZN2al11getJointNumEPKNS_11ModelKeeperE` | `al::getJointNum(al::ModelKeeper const*)` | :white_check_mark: |
| `_ZN2al13getJointIndexEPKNS_11ModelKeeperEPKc` | `al::getJointIndex(al::ModelKeeper const*,char const*)` | :white_check_mark: |
| `_ZN2al12isExistJointEPKNS_11ModelKeeperEPKc` | `al::isExistJoint(al::ModelKeeper const*,char const*)` | :white_check_mark: |
| `_ZN2al12getJointNameEPKNS_11ModelKeeperEi` | `al::getJointName(al::ModelKeeper const*,int)` | :white_check_mark: |
| `_ZN2al14getJointMtxPtrEPKNS_11ModelKeeperEPKc` | `al::getJointMtxPtr(al::ModelKeeper const*,char const*)` | :white_check_mark: |
| `_ZN2al21getJointMtxPtrByIndexEPKNS_11ModelKeeperEi` | `al::getJointMtxPtrByIndex(al::ModelKeeper const*,int)` | :white_check_mark: |
| `_ZN2al17getJointMtxPtrRawEPKNS_11ModelKeeperEPKc` | `al::getJointMtxPtrRaw(al::ModelKeeper const*,char const*)` | :white_check_mark: |
| `_ZN2al24getJointMtxPtrByIndexRawEPKNS_11ModelKeeperEi` | `al::getJointMtxPtrByIndexRaw(al::ModelKeeper const*,int)` | :white_check_mark: |
| `_ZN2al18getJointLocalTransEPN4sead7Vector3IfEEPKNS_11ModelKeeperEPKc` | `al::getJointLocalTrans(sead::Vector3<float> *,al::ModelKeeper const*,char const*)` | :white_check_mark: |
| `_ZN2al18getJointLocalTransEPN4sead7Vector3IfEEPKNS_11ModelKeeperEi` | `al::getJointLocalTrans(sead::Vector3<float> *,al::ModelKeeper const*,int)` | :white_check_mark: |
| `_ZN2al19getParentJointIndexEPKNS_11ModelKeeperEi` | `al::getParentJointIndex(al::ModelKeeper const*,int)` | :white_check_mark: |
| `_ZN2al18setJointVisibilityEPKNS_11ModelKeeperEPKcb` | `al::setJointVisibility(al::ModelKeeper const*,char const*,bool)` | :white_check_mark: |
| `_ZN2al17isJointVisibilityEPKNS_11ModelKeeperEPKc` | `al::isJointVisibility(al::ModelKeeper const*,char const*)` | :white_check_mark: |
| `_ZN2al17forceApplyCubeMapEPNS_11ModelKeeperEPKNS_18GraphicsSystemInfoEPKc` | `al::forceApplyCubeMap(al::ModelKeeper *,al::GraphicsSystemInfo const*,char const*)` | :white_check_mark: |
| `_ZN20alModelJointFunction17setDirectJointMtxEPN2al11ModelKeeperEiRKN4sead8Matrix34IfEE` | `alModelJointFunction::setDirectJointMtx(al::ModelKeeper *,int,sead::Matrix34<float> const&)` | :white_check_mark: |
| `_ZN20alModelJointFunction27calcMtx34JointMtxByIndexRawEPN4sead8Matrix34IfEEPN2al11ModelKeeperEi` | `alModelJointFunction::calcMtx34JointMtxByIndexRaw(sead::Matrix34<float> *,al::ModelKeeper *,int)` | :white_check_mark: |
