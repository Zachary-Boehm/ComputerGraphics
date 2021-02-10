#version 410

uniform sampler2D Tex;

in vec2 fragUV;
out vec4 outCol;

void main()
{
    outCol = texture(Tex, fragUV);
}