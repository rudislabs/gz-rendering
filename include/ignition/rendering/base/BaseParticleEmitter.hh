/*
 * Copyright (C) 2020 Open Source Robotics Foundation
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

#ifndef IGNITION_RENDERING_BASE_BASEPARTICLEEMITTER_HH_
#define IGNITION_RENDERING_BASE_BASEPARTICLEEMITTER_HH_

#include "ignition/rendering/base/BaseScene.hh"
#include "ignition/rendering/base/BaseNode.hh"
#include "ignition/rendering/ParticleEmitter.hh"

namespace ignition
{
  namespace rendering
  {
    inline namespace IGNITION_RENDERING_VERSION_NAMESPACE {
    //
    /* \class BaseParticleEmitter BaseParticleEmitter.hh \
     * ignition/rendering/base/BaseParticleEmitter.hh
     */
    /// \brief A base implementation of the ParticleEmitter class
    template <class T>
    class BaseParticleEmitter :
      public virtual ParticleEmitter,
      public virtual T
    {
      /// \brief Constructor
      protected: BaseParticleEmitter();

      /// \brief Destructor
      public: virtual ~BaseParticleEmitter();

      // Documentation inherited
      public: virtual void Init() override;

      // Documentation inherited
      public: virtual void PreRender() override;

      /// \brief Reset the particle emitter visual state
      public: virtual void Reset();

      /// \brief Only the scene can create a particle emitter
      private: friend class BaseScene;
    };

    //////////////////////////////////////////////////
    template <class T>
    BaseParticleEmitter<T>::BaseParticleEmitter()
    {
    }

    //////////////////////////////////////////////////
    template <class T>
    BaseParticleEmitter<T>::~BaseParticleEmitter()
    {
    }

    //////////////////////////////////////////////////
    template <class T>
    void BaseParticleEmitter<T>::Init()
    {
      T::Init();
    }

    //////////////////////////////////////////////////
    template <class T>
    void BaseParticleEmitter<T>::Reset()
    {
    }

    //////////////////////////////////////////////////
    template <class T>
    void BaseParticleEmitter<T>::PreRender()
    {
    }
    }
  }
}
#endif