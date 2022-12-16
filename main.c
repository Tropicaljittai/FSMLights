#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

int main(){
    int S0 = 0, S1=0, s0 = 0, s1 = 0 , b1 = 0, b2 = 0, o0 = 0, o1 = 0;
    while (true){
        if ( S0 == 0 && S1 == 0){ 
            system("clear");
            printf("\033[0;31m" "      L1: OFF\n\nL2: OFF      L3: OFF\n" "\033[0;37m");  
            printf("\n");
            if(b1 == 0 && b2 == 0){
                printf("\033[0;31m" "  B1: OFF  B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 0 && b2 == 1){
                printf("\033[0;31m" "  B1: OFF  ""\033[32m""B2: ON\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 0){
                printf("\033[32m""  B1: ON  ""\033[0;31m""B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 1){
                printf("\033[32m""  B1: ON  ""B2: ON\n""\033[0;37m");
            }
            printf("Current state = %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("\n");
        }
        else if ( S0 == 0 && S1 == 1){
            system("clear");
            printf("\033[0;33m" "      L1: ON""\033[0;31m""\n\nL2: OFF      L3: OFF\n" "\033[0;37m");  
            printf("\n");
            if(b1 == 0 && b2 == 0){
                printf("\033[0;31m" "  B1: OFF  B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 0 && b2 == 1){
                printf("\033[0;31m" "  B1: OFF  ""\033[32m""B2: ON\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 0){
                printf("\033[32m""  B1: ON  ""\033[0;31m""B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 1){
                printf("\033[32m""  B1: ON  ""B2: ON\n""\033[0;37m");
            }
            printf("Current state = %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("\n");
        }
        else if ( S0 == 1 && S1 == 0){
            system("clear");
            printf("\033[0;31m""      L1: ON""\033[0;31m""\n\n""\033[0;33m""L2: ON       ""\033[0;31m"      "L3: OFF\n""\033[0;37m");   
            printf("\n");
            if(b1 == 0 && b2 == 0){
                printf("\033[0;31m" "  B1: OFF  B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 0 && b2 == 1){
                printf("\033[0;31m" "  B1: OFF  ""\033[32m""B2: ON\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 0){
                printf("\033[32m""  B1: ON  ""\033[0;31m""B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 1){
                printf("\033[32m""  B1: ON  ""B2: ON\n""\033[0;37m");
            }
            printf("Current state = %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("\n");

        }
        else if ( S0 == 1 && S1 == 1){
            system("clear");
            printf("\033[0;31m" "      L1: OFF""\033[0;31m""\n\nL2: OFF      ""\033[0;33m""L3: ON\n" "\033[0;37m");  
            printf("\n");
            if(b1 == 0 && b2 == 0){
                printf("\033[0;31m" "  B1: OFF  B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 0 && b2 == 1){
                printf("\033[0;31m" "  B1: OFF  ""\033[32m""B2: ON\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 0){
                printf("\033[32m""  B1: ON  ""\033[0;31m""B2: OFF\n""\033[0;37m");
            }
            else if(b1 == 1 && b2 == 1){
                printf("\033[32m""  B1: ON  ""B2: ON\n""\033[0;37m");
            }
            printf("Current state = %d%d\n", S0, S1);
            printf("Output: %d%d\n", o0, o1);
            printf("\n");
        }
        b1 = 0;
        b2 = 0;
        int b = get_int("Button (1/2/3(both)): ");
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
        s0 = S0;
        s1 = S1;
        output(s0, s1, &o0, &o1);
    }

    return 0;
}
