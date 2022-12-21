# CloudRenderKeeper.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# CloudRenderKeeper.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al13CloudRendererC1EPNS_18GraphicsSystemInfoEPN4sead6RandomE` | `al::CloudRenderer::CloudRenderer(al::GraphicsSystemInfo *,sead::Random *)` | :white_check_mark: |
| `_ZN2al13CloudRendererD2Ev` | `al::CloudRenderer::~CloudRenderer()` | :white_check_mark: |
| `_ZN2al13CloudRendererD0Ev` | `al::CloudRenderer::~CloudRenderer()` | :white_check_mark: |
| `_ZN2al13CloudRenderer7calcGpuERKNS_19GraphicsCalcGpuInfoE` | `al::CloudRenderer::calcGpu(al::GraphicsCalcGpuInfo const&)` | :white_check_mark: |
| `_ZNK2al13CloudRenderer4drawEPN3agl11DrawContextEiPKNS_9HdrEncodeEPKNS_14SimpleModelEnvEi` | `al::CloudRenderer::draw(agl::DrawContext *,int,al::HdrEncode const*,al::SimpleModelEnv const*,int)const` | :white_check_mark: |
| `_ZNK2al13CloudRenderer11drawEtmDistEPN3agl11DrawContextE` | `al::CloudRenderer::drawEtmDist(agl::DrawContext *)const` | :white_check_mark: |
| `_ZNK2al13CloudRenderer7drawEtmEPN3agl11DrawContextE` | `al::CloudRenderer::drawEtm(agl::DrawContext *)const` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeperC2EPNS_18GraphicsSystemInfoE` | `al::CloudRenderKeeper::CloudRenderKeeper(al::GraphicsSystemInfo *)` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeper7endInitEv` | `al::CloudRenderKeeper::endInit(void)` | :white_check_mark: |
| `_ZNK2al17CloudRenderKeeper21activateVtxAttrSphereEPN3agl11DrawContextE` | `al::CloudRenderKeeper::activateVtxAttrSphere(agl::DrawContext *)const` | :white_check_mark: |
| `_ZNK2al17CloudRenderKeeper23getCloudVolume3DSamplerEv` | `al::CloudRenderKeeper::getCloudVolume3DSampler(void)const` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeperD2Ev` | `al::CloudRenderKeeper::~CloudRenderKeeper()` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeper8finalizeEv` | `al::CloudRenderKeeper::finalize(void)` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeper6updateERKNS_18GraphicsUpdateInfoE` | `al::CloudRenderKeeper::update(al::GraphicsUpdateInfo const&)` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeper7calcGpuERKNS_19GraphicsCalcGpuInfoE` | `al::CloudRenderKeeper::calcGpu(al::GraphicsCalcGpuInfo const&)` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeper11registCloudEPNS_13CloudRendererE` | `al::CloudRenderKeeper::registCloud(al::CloudRenderer *)` | :white_check_mark: |
| `_ZN2al17CloudRenderKeeper19registCloudRayMarchEPNS_21CloudRendererRayMarchE` | `al::CloudRenderKeeper::registCloudRayMarch(al::CloudRendererRayMarch *)` | :white_check_mark: |
| `_ZNK2al17CloudRenderKeeper11drawForwardERKNS_18GraphicsRenderInfoERKNS_15RenderVariablesE` | `al::CloudRenderKeeper::drawForward(al::GraphicsRenderInfo const&,al::RenderVariables const&)const` | :white_check_mark: |
| `_ZNK2al17CloudRenderKeeper10drawSystemEPKNS_18GraphicsRenderInfoE` | `al::CloudRenderKeeper::drawSystem(al::GraphicsRenderInfo const*)const` | :white_check_mark: |
| `_ZNK2al17CloudRenderKeeper7getNameEv` | `al::CloudRenderKeeper::getName(void)const` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarchC1EPKcPNS_18GraphicsSystemInfoE` | `al::CloudRendererRayMarch::CloudRendererRayMarch(char const*,al::GraphicsSystemInfo *)` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarch9storePoseERKN4sead7Vector3IfEERKNS1_4QuatIfEES5_` | `al::CloudRendererRayMarch::storePose(sead::Vector3<float> const&,sead::Quat<float> const&,sead::Vector3<float> const&)` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarchD2Ev` | `al::CloudRendererRayMarch::~CloudRendererRayMarch()` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarchD0Ev` | `al::CloudRendererRayMarch::~CloudRendererRayMarch()` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarch8finalizeEv` | `al::CloudRendererRayMarch::finalize(void)` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarch7calcGpuERKNS_19GraphicsCalcGpuInfoE` | `al::CloudRendererRayMarch::calcGpu(al::GraphicsCalcGpuInfo const&)` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarch13calcSceneViewEiRKNS_8ViewInfoE` | `al::CloudRendererRayMarch::calcSceneView(int,al::ViewInfo const&)` | :white_check_mark: |
| `_ZN2al21CloudRendererRayMarch13storeSceneUboEPNS_12UniformBlockERKN4sead8Matrix34IfEES7_RKNS3_8Matrix44IfEESB_` | `al::CloudRendererRayMarch::storeSceneUbo(al::UniformBlock *,sead::Matrix34<float> const&,sead::Matrix34<float> const&,sead::Matrix44<float> const&,sead::Matrix44<float> const&)` | :white_check_mark: |
| `_ZNK2al21CloudRendererRayMarch10drawSphereEPN3agl11DrawContextEiPKNS_14SimpleModelEnvE` | `al::CloudRendererRayMarch::drawSphere(agl::DrawContext *,int,al::SimpleModelEnv const*)const` | :white_check_mark: |
| `_ZNK2al21CloudRendererRayMarch13drawSphereEtmEPN3agl11DrawContextE` | `al::CloudRendererRayMarch::drawSphereEtm(agl::DrawContext *)const` | :white_check_mark: |
