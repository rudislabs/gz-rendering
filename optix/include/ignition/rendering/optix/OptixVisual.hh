/*
 * Copyright (C) 2015 Open Source Robotics Foundation
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
#ifndef IGNITION_RENDERING_OPTIX_OPTIXVISUAL_HH_
#define IGNITION_RENDERING_OPTIX_OPTIXVISUAL_HH_

#include "ignition/rendering/base/BaseVisual.hh"
#include "ignition/rendering/optix/OptixNode.hh"
#include "ignition/rendering/optix/OptixRenderTypes.hh"

namespace ignition
{
  namespace rendering
  {
    class IGNITION_RENDERING_OPTIX_VISIBLE OptixVisual :
      public BaseVisual<OptixNode>
    {
      protected: OptixVisual();

      public: virtual ~OptixVisual();

      public: virtual math::Vector3d LocalScale() const;

      public: virtual bool InheritScale() const;

      public: virtual void SetInheritScale(bool _inherit);

      public: virtual optix::Group OptixGroup() const;

      public: virtual optix::Acceleration OptixAccel() const;

      public: virtual void PreRender();

      protected: virtual NodeStorePtr Children() const;

      protected: virtual GeometryStorePtr Geometries() const;

      protected: virtual bool AttachChild(NodePtr _child);

      protected: virtual bool DetachChild(NodePtr _child);

      protected: virtual bool AttachGeometry(GeometryPtr _geometry);

      protected: virtual bool DetachGeometry(GeometryPtr _geometry);

      protected: virtual void SetLocalScaleImpl(
                     const math::Vector3d &_scale);

      protected: virtual void Init();

      private: void CreateStorage();

      private: OptixVisualPtr SharedThis();

      protected: OptixNodeStorePtr children;

      protected: OptixGeometryStorePtr geometries;

      protected: math::Vector3d scale;

      protected: bool inheritScale;

      private: friend class OptixScene;
    };
  }
}
#endif