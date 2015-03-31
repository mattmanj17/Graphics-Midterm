#version 150

uniform mat4 Transform;

in vec4 vPosition;
in vec4 vNormal;
in vec2 vTexCoord;

out vec2 vUV;

void main() 
{
  gl_Position = VertexTransform*vPosition;

  vUV = vTexCoord;
} 
