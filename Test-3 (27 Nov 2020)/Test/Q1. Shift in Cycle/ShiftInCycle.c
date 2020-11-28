#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int m;
        char c;
        unsigned int n, newNum;

        scanf_s("%d %d %c", &n, &m, &c);

        if (c == 'L'){
            newNum = n << m;
        } else if (c == 'R'){
            newNum = n >> m;
        }

        printf("%d", newNum);

    return 0;
}