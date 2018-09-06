/*
 * Copyright (C) 2018 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef IGNITION_RENDERING_OGRE2_OGRE2INCLUDES_HH_
#define IGNITION_RENDERING_OGRE2_OGRE2INCLUDES_HH_

// This disables warning messages for OGRE
#pragma GCC system_header

// This prevents some deprecation #warning messages on OSX 10.9
#pragma clang diagnostic ignored "-W#warnings"

#include <Ogre.h>
#include <OgreBillboard.h>
#include <OgreImageCodec.h>
#include <OgreMovableObject.h>
#include <OgreRenderable.h>
#include <OgreRenderWindow.h>
#include <OgrePlugin.h>
#include <OgreDataStream.h>
#include <OgreLogManager.h>
#include <OgreWindowEventUtilities.h>
#include <OgreSceneQuery.h>
#include <OgreRoot.h>
#include <OgreItem.h>
#include <OgreSceneManager.h>
#include <OgreSceneNode.h>
#include <OgreVector3.h>
#include <OgreManualObject.h>
#include <OgreMaterialManager.h>
#include <OgreMatrix4.h>
#include <OgreColourValue.h>
#include <OgreQuaternion.h>
#include <OgreMesh2.h>
#include <OgreMeshManager2.h>
#include <OgreHardwareBufferManager.h>
#include <OgreCamera.h>
#include <OgreNode.h>
#include <OgreSimpleRenderable.h>
#include <OgreFrameListener.h>
#include <OgreTexture.h>
#include <OgreRectangle2D.h>
#include <OgreRenderObjectListener.h>
#include <OgreTechnique.h>
#include <OgrePass.h>
#include <OgreOldSkeletonManager.h>
#include <OgreTextureUnitState.h>
#include <OgreGpuProgramManager.h>
#include <OgreHighLevelGpuProgramManager.h>
#include <OgreHardwarePixelBuffer.h>
#include <OgreShadowCameraSetupPSSM.h>

#include <OgreHlmsManager.h>
#include <OgreHlmsTextureManager.h>
#include <Hlms/Unlit/OgreHlmsUnlit.h>
#include <Hlms/Pbs/OgreHlmsPbs.h>


#include <Compositor/OgreCompositorManager2.h>
#include <Compositor/OgreCompositorWorkspace.h>

#include <Overlay/OgreOverlayPrerequisites.h>
#include <Overlay/OgreOverlayManager.h>
#include <Overlay/OgreOverlayElement.h>
#include <Overlay/OgreOverlayContainer.h>
#include <Overlay/OgreFontManager.h>
#include <Overlay/OgreOverlaySystem.h>

// TODO(anyone): enable when ogre 2.1 fully supports paging
// and terrain components
// #include <Paging/OgrePageManager.h>
// #include <Paging/OgrePagedWorld.h>
// #include <Terrain/OgreTerrainPaging.h>
// #include <Terrain/OgreTerrainMaterialGeneratorA.h>
// #include <Terrain/OgreTerrain.h>
// #include <Terrain/OgreTerrainGroup.h>

#endif
