# DeferredRendering.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# DeferredRendering.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al17DeferredRenderingC2EPNS_18GraphicsSystemInfoEi` | `al::DeferredRendering::DeferredRendering(al::GraphicsSystemInfo *,int)` | :x: |
| `_ZN2al17DeferredRenderingD2Ev` | `al::DeferredRendering::~DeferredRendering()` | :x: |
| `_ZN2al17DeferredRendering20prepareRenderGBufferEPN3agl11DrawContextEPNS_12GBufferArrayEiRKN4sead8Matrix34IfEERKNS6_8Matrix44IfEEffffRKNS6_7Vector2IfEE` | `al::DeferredRendering::prepareRenderGBuffer(agl::DrawContext *,al::GBufferArray *,int,sead::Matrix34<float> const&,sead::Matrix44<float> const&,float,float,float,float,sead::Vector2<float> const&)` | :x: |
| `_ZN2al17DeferredRendering16endRenderGBufferEPN3agl11DrawContextE` | `al::DeferredRendering::endRenderGBuffer(agl::DrawContext *)` | :x: |
| `_ZN2al17DeferredRendering16drawLightPrePassEPN3agl11DrawContextEPNS_12GBufferArrayEiRKNS1_17RenderTargetDepthE` | `al::DeferredRendering::drawLightPrePass(agl::DrawContext *,al::GBufferArray *,int,agl::RenderTargetDepth const&)` | :x: |
| `_ZN2al17DeferredRendering29drawLightPrePassReducedBufferEPN3agl11DrawContextEPNS_12GBufferArrayEiRKNS1_17RenderTargetDepthEPKNS1_11TextureDataE` | `al::DeferredRendering::drawLightPrePassReducedBuffer(agl::DrawContext *,al::GBufferArray *,int,agl::RenderTargetDepth const&,agl::TextureData const*)` | :x: |
| `_ZN2al17DeferredRendering8drawSSAOEPN3agl11DrawContextEiPKNS1_11TextureDataERKN4sead8Matrix34IfEERKNS7_8Matrix44IfEE` | `al::DeferredRendering::drawSSAO(agl::DrawContext *,int,agl::TextureData const*,sead::Matrix34<float> const&,sead::Matrix44<float> const&)` | :x: |
| `_ZN2al17DeferredRendering19drawDeferredShadingEPN3agl11DrawContextERKNS1_12RenderBufferERKN4sead8ViewportEPNS_14ShadowDirectorERKNS7_8Matrix34IfEERKNS7_8Matrix44IfEEPNS_12GBufferArrayEiNS_11SkyFillTypeEPKNS_14SimpleModelEnvEPKNS1_11TextureDataE` | `al::DeferredRendering::drawDeferredShading(agl::DrawContext *,agl::RenderBuffer const&,sead::Viewport const&,al::ShadowDirector *,sead::Matrix34<float> const&,sead::Matrix44<float> const&,al::GBufferArray *,int,al::SkyFillType,al::SimpleModelEnv const*,agl::TextureData const*)` | :x: |
| `_ZN2al17DeferredRendering22prepareDeferredShadingEPN3agl11DrawContextERKN4sead8Matrix34IfEERKNS4_8Matrix44IfEEPNS_12GBufferArrayEiPNS_14ShadowDirectorEPKNS_14SimpleModelEnvEPKNS1_11TextureDataE` | `al::DeferredRendering::prepareDeferredShading(agl::DrawContext *,sead::Matrix34<float> const&,sead::Matrix44<float> const&,al::GBufferArray *,int,al::ShadowDirector *,al::SimpleModelEnv const*,agl::TextureData const*)` | :x: |
| `_ZN2al17DeferredRendering15preDrawGraphicsEv` | `al::DeferredRendering::preDrawGraphics(void)` | :x: |
| `_ZNK2al18EtmTextureRenderer15createEtmMtxUboEv` | `al::EtmTextureRenderer::createEtmMtxUbo(void)const` | :x: |
| `_ZN2al18EtmTextureRendererC2EPNS_18GraphicsSystemInfoE` | `al::EtmTextureRenderer::EtmTextureRenderer(al::GraphicsSystemInfo *)` | :x: |
| `_ZN2al18EtmTextureRendererD2Ev` | `al::EtmTextureRenderer::~EtmTextureRenderer()` | :x: |
| `_ZN2al18EtmTextureRenderer8finalizeEv` | `al::EtmTextureRenderer::finalize(void)` | :x: |
| `_ZN2al18EtmTextureRenderer16prepareModelDrawEv` | `al::EtmTextureRenderer::prepareModelDraw(void)` | :x: |
| `_ZNK2al18EtmTextureRenderer10setUniformEPN3agl11DrawContextEPKNS1_13ShaderProgramE` | `al::EtmTextureRenderer::setUniform(agl::DrawContext *,agl::ShaderProgram const*)const` | :x: |
| `_ZNK2al18EtmTextureRenderer13trySetSamplerEPN3agl11DrawContextEPKNS1_13ShaderProgramE` | `al::EtmTextureRenderer::trySetSampler(agl::DrawContext *,agl::ShaderProgram const*)const` | :x: |
| `_ZN2al18EtmTextureRenderer7calcGpuERKN4sead7Vector3IfEE` | `al::EtmTextureRenderer::calcGpu(sead::Vector3<float> const&)` | :x: |
| `_ZNK2al18EtmTextureRenderer12setEtmMtxUboEPNS_12UniformBlockERKN4sead8Matrix34IfEES7_` | `al::EtmTextureRenderer::setEtmMtxUbo(al::UniformBlock *,sead::Matrix34<float> const&,sead::Matrix34<float> const&)const` | :x: |
| `_ZNK2al18EtmTextureRenderer12getShadowMtxEv` | `al::EtmTextureRenderer::getShadowMtx(void)const` | :x: |
| `_ZNK2al18EtmTextureRenderer17getFetchShadowMtxEv` | `al::EtmTextureRenderer::getFetchShadowMtx(void)const` | :x: |
| `_ZN2al18EtmTextureRenderer9undefAABBEv` | `al::EtmTextureRenderer::undefAABB(void)` | :x: |
| `_ZN2al18EtmTextureRenderer14extendWithAABBERKN4sead9BoundBox3IfEE` | `al::EtmTextureRenderer::extendWithAABB(sead::BoundBox3<float> const&)` | :x: |
| `_ZN2al18EtmTextureRenderer15extendWithPointERKN4sead7Vector3IfEE` | `al::EtmTextureRenderer::extendWithPoint(sead::Vector3<float> const&)` | :x: |
| `_ZNK2al18EtmTextureRenderer16getShadowViewMtxEv` | `al::EtmTextureRenderer::getShadowViewMtx(void)const` | :x: |
| `_ZNK2al18EtmTextureRenderer16getShadowProjMtxEv` | `al::EtmTextureRenderer::getShadowProjMtx(void)const` | :x: |
| `_ZN2al8FarClearC2Ev` | `al::FarClear::FarClear(void)` | :x: |
| `_ZN2al8FarClearD2Ev` | `al::FarClear::~FarClear()` | :x: |
| `_ZNK2al8FarClear12drawFarClearEPN3agl11DrawContextEbRKN4sead7Color4fE` | `al::FarClear::drawFarClear(agl::DrawContext *,bool,sead::Color4f const&)const` | :x: |
| `_ZNK2al8FarClear19drawFarClearGBufferEPN3agl11DrawContextEPNS_12GBufferArrayE` | `al::FarClear::drawFarClearGBuffer(agl::DrawContext *,al::GBufferArray *)const` | :x: |
| `_ZN2al19FullScreenQuadModelC2Ev` | `al::FullScreenQuadModel::FullScreenQuadModel(void)` | :x: |
| `_ZN2al19FullScreenQuadModelD2Ev` | `al::FullScreenQuadModel::~FullScreenQuadModel()` | :x: |
| `_ZN3agl11GPUMemBlockIfED2Ev` | `agl::GPUMemBlock<float>::~GPUMemBlock()` | :x: |
| `_ZNK2al19FullScreenQuadModel8drawQuadEPN3agl11DrawContextE` | `al::FullScreenQuadModel::drawQuad(agl::DrawContext *)const` | :x: |
| `_ZN3agl11GPUMemBlockIfED0Ev` | `agl::GPUMemBlock<float>::~GPUMemBlock()` | :x: |
| `_ZN3agl12GPUMemBlockTIfED2Ev` | `agl::GPUMemBlockT<float>::~GPUMemBlockT()` | :x: |
| `_ZN3agl12GPUMemBlockTIfED0Ev` | `agl::GPUMemBlockT<float>::~GPUMemBlockT()` | :x: |
| `_ZN2al18FullScreenTriangleC2Ev` | `al::FullScreenTriangle::FullScreenTriangle(void)` | :x: |
| `_ZN2al18FullScreenTriangleD2Ev` | `al::FullScreenTriangle::~FullScreenTriangle()` | :x: |
| `_ZNK2al18FullScreenTriangle7drawFarEPN3agl11DrawContextE` | `al::FullScreenTriangle::drawFar(agl::DrawContext *)const` | :x: |
| `_ZNK2al18FullScreenTriangle14drawTriReverseEPN3agl11DrawContextE` | `al::FullScreenTriangle::drawTriReverse(agl::DrawContext *)const` | :x: |
| `_ZNK2al18FullScreenTriangle7drawTriEPN3agl11DrawContextE` | `al::FullScreenTriangle::drawTri(agl::DrawContext *)const` | :x: |
| `_ZNK2al18FullScreenTriangle8drawNearEPN3agl11DrawContextE` | `al::FullScreenTriangle::drawNear(agl::DrawContext *)const` | :x: |
| `_ZN2al12GBufferArrayC1EPKN3agl17RenderTargetDepthEPKNS_18GraphicsSystemInfoE` | `al::GBufferArray::GBufferArray(agl::RenderTargetDepth const*,al::GraphicsSystemInfo const*)` | :x: |
| `_ZN4sead9SafeArrayIN2al7GBufferELi5EEC2Ev` | `sead::SafeArray<al::GBuffer,5>::SafeArray(void)` | :x: |
| `_ZN2al12GBufferArrayD2Ev` | `al::GBufferArray::~GBufferArray()` | :x: |
| `_ZN2al12GBufferArray8freeGBufEi` | `al::GBufferArray::freeGBuf(int)` | :x: |
| `_ZN4sead9SafeArrayIN2al7GBufferELi5EED2Ev` | `sead::SafeArray<al::GBuffer,5>::~SafeArray()` | :x: |
| `_ZN2al12GBufferArray12allocGBufferEPN3agl11DrawContextEi` | `al::GBufferArray::allocGBuffer(agl::DrawContext *,int)` | :x: |
| `_ZN2al12GBufferArray12clearGBufferEPN3agl11DrawContextE` | `al::GBufferArray::clearGBuffer(agl::DrawContext *)` | :x: |
| `_ZN2al12GBufferArray31createLightBufferAndCalcContextEPN3agl11DrawContextEPNS1_4lght12LightPrePassEiiiRKN4sead6CameraEPKNS_10ProjectionE` | `al::GBufferArray::createLightBufferAndCalcContext(agl::DrawContext *,agl::lght::LightPrePass *,int,int,int,sead::Camera const&,al::Projection const*)` | :x: |
| `_ZNK2al12GBufferArray18getGBufLightBufferEv` | `al::GBufferArray::getGBufLightBuffer(void)const` | :x: |
| `_ZNK2al12GBufferArray15getGBufNrmWorldEv` | `al::GBufferArray::getGBufNrmWorld(void)const` | :x: |
| `_ZNK2al12GBufferArray16getGBufDepthViewEv` | `al::GBufferArray::getGBufDepthView(void)const` | :x: |
| `_ZNK2al12GBufferArray16getGBufBaseColorEv` | `al::GBufferArray::getGBufBaseColor(void)const` | :x: |
| `_ZNK2al12GBufferArray16getGBufMotionVecEv` | `al::GBufferArray::getGBufMotionVec(void)const` | :x: |
| `_ZNK2al12GBufferArray21getGBufLightBufferTexEv` | `al::GBufferArray::getGBufLightBufferTex(void)const` | :x: |
| `_ZNK2al12GBufferArray18getGBufNrmWorldTexEv` | `al::GBufferArray::getGBufNrmWorldTex(void)const` | :x: |
| `_ZNK2al12GBufferArray19getGBufDepthViewTexEv` | `al::GBufferArray::getGBufDepthViewTex(void)const` | :x: |
| `_ZNK2al12GBufferArray19getGBufBaseColorTexEv` | `al::GBufferArray::getGBufBaseColorTex(void)const` | :x: |
| `_ZNK2al12GBufferArray19getGBufMotionVecTexEv` | `al::GBufferArray::getGBufMotionVecTex(void)const` | :x: |
| `_ZNK2al12GBufferArray26activateSamplerLightBufferEPN3agl11DrawContextERKNS1_15SamplerLocationEb` | `al::GBufferArray::activateSamplerLightBuffer(agl::DrawContext *,agl::SamplerLocation const&,bool)const` | :x: |
| `_ZNK2al12GBufferArray23activateSamplerNrmWolrdEPN3agl11DrawContextERKNS1_15SamplerLocationEb` | `al::GBufferArray::activateSamplerNrmWolrd(agl::DrawContext *,agl::SamplerLocation const&,bool)const` | :x: |
| `_ZNK2al12GBufferArray24activateSamplerDepthViewEPN3agl11DrawContextERKNS1_15SamplerLocationEb` | `al::GBufferArray::activateSamplerDepthView(agl::DrawContext *,agl::SamplerLocation const&,bool)const` | :x: |
| `_ZNK2al12GBufferArray24activateSamplerBaseColorEPN3agl11DrawContextERKNS1_15SamplerLocationEb` | `al::GBufferArray::activateSamplerBaseColor(agl::DrawContext *,agl::SamplerLocation const&,bool)const` | :x: |
| `_ZNK2al12GBufferArray24activateSamplerMotionVecEPN3agl11DrawContextERKNS1_15SamplerLocationEb` | `al::GBufferArray::activateSamplerMotionVec(agl::DrawContext *,agl::SamplerLocation const&,bool)const` | :x: |
| `_ZN2al12GBufferArray16freeGBufNrmWorldEv` | `al::GBufferArray::freeGBufNrmWorld(void)` | :x: |
| `_ZN2al12GBufferArray17freeGBufDepthViewEv` | `al::GBufferArray::freeGBufDepthView(void)` | :x: |
| `_ZN2al12GBufferArray17freeGBufBaseColorEv` | `al::GBufferArray::freeGBufBaseColor(void)` | :x: |
| `_ZN2al12GBufferArray17freeGBufMotionVecEv` | `al::GBufferArray::freeGBufMotionVec(void)` | :x: |
| `_ZN2al12GBufferArray16bindRenderBufferEPN3agl11DrawContextEi` | `al::GBufferArray::bindRenderBuffer(agl::DrawContext *,int)` | :x: |
| `_ZN2al12GBufferArray24bindRenderBufferLightBufEPN3agl11DrawContextE` | `al::GBufferArray::bindRenderBufferLightBuf(agl::DrawContext *)` | :x: |
| `_ZN2al12GBufferArray29bindRenderBufferAndContextMRTEPN3agl11DrawContextE` | `al::GBufferArray::bindRenderBufferAndContextMRT(agl::DrawContext *)` | :x: |
| `_ZN2al9HdrEncodeC2Ev` | `al::HdrEncode::HdrEncode(void)` | :x: |
| `_ZN2al9HdrEncodeD2Ev` | `al::HdrEncode::~HdrEncode()` | :x: |
| `_ZN2al9HdrEncode7calcGpuEv` | `al::HdrEncode::calcGpu(void)` | :x: |
| `_ZNK2al9HdrEncode15setUniformBlockEPKN3agl13ShaderProgramEPNS1_11DrawContextE` | `al::HdrEncode::setUniformBlock(agl::ShaderProgram const*,agl::DrawContext *)const` | :x: |
| `_ZNK2al9HdrEncode15setUniformBlockEPN3agl11DrawContextERKNS1_14ShaderLocationE` | `al::HdrEncode::setUniformBlock(agl::DrawContext *,agl::ShaderLocation const&)const` | :x: |
