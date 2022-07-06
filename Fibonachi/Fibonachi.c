#include "Fibonachi.h"

unsigned GetFibonachiByIndex(unsigned index){
    if(index <= 2){
        return 1;
    }
    return GetFibonachiByIndex(index - 1) + GetFibonachiByIndex(index -2);
}

int GetIndexByFibonachi(unsigned fibonachiNumber){

    unsigned index = 2;
    unsigned currentValue = FIRST_FIBONACHI_VALUES;
    unsigned previousValue = FIRST_FIBONACHI_VALUES;

    while(currentValue < fibonachiNumber){
        unsigned tempCurrentValue = currentValue;
        currentValue += previousValue;
        previousValue = tempCurrentValue;
        index++;
    }

    if(currentValue == fibonachiNumber) return index;

    return -1;
}