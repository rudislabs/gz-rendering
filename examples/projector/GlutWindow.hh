/*
 * Copyright (C) 2023 Open Source Robotics Foundation
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
#ifndef GZ_RENDERING_EXAMPLES_PROJECTOR_GLUTWINDOW_HH_
#define GZ_RENDERING_EXAMPLES_PROJECTOR_GLUTWINDOW_HH_

#include <vector>
#include "gz/rendering/RenderTypes.hh"

namespace ir = gz::rendering;

/// \brief Run the demo and render the scene from the cameras
/// \param[in] _cameras Cameras in the scene
void run(std::vector<gz::rendering::CameraPtr> _cameras);

#endif