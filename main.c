#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

int main(){
    int S0 = 0, S1=0,s0 = 0, s1 = 0, b = 0 , b1 = 0, b2 = 0, o0 = 0, o1 = 0;
    while (true){
        if ( S0 == 0 && S1 == 0){ 
            system("clear");
            printf("\033[0;31m" "L1: OFF\nL2: OFF\nL3: OFF\n" "\033[0;37m");  
        }
        else if ( S0 == 0 && S1 == 1){
            system("clear");
            printf("\033[0;33m" "L1: ON\n");
            printf("\033[0;31m" "L2: OFF\nL3: OFF\n" "\033[0;37m"); 
        }
        else if ( S0 == 1 && S1 == 0){
            system("clear");
            printf("\033[0;31m" "L1: OFF\n");
            printf("\033[0;33m" "L2: ON\n");
            printf("\033[0;31m" "L3: OFF\n" "\033[0;37m"); 
        }
        else if ( S0 == 1 && S1 == 1){
            system("clear");
            printf("\033[0;31m" "L1: OFF\nL2: OFF\n");
            printf("\033[0;33m" "L3: ON\n" "\033[0;37m");
        }
        b1 = 0;
        b2 = 0;
        printf("button (1/2/3(both)): ");
        scanf("%d", &b);
        if (b == 1){
            b1 = 1;
        }
        else if (b == 2){
            b2 = 1;
        }
        else if (b == 3){
            b1 = 1;
            b2 = 1;
        }
        else{
            b = 0;
        }
        state(s0, s1, b1, b2, &S0, &S1);
        o0 = output0(s0);
        o1 = output1(s1);
        s0 = S0;
        s1 = S1;
    }

    return 0;

}