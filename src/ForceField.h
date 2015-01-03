#ifndef NUMPTYPHYSICS_FORCEFIELD_H
#define NUMPTYPHYSICS_FORCEFIELD_H

#include "Canvas.h"
#include "Common.h"
#include "Stroke.h"

#include <string>

class ForceField {
public:
    ForceField(const Rect &rect, const b2Vec2 &force);

    void draw(Canvas &canvas);
    void tick();
    void update(std::vector<Stroke *> &strokes);
    std::string asString();

private:
    Rect rect;
    b2Vec2 force;
    std::vector<b2Vec2> particles;
};

#endif /* NUMPTYPHYSICS_FORCEFIELD_H */