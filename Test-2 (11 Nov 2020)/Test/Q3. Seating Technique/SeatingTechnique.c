#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
    int seat = 0;
    int opp;
    int T;
    int rem;

    scanf("%d", &T);

    for (int i; i < T; i++){

        scanf("%d", &seat);

        rem = seat % 12;

        switch (rem){
            case 1:
                opp = seat + 11;
                break;
            case 2:
                opp = seat + 9;
                break;
            case 3:
                opp = seat + 7;
                break;
            case 4:
                opp = seat + 5;
                break;
            case 5:
                opp = seat + 3;
                break;
            case 6:
                opp = seat + 1;
                break;
            case 7:
                opp = seat - 1;
                break;
            case 8:
                opp = seat - 3;
                break;
            case 9:
                opp = seat - 5;
                break;
            case 10:
                opp = seat - 7;
                break;
            case 11:
                opp = seat - 9;
                break;
            case 0:
                opp = seat - 11;
                break;
        }

        if (seat % 6 == 1 || seat % 6 == 0){
            printf("%d WS\n", opp);
        } else if (seat % 6 == 2 || seat % 6 == 5){
            printf("%d MS", opp);
        } else {
            printf("%d AS", opp);
        }

    }
        
    return 0;
}
