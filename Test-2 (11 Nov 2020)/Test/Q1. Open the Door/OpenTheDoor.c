#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
    int i, n, t1 = 0, t2 = 1, nextTerm;
    
    scanf("%d", &n);

    for (i = 2; i <= n; ++i) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("%d\n", t1);
   
    return 0;
}