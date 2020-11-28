#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    float costOnlineTaxi;
    float costClassicTaxi;
    
    int d, oc, of, od, cs, cb, cm, cd;
    
    
    scanf("%d", &d);
    scanf("%d %d %d", &oc, &of, &od);
    scanf("%d %d %d %d", &cs, &cb, &cm, &cd);

    
    costOnlineTaxi = ((float)oc) + (((float)d - (float)of) * (float)od) ;
    
    costClassicTaxi = ((float)cb) + (((float)d / (float)cs) * (float)cm) + ((float)d * (float)cd);
    
    
    if(costOnlineTaxi < costClassicTaxi || costOnlineTaxi == costClassicTaxi){
        printf("Online Taxi");
    } else {
        printf("Classic Taxi");
    }
    
    return 0;
}