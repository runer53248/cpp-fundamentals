#pragma once

int fibonacci_iterative(int sequence) {
    if(sequence < 2){
        return sequence;
    }
    int result = 0;
    int prePreFibonaci = 0;
    int preFibonaci = 1;
    for(int i = 2; i <= sequence; ++i){
        result = prePreFibonaci + preFibonaci;
        prePreFibonaci = preFibonaci;
        preFibonaci = result;
    }
    return result;
}

int fibonacci_recursive(int sequence) {
    if(sequence < 2){
        return sequence;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}