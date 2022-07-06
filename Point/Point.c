#include <math.h>
#include "Point.h"


float GetDistance(Point from, Point to){
    return sqrt( pow(from.x - to.x, POWER_TWO) + pow(from.y - to.y, POWER_TWO));
}

Point FarthestFromOrigin(Point firstPoint, Point secondPoint){
    struct Point origin = {0, 0};
    float distanceFirstPoint = GetDistance(firstPoint, origin);
    float distanceSecondPoint = GetDistance(secondPoint, origin);

    if(distanceFirstPoint > distanceSecondPoint){
        return firstPoint;
    }
    return secondPoint;
}
