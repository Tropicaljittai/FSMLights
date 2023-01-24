#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "mylib/mylib.h"

const char lights00[] =
"    ____________________________\n\
    |     _____       _____    |\n\
    |   .'\033[100m     \033[0m`.   .'\033[100m     \033[0m`.  |\n\
    |   |\033[100m +^^^+ \033[0m|   |\033[100m +^^^+ \033[0m|  |\n\
    |   `.\033[100m \\./ \033[0m.'   `.\033[100m \\./ \033[0m.'  |\n\
    |     |_|_|       |_|_|    |\n\
    |     (___)       (___)    |\n\
    |  \033[0;31m  L2: OFF     L3: OFF \033[0;37m  |\n\
    |           _____          |\n\
    |         .'\033[100m     \033[0m`.        |\n\
    |         |\033[100m +^^^+ \033[0m|        |\n\
    |         `.\033[100m \\./ \033[0m.'        |\n\
    |           |_|_|          |\n\
    |           (___)          |\n\
    |  \033[0;31m        L1: OFF\033[0;37m         |\
";

const char lights01[] =
"    ___________________________\n\
    |     _____       _____    |\n\
    |   .'\033[100m     \033[0m`.   .'\033[100m     \033[0m`.  |\n\
    |   |\033[100m +^^^+ \033[0m|   |\033[100m +^^^+ \033[0m|  |\n\
    |   `.\033[100m \\./ \033[0m.'   `.\033[100m \\./ \033[0m.'  |\n\
    |     |_|_|       |_|_|    |\n\
    |     (___)       (___)    |\n\
    |  \033[0;31m  L2: OFF     L3: OFF \033[0;37m  |\n\
    |           _____          |\n\
    |         .'\033[43m     \033[0m`.        |\n\
    |         |\033[43m +^^^+ \033[0m|        |\n\
    |         `.\033[43m \\./ \033[0m.'        |\n\
    |           |_|_|          |\n\
    |           (___)          |\n\
    |  \033[0;33m        L1: ON\033[0;37m          |\
";

const char lights10[] =
"    ___________________________\n\
    |     _____       _____    |\n\
    |   .'\033[43m     \033[0m`.   .'\033[100m     \033[0m`.  |\n\
    |   |\033[43m +^^^+ \033[0m|   |\033[100m +^^^+ \033[0m|  |\n\
    |   `.\033[43m \\./ \033[0m.'   `.\033[100m \\./ \033[0m.'  |\n\
    |     |_|_|       |_|_|    |\n\
    |     (___)       (___)    |\n\
    |  \033[0;33m  L2: ON\033[0;31m      L3: OFF \033[0;37m  |\n\
    |           _____          |\n\
    |         .'\033[100m     \033[0m`.        |\n\
    |         |\033[100m +^^^+ \033[0m|        |\n\
    |         `.\033[100m \\./ \033[0m.'        |\n\
    |           |_|_|          |\n\
    |           (___)          |\n\
    |  \033[0;31m        L1: OFF\033[0;37m         |\
";

const char lights11[] =
"    ___________________________\n\
    |     _____       _____    |\n\
    |   .'\033[100m     \033[0m`.   .'\033[43m     \033[0m`.  |\n\
    |   |\033[100m +^^^+ \033[0m|   |\033[43m +^^^+ \033[0m|  |\n\
    |   `.\033[100m \\./ \033[0m.'   `.\033[43m \\./ \033[0m.'  |\n\
    |     |_|_|       |_|_|    |\n\
    |     (___)       (___)    |\n\
    |  \033[0;31m  L2: OFF\033[0;31m     \033[0;33m L3: ON \033[0;37m  |\n\
    |           _____          |\n\
    |         .'\033[100m     \033[0m`.        |\n\
    |         |\033[100m +^^^+ \033[0m|        |\n\
    |         `.\033[100m \\./ \033[0m.'        |\n\
    |           |_|_|          |\n\
    |           (___)          |\n\
    |  \033[0;31m        L1: OFF\033[0;37m         |\
";

