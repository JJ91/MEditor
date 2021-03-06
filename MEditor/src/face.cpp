#include "face.h"

int Face::id_next = 1;

Face::Face() : halfEdge(nullptr), col(glm::vec3(0,0,1)), id(id_next++)
{
    QListWidgetItem::setText(QString("Face ") + QString::number(id));
}

Face::Face(HalfEdge* h) : halfEdge(h), col(glm::vec3(0,0,1)), id(id_next++)
{
    QListWidgetItem::setText(QString("Face ") + QString::number(id));
}

Face::Face(HalfEdge* h, glm::vec3 _col) : halfEdge(h), col(_col), id(id_next++)
{
    QListWidgetItem::setText(QString("Face ") + QString::number(id));
}
