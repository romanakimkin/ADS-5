// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if(value <= 1){
        return false
    }
    if(value == 2){
        return true
    }
    int a = 0;
    for(int i = 2; i < value; i++){
        if ((value % i) == 0){
            a = 1;
            break;
        }
    }
    if(a == 0){
        return true;
    } else {
        return false;
    }
}

uint64_t nPrime(uint64_t n) {
    int b = 0; c = 0;
    while(true){
            b++;
        if(checkPrime(b))
            c++;
        if(c == n)
            return b;
    }
    return c;
}

uint64_t nextPrime(uint64_t value) {
    while(true){
        value++;
        if(checkPrime(value)){
            return value;
        }
    }
    return value;
}

uint64_t sumPrime(uint64_t hbound) {
    int sum = 0;
    for(int i = 0; i < hbound; i++){
    if(checkPrime(i))
        sum += i;
    return sum;
    }
}