const char button00[] =
    "    |                          |\n\
    |       \U0001F534       \U0001F534        |\n\
    |     \033[0;31mB1: OFF  B2: OFF\033[0;37m     |\n\
    |                          |\n\
    |__________________________|\n\
";

const char button10[] =
"    |                          |\n\
    |       \U0001F7E2       \U0001F534        |\n\
    |     \033[32mB1: ON\033[0;31m   B2: OFF\033[0;37m     |\n\
    |                          |\n\
    |__________________________|\n\
";

const char button01[] =
    "    |                          |\n\
    |       \U0001F534       \U0001F534        |\n\
    |     \033[0;31mB1: OFF  \033[32mB2: ON\033[0;37m      |\n\
    |                          |\n\
    |__________________________|\n\
";

const char button11[] =
    "    |                          |\n\
    |       \U0001F7E2       \U0001F7E2        |\n\
    |     \033[32mB1: ON   B2: ON \033[0;37m     |\n\
    |                          |\n\
    |__________________________|\n\
";

int main(){
    int S0 = 0, S1=0, s0 = 0, s1 = 0 , b1 = 0, b2 = 0, o0 = 0, o1 = 0;
    while (true){
        if ( S0 == 0 && S1 == 0){ 
            system("clear");
            fputs(lights00,stdout);
            printf("\n");
            if(b1 == 0 && b2 == 0){
                fputs(button00,stdout);
            }
            else if(b1 == 0 && b2 == 1){
                fputs(button01,stdout);
            }
            else if(b1 == 1 && b2 == 0){
                fputs(button10,stdout);
            }
            else if(b1 == 1 && b2 == 1){
                fputs(button11,stdout);
            }
            printf("\n");
            printf("       Current state = %d%d\n", S0, S1);
            printf("           Output: %d%d\n", o0, o1);
            printf("\n");
        }
        else if ( S0 == 0 && S1 == 1){
            system("clear");
            fputs(lights01,stdout);
            printf("\n");
            if(b1 == 0 && b2 == 0){
                fputs(button00,stdout);
            }
            else if(b1 == 0 && b2 == 1){
                fputs(button01,stdout);
            }
            else if(b1 == 1 && b2 == 0){
                fputs(button10,stdout);
            }
            else if(b1 == 1 && b2 == 1){
                fputs(button11,stdout);
            }
            printf("\n");
            printf("       Current state = %d%d\n", S0, S1);
            printf("           Output: %d%d\n", o0, o1);
            printf("\n");
        }
        else if ( S0 == 1 && S1 == 0){
            system("clear");
            fputs(lights10,stdout);
            printf("\n");
            if(b1 == 0 && b2 == 0){
                fputs(button00,stdout);
            }
            else if(b1 == 0 && b2 == 1){
                fputs(button01,stdout);
            }
            else if(b1 == 1 && b2 == 0){
                fputs(button10,stdout);
            }
            else if(b1 == 1 && b2 == 1){
                fputs(button11,stdout);
            }
            printf("\n");
            printf("       Current state = %d%d\n", S0, S1);
            printf("           Output: %d%d\n", o0, o1);
            printf("\n");

        }
        else if ( S0 == 1 && S1 == 1){
            system("clear");
            fputs(lights11,stdout);
            printf("\n");
            if(b1 == 0 && b2 == 0){
                fputs(button00,stdout);
            }
            else if(b1 == 0 && b2 == 1){
                fputs(button01,stdout);
            }
            else if(b1 == 1 && b2 == 0){
                fputs(button10,stdout);
            }
            else if(b1 == 1 && b2 == 1){
                fputs(button11,stdout);
            }
            printf("\n");
            printf("       Current state = %d%d\n", S0, S1);
            printf("           Output: %d%d\n", o0, o1);
            printf("\n");
        }
        b1 = 0;
        b2 = 0;
        int b = get_int("Button (0(none)/1/2/3(both)): ");
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
        else if (b == 0){
            b1 = 0;
            b2 = 0;
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
