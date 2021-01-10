#include "Polygon.h"
#include "realloc.h"

std::ostream& operator<<(std::ostream& stream, const Polygon& polygon) {
    for (size_t i = 0; i < polygon._size; i++) {
        stream << "(" << polygon._vertices[i].first << "," << polygon._vertices[i].second << ") ";
    }
    return stream;
}

Polygon::~Polygon() {
    delete[] _vertices;
}

void Polygon::add_vertex(int x, int y) {
    const auto old_size = _size;
    ++_size;

    _vertices = realloc(_vertices, old_size, _size);
    _vertices[old_size] = Vertex { x, y };
}

const Vertex& Polygon::get_vertex(int index) const {
    return _vertices[index];
}