#ifndef VERTEX_H
#define VERTEX_H

#include "la.h"
#include "halfedge.h"
#include <QListWidgetItem>

class HalfEdge;

class Vertex : public QListWidgetItem
{
public:
    Vertex();
    Vertex(glm::vec3 pos);

    glm::vec3 position;
    HalfEdge* halfEdge;
    int id;

    static int id_next;
};

#endif // VERTEX_H
