#ifndef POINT_H
#define POINT_H

#define POWER_TWO 2

typedef struct Point Point;
struct Point
{
    float x;
    float y;
};


float GetDistance(Point from, Point to);

Point FarthestFromOrigin(Point firstPoint, Point secondPoint);



#endif