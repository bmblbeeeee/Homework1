#include "Header.h"

Counter::Counter() {
    value = 0;  
}

Counter::Counter(int initialValue) {
    value = initialValue;  
}

void Counter::increase() {
    value++;
}

void Counter::decrease() {
    value--;
}

void Counter::reset() {
    value = 0;
}

int Counter::getValue() {
    return value;
}