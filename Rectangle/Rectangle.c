#include "Rectangle.h"

float GetRectangleArea(Rectangle rect){
    return rect.width * rect.height;
}

Rectangle GetBiggerArea(Rectangle firstRect, Rectangle secondRect){
    float areaFirstRect = GetRectangleArea(firstRect);
    float areaSecondRect = GetRectangleArea(secondRect);
    if(areaFirstRect > areaSecondRect){
        return firstRect;
    }
    return secondRect;
}

int CanFitIn(Rectangle firstRect, Rectangle secondRect);