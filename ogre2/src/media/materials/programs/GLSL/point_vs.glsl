/*
 * Copyright (C) 2021 Open Source Robotics Foundation
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

#version 330

in vec4 vertex;
in vec3 normal;
uniform mat4 worldViewProj;
uniform float size;
out vec3 ptColor;

out gl_PerVertex
{
  vec4 gl_Position;
};

void main()
{
  // Calculate output position
  gl_Position = worldViewProj * vertex;
  gl_PointSize = size;
  // We're abusing the normal variable to hold per-point colors
  ptColor = normal;
}