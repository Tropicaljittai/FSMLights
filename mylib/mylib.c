#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void state(int a, int b, int c, int d, int* S0, int* S1){
    int i = a & !c & !d;
    int j = a & c & d;
    int k = !a & b & !c & d;
    int l = !a & b & c & !d;
    *S0 = i | j | k | l;
    int q = !a & d;
    int w = b & !c & !d;
    int e = b & c & d;
    int r = !a & !b & c;
    *S1 = q | w | e | r;
}

int output0(int s0){
    return s0;
}

int output1(int s1){
    return s1;
}