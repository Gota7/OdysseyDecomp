# KCollisionServer.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# KCollisionServer.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al16KCollisionServerC1Ev` | `al::KCollisionServer::KCollisionServer(void)` | :white_check_mark: |
| `_ZN2al16KCollisionServer20initKCollisionServerEPvPKv` | `al::KCollisionServer::initKCollisionServer(void *,void const*)` | :white_check_mark: |
| `_ZN2al16KCollisionServer7setDataEPv` | `al::KCollisionServer::setData(void *)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer11getInnerKclEi` | `al::KCollisionServer::getInnerKcl(int)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer14getNumInnerKclEv` | `al::KCollisionServer::getNumInnerKcl(void)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer11getV1HeaderEi` | `al::KCollisionServer::getV1Header(int)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer26calcFarthestVertexDistanceEv` | `al::KCollisionServer::calcFarthestVertexDistance(void)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer14getTriangleNumEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getTriangleNum(al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer12getPrismDataEjPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getPrismData(unsigned int,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer20isNearParallelNormalEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::isNearParallelNormal(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer10isNanPrismEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::isNanPrism(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer12calcPosLocalEPN4sead7Vector3IfEEPKNS_11KCPrismDataEiPKNS_13KCPrismHeaderE` | `al::KCollisionServer::calcPosLocal(sead::Vector3<float> *,al::KCPrismData const*,int,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer9getMinMaxEPN4sead7Vector3IfEES4_` | `al::KCollisionServer::getMinMax(sead::Vector3<float> *,sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer16getAreaSpaceSizeEPN4sead7Vector3IfEEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getAreaSpaceSize(sead::Vector3<float> *,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer16getAreaSpaceSizeEPiS1_S1_PKNS_13KCPrismHeaderE` | `al::KCollisionServer::getAreaSpaceSize(int *,int *,int *,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer16getAreaSpaceSizeEPN4sead7Vector3IjEEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getAreaSpaceSize(sead::Vector3<unsigned int> *,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer10checkPointEPN4sead7Vector3IfEEfPf` | `al::KCollisionServer::checkPoint(sead::Vector3<float> *,float,float *)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer11searchBlockEPiRKN4sead7Vector3IjEEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::searchBlock(int *,sead::Vector3<unsigned int> const&,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer11checkSphereEPKN4sead7Vector3IfEEffjPNS1_15FixedRingBufferINS_9KCHitInfoELi512EEE` | `al::KCollisionServer::checkSphere(sead::Vector3<float> const*,float,float,unsigned int,sead::FixedRingBuffer<al::KCHitInfo,512> *)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer19outCheckAndCalcAreaEPN4sead7Vector3IjEES4_RKNS2_IfEES7_PKNS_13KCPrismHeaderE` | `al::KCollisionServer::outCheckAndCalcArea(sead::Vector3<unsigned int> *,sead::Vector3<unsigned int> *,sead::Vector3<float> const&,sead::Vector3<float> const&,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer11KCHitSphereEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderEPKN4sead7Vector3IfEEffPfPh` | `al::KCollisionServer::KCHitSphere(al::KCPrismData const*,al::KCPrismHeader const*,sead::Vector3<float> const*,float,float,float *,unsigned char *)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer10checkArrowERKN4sead7Vector3IfEES5_PNS1_15FixedRingBufferINS_9KCHitInfoELi512EEEPjj` | `al::KCollisionServer::checkArrow(sead::Vector3<float> const&,sead::Vector3<float> const&,sead::FixedRingBuffer<al::KCHitInfo,512> *,unsigned int *,unsigned int)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer31objectSpaceToAreaOffsetSpaceV3fEPN4sead7Vector3IfEERKS3_PKNS_13KCPrismHeaderE` | `al::KCollisionServer::objectSpaceToAreaOffsetSpaceV3f(sead::Vector3<float> *,sead::Vector3<float> const&,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer31isInsideMinMaxInAreaOffsetSpaceERKN4sead7Vector3IjEEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::isInsideMinMaxInAreaOffsetSpace(sead::Vector3<unsigned int> const&,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer10KCHitArrowEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderERKN4sead7Vector3IfEESB_PfPh` | `al::KCollisionServer::KCHitArrow(al::KCPrismData const*,al::KCPrismHeader const*,sead::Vector3<float> const&,sead::Vector3<float> const&,float *,unsigned char *)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer20checkSphereForPlayerEPKN4sead7Vector3IfEEffjPNS1_15FixedRingBufferINS_9KCHitInfoELi512EEE` | `al::KCollisionServer::checkSphereForPlayer(sead::Vector3<float> const*,float,float,unsigned int,sead::FixedRingBuffer<al::KCHitInfo,512> *)` | :white_check_mark: |
| `_ZN2al16KCollisionServer20KCHitSphereForPlayerEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderEPKN4sead7Vector3IfEEffPfPh` | `al::KCollisionServer::KCHitSphereForPlayer(al::KCPrismData const*,al::KCPrismHeader const*,sead::Vector3<float> const*,float,float,float *,unsigned char *)` | :white_check_mark: |
| `_ZN2al16KCollisionServer9checkDiskEPKN4sead7Vector3IfEEffRS4_fjPNS1_15FixedRingBufferINS_9KCHitInfoELi512EEE` | `al::KCollisionServer::checkDisk(sead::Vector3<float> const*,float,float,sead::Vector3<float> const&,float,unsigned int,sead::FixedRingBuffer<al::KCHitInfo,512> *)` | :white_check_mark: |
| `_ZN2al16KCollisionServer9KCHitDiskEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderEPKN4sead7Vector3IfEEfffRSA_PfPh` | `al::KCollisionServer::KCHitDisk(al::KCPrismData const*,al::KCPrismHeader const*,sead::Vector3<float> const*,float,float,float,sead::Vector3<float> const&,float *,unsigned char *)` | :white_check_mark: |
| `_ZN2al16KCollisionServer11searchPrismEPN4sead7Vector3IfEEfRNS1_10IDelegate2IPKNS_11KCPrismDataEPKNS_13KCPrismHeaderEEE` | `al::KCollisionServer::searchPrism(sead::Vector3<float> *,float,sead::IDelegate2<al::KCPrismData const*,al::KCPrismHeader const*> &)` | :white_check_mark: |
| `_ZN2al16KCollisionServer17searchPrismMinMaxERKN4sead7Vector3IfEES5_RNS1_10IDelegate2IPKNS_11KCPrismDataEPKNS_13KCPrismHeaderEEE` | `al::KCollisionServer::searchPrismMinMax(sead::Vector3<float> const&,sead::Vector3<float> const&,sead::IDelegate2<al::KCPrismData const*,al::KCPrismHeader const*> &)` | :white_check_mark: |
| `_ZN2al16KCollisionServer16searchPrismArrowERKN4sead7Vector3IfEES5_RNS1_10IDelegate2IPKNS_11KCPrismDataEPKNS_13KCPrismHeaderEEE` | `al::KCollisionServer::searchPrismArrow(sead::Vector3<float> const&,sead::Vector3<float> const&,sead::IDelegate2<al::KCPrismData const*,al::KCPrismHeader const*> &)` | :white_check_mark: |
| `_ZN2al16KCollisionServer15searchPrismDiskERKN4sead7Vector3IfEES5_ffRNS1_10IDelegate2IPKNS_11KCPrismDataEPKNS_13KCPrismHeaderEEE` | `al::KCollisionServer::searchPrismDisk(sead::Vector3<float> const&,sead::Vector3<float> const&,float,float,sead::IDelegate2<al::KCPrismData const*,al::KCPrismHeader const*> &)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer16isParallelNormalEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::isParallelNormal(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer13getFaceNormalEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getFaceNormal(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer14getEdgeNormal1EPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getEdgeNormal1(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer14getEdgeNormal2EPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getEdgeNormal2(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer14getEdgeNormal3EPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getEdgeNormal3(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `sub_7100855E90` | `` | :white_check_mark: |
| `_ZN2al16KCollisionServer9KCHitDiscEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderERKN4sead7Vector3IfEESB_ffPS9_Pf` | `al::KCollisionServer::KCHitDisc(al::KCPrismData const*,al::KCPrismHeader const*,sead::Vector3<float> const&,sead::Vector3<float> const&,float,float,sead::Vector3<float>*,float *)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer7toIndexEPKNS_11KCPrismDataEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::toIndex(al::KCPrismData const*,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer9getNormalEjPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getNormal(unsigned int,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer7calXvecEPKN4sead7Vector3IfEES5_PS3_` | `al::KCollisionServer::calXvec(sead::Vector3<float> const*,sead::Vector3<float> const*,sead::Vector3<float>*)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer13getVertexDataEjPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getVertexData(unsigned int,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer12getVertexNumEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getVertexNum(al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer12getNormalNumEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getNormalNum(al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer22getAttributeElementNumEv` | `al::KCollisionServer::getAttributeElementNum(void)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer13getAttributesEPNS_9ByamlIterEjPKNS_13KCPrismHeaderE` | `al::KCollisionServer::getAttributes(al::ByamlIter *,unsigned int,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer13getAttributesEPNS_9ByamlIterEPKNS_11KCPrismDataE` | `al::KCollisionServer::getAttributes(al::ByamlIter *,al::KCPrismData const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer28objectSpaceToAreaOffsetSpaceEPN4sead7Vector3IjEERKNS2_IfEEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::objectSpaceToAreaOffsetSpace(sead::Vector3<unsigned int> *,sead::Vector3<float> const&,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZNK2al16KCollisionServer28areaOffsetSpaceToObjectSpaceEPN4sead7Vector3IfEERKNS2_IjEEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::areaOffsetSpaceToObjectSpace(sead::Vector3<float> *,sead::Vector3<unsigned int> const&,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer10doBoxCheckEPKN4sead7Vector3IfEES5_PNS2_IjEES7_PKNS_13KCPrismHeaderE` | `al::KCollisionServer::doBoxCheck(sead::Vector3<float> const*,sead::Vector3<float> const*,sead::Vector3<unsigned int> *,sead::Vector3<unsigned int> *,al::KCPrismHeader const*)` | :white_check_mark: |
| `_ZNK2al16KCollisionServer19calcAreaBlockOffsetERKN4sead7Vector3IjEEPKNS_13KCPrismHeaderE` | `al::KCollisionServer::calcAreaBlockOffset(sead::Vector3<unsigned int> const&,al::KCPrismHeader const*)const` | :white_check_mark: |
| `_ZN2al16KCollisionServer20calcChildBlockOffsetERKN4sead7Vector3IjEEi` | `al::KCollisionServer::calcChildBlockOffset(sead::Vector3<unsigned int> const&,int)` | :white_check_mark: |
| `_ZN2al16KCollisionServer12getBlockDataEPKjj` | `al::KCollisionServer::getBlockData(unsigned int const*,unsigned int)` | :white_check_mark: |
| `_ZN2al18SphereInterpolator11startInterpERKN4sead7Vector3IfEES5_fff` | `al::SphereInterpolator::startInterp(sead::Vector3<float> const&,sead::Vector3<float> const&,float,float,float)` | :white_check_mark: |
| `_ZN2al18SphereInterpolator8nextStepEv` | `al::SphereInterpolator::nextStep(void)` | :white_check_mark: |
| `_ZNK2al18SphereInterpolator13calcInterpPosEPN4sead7Vector3IfEE` | `al::SphereInterpolator::calcInterpPos(sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZNK2al18SphereInterpolator10calcInterpEPN4sead7Vector3IfEEPfS4_` | `al::SphereInterpolator::calcInterp(sead::Vector3<float> *,float *,sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZNK2al18SphereInterpolator20calcRemainMoveVectorEPN4sead7Vector3IfEE` | `al::SphereInterpolator::calcRemainMoveVector(sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZN2al18SphereInterpolator13getMoveVectorEPN4sead7Vector3IfEE` | `al::SphereInterpolator::getMoveVector(sead::Vector3<float> *)` | :white_check_mark: |
| `_ZNK2al18SphereInterpolator18calcStepMoveVectorEPN4sead7Vector3IfEE` | `al::SphereInterpolator::calcStepMoveVector(sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZN2al22SpherePoseInterpolator11startInterpERKN4sead7Vector3IfEES5_ffRKNS1_4QuatIfEES9_f` | `al::SpherePoseInterpolator::startInterp(sead::Vector3<float> const&,sead::Vector3<float> const&,float,float,sead::Quat<float> const&,sead::Quat<float> const&,float)` | :white_check_mark: |
| `_ZN2al22SpherePoseInterpolator8nextStepEv` | `al::SpherePoseInterpolator::nextStep(void)` | :white_check_mark: |
| `_ZNK2al22SpherePoseInterpolator13calcInterpPosEPN4sead7Vector3IfEE` | `al::SpherePoseInterpolator::calcInterpPos(sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZNK2al22SpherePoseInterpolator10calcInterpEPN4sead7Vector3IfEEPfPNS1_4QuatIfEES4_` | `al::SpherePoseInterpolator::calcInterp(sead::Vector3<float> *,float *,sead::Quat<float> *,sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZNK2al22SpherePoseInterpolator20calcRemainMoveVectorEPN4sead7Vector3IfEE` | `al::SpherePoseInterpolator::calcRemainMoveVector(sead::Vector3<float> *)const` | :white_check_mark: |
| `_ZNK2al22SpherePoseInterpolator19calcRadiusBaseScaleEf` | `al::SpherePoseInterpolator::calcRadiusBaseScale(float)const` | :white_check_mark: |
| `_ZN2al22SpherePoseInterpolator13getMoveVectorEPN4sead7Vector3IfEE` | `al::SpherePoseInterpolator::getMoveVector(sead::Vector3<float> *)` | :white_check_mark: |
