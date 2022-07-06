#include "main.h"
int main(){

    return 0;
}

void MamasEmpire(size_t period){
    for (size_t i = 0; i <= period; i++)
    {
        printf("Mamas %d Empire!\n", i);
    }
}


float GetSqrt(float number){

    float highEnd = max(1, number);
    float lowEnd = min(1, number);
    float mid;
    for(int i = 0; i< SQRT_ITERATIONS; i++){
        mid = (highEnd + lowEnd) /2;
        float powerByTwo = mid * mid; 
        if(powerByTwo == number) return mid;
        else if(powerByTwo > number) highEnd = mid;
        else lowEnd = mid;
    }
    return mid;
}