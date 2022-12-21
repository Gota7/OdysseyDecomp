# ViewRenderer.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# ViewRenderer.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al12ViewRendererC1EPNS_18GraphicsSystemInfoEPNS_15ExecuteDirectorEPNS_12EffectSystemEPNS_15SceneCameraInfoE` | `al::ViewRenderer::ViewRenderer(al::GraphicsSystemInfo *,al::ExecuteDirector *,al::EffectSystem *,al::SceneCameraInfo *)` | :x: |
| `_ZN2al12ViewRendererD2Ev` | `al::ViewRenderer::~ViewRenderer()` | :x: |
| `_ZN2al12ViewRenderer12clearRequestEv` | `al::ViewRenderer::clearRequest(void)` | :x: |
| `_ZN2al12ViewRenderer8calcViewEiPKN4sead6CameraEPKNS_10ProjectionE` | `al::ViewRenderer::calcView(int,sead::Camera const*,al::Projection const*)` | :x: |
| `_ZN2al12ViewRenderer15preDrawGraphicsEv` | `al::ViewRenderer::preDrawGraphics(void)` | :x: |
| `_ZNK2al12ViewRenderer8drawViewEiPNS_14DrawSystemInfoERKNS_10ProjectionERKN4sead6CameraEPKN3agl12RenderBufferERKNS6_8ViewportEbbb` | `al::ViewRenderer::drawView(int,al::DrawSystemInfo *,al::Projection const&,sead::Camera const&,agl::RenderBuffer const*,sead::Viewport const&,bool,bool,bool)const` | :x: |
| `_ZNK2al12ViewRenderer8drawViewERKNS_8ViewInfoEPNS_14DrawSystemInfoERKNS_10ProjectionERKN4sead6CameraEPKN3agl12RenderBufferERKNS9_8ViewportEbbb` | `al::ViewRenderer::drawView(al::ViewInfo const&,al::DrawSystemInfo *,al::Projection const&,sead::Camera const&,agl::RenderBuffer const*,sead::Viewport const&,bool,bool,bool)const` | :x: |
| `_ZNK2al12ViewRenderer10drawSystemERKNS_18GraphicsRenderInfoE` | `al::ViewRenderer::drawSystem(al::GraphicsRenderInfo const&)const` | :x: |
| `_ZNK2al12ViewRenderer10drawMirrorEPN3agl11DrawContextEiPNS_15RenderVariablesE` | `al::ViewRenderer::drawMirror(agl::DrawContext *,int,al::RenderVariables *)const` | :x: |
| `_ZNK2al12ViewRenderer7drawHdrERKNS_18GraphicsRenderInfoERKNS_15RenderVariablesEbb` | `al::ViewRenderer::drawHdr(al::GraphicsRenderInfo const&,al::RenderVariables const&,bool,bool)const` | :x: |
| `_ZNK2al12ViewRenderer22captureIndirectTextureEPN3agl11DrawContextEPKNS1_11TextureDataES6_` | `al::ViewRenderer::captureIndirectTexture(agl::DrawContext *,agl::TextureData const*,agl::TextureData const*)const` | :x: |
| `_ZN2al12ViewRenderer29startForwardPlayerScreenFaderEiif` | `al::ViewRenderer::startForwardPlayerScreenFader(int,int,float)` | :x: |
| `_ZN2al12ViewRenderer27endForwardPlayerScreenFaderEi` | `al::ViewRenderer::endForwardPlayerScreenFader(int)` | :x: |
| `_ZN22alViewRendererFunction32createLinearDepthFromDepthBufferEPN3agl11DrawContextEPKN2al12ShaderHolderEPKNS0_11TextureDataES9_` | `alViewRendererFunction::createLinearDepthFromDepthBuffer(agl::DrawContext *,al::ShaderHolder const*,agl::TextureData const*,agl::TextureData const*)` | :x: |
