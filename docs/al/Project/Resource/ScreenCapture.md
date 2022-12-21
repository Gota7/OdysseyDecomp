# ScreenCapture.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# ScreenCapture.o
| Symbol (Demangled) | Symbol (Mangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al12SceneCreatorC1EPKNS_14GameSystemInfoEPNS_18GameDataHolderBaseEPNS_21ScreenCaptureExecutorEPN15alSceneFunction12SceneFactoryEPNS_13AudioDirectorE` | `al::SceneCreator::SceneCreator(al::GameSystemInfo const*,al::GameDataHolderBase *,al::ScreenCaptureExecutor *,alSceneFunction::SceneFactory *,al::AudioDirector *)` | :white_check_mark: |
| `_ZN2al12SceneCreator11createSceneEPKcS2_iS2_bi` | `al::SceneCreator::createScene(char const*,char const*,int,char const*,bool,int)` | :white_check_mark: |
| `_ZN2al12SceneCreator21setSceneAndThreadInitEPNS_5SceneEPKciS4_iPN4sead4HeapE` | `al::SceneCreator::setSceneAndThreadInit(al::Scene *,char const*,int,char const*,int,sead::Heap *)` | :white_check_mark: |
| `_ZN2al12SceneCreator15setSceneAndInitEPNS_5SceneEPKciS4_` | `al::SceneCreator::setSceneAndInit(al::Scene *,char const*,int,char const*)` | :white_check_mark: |
| `_ZN2al12SceneCreator16tryEndInitThreadEv` | `al::SceneCreator::tryEndInitThread(void)` | :white_check_mark: |
| `_ZNK2al12SceneCreator17isExistInitThreadEv` | `al::SceneCreator::isExistInitThread(void)const` | :white_check_mark: |
| `_ZNK2al10FunctorV1MIPNS_5SceneEMS1_FvRKNS_13SceneInitInfoEES5_EclEv` | `al::FunctorV1M<al::Scene *,void (al::Scene::*)(al::SceneInitInfo const&),al::SceneInitInfo const&>::operator()(void)const` | :white_check_mark: |
| `_ZNK2al10FunctorV1MIPNS_5SceneEMS1_FvRKNS_13SceneInitInfoEES5_E5cloneEv` | `al::FunctorV1M<al::Scene *,void (al::Scene::*)(al::SceneInitInfo const&),al::SceneInitInfo const&>::clone(void)const` | :white_check_mark: |
| `_ZN2al10FunctorV1MIPNS_5SceneEMS1_FvRKNS_13SceneInitInfoEES5_ED0Ev` | `al::FunctorV1M<al::Scene *,void (al::Scene::*)(al::SceneInitInfo const&),al::SceneInitInfo const&>::~FunctorV1M()` | :white_check_mark: |
| `_ZN2al13SceneInitInfoC1EPKNS_14GameSystemInfoEPNS_18GameDataHolderBaseEPNS_21ScreenCaptureExecutorEPKciS9_PNS_13AudioDirectorE` | `al::SceneInitInfo::SceneInitInfo(al::GameSystemInfo const*,al::GameDataHolderBase *,al::ScreenCaptureExecutor *,char const*,int,char const*,al::AudioDirector *)` | :white_check_mark: |
| `_ZN2al13ScreenCaptureC2Eii` | `al::ScreenCapture::ScreenCapture(int,int)` | :white_check_mark: |
| `_ZN2al13ScreenCaptureD2Ev` | `al::ScreenCapture::~ScreenCapture()` | :white_check_mark: |
| `_ZN2al13ScreenCaptureD0Ev` | `al::ScreenCapture::~ScreenCapture()` | :white_check_mark: |
| `_ZN2al13ScreenCapture24copyImageFromFrameBufferEPN3agl11DrawContextEPKNS1_12RenderBufferE` | `al::ScreenCapture::copyImageFromFrameBuffer(agl::DrawContext *,agl::RenderBuffer const*)` | :white_check_mark: |
| `_ZNK2al13ScreenCapture16drawCaptureImageEPN3agl11DrawContextEPKNS1_12RenderBufferE` | `al::ScreenCapture::drawCaptureImage(agl::DrawContext *,agl::RenderBuffer const*)const` | :white_check_mark: |
