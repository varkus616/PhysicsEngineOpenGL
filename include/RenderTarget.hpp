#ifndef RENDER_TARGET_HPP
#define RENDER_TARGET_HPP

class Color;
class Renderable;
class RenderData;
class VertexBuffer;
class VertexArray;
class IndexBuffer;
class Mesh;

class RenderTarget {
public:
    virtual void clear(const Color& color) = 0;
    virtual void draw(Renderable& renderable, RenderData& data) = 0;
    virtual void draw(const VertexArray& VAO, RenderData& data) = 0;
    //virtual void draw(const float* verticies, unsigned verticies_size, const int* indicies, unsigned indicies_size, RenderData& data);
    virtual void display() = 0;
};


#endif // !RENDER_TARGET_HPP
