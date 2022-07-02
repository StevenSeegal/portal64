#ifndef __PORTAL_SURFACE_H__
#define __PORTAL_SURFACE_H__

#include <ultra64.h>

#include "math/transform.h"
#include "math/plane.h"
#include "math/vector2s16.h"

#define FIXED_POINT_PRECISION   8
#define FIXED_POINT_SCALAR      (1 << FIXED_POINT_PRECISION)

#define NO_EDGE_CONNECTION      0xFF

struct SurfaceEdge {
    u8 aIndex;
    u8 bIndex;
    u8 nextEdge;
    u8 prevEdge;
    u8 nextEdgeReverse;
    u8 prevEdgeReverse;
};

struct PortalSurface {
    struct Vector2s16* vertices;
    // first sideCount edges are on the side
    struct SurfaceEdge* edges;

    u8 sideCount;
    u8 edgeCount;
    u8 vertexCount;

    struct Vector3 right;
    struct Vector3 up;
    struct Vector3 corner;

    Vtx* gfxVertices;
    Gfx* triangles;
};

struct PortalSurfaceMapping {
    u8 minPortalIndex;
    u8 maxPortalIndex;
};

int portalSurfaceIsInside(struct PortalSurface* surface, struct Transform* portalAt);

int portalSurfaceGenerate(struct PortalSurface* surface, struct Transform* portalAt, Vtx* vertices, Gfx* triangles);

void deletePortalSurface(struct PortalSurface* portalSurface);

#endif