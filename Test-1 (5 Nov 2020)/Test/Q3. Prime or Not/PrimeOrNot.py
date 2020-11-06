#!/bin/python3

import math
import os
import random
import re
import sys



def isPrime(n):
    if n==2:
        return 1
    elif n%2==0:
        return 2
    else:
        for i in range (3,n):
            if int(n)%i==0:
                return int32(i)
    return 1

                
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    result = isPrime(n)

    fptr.write(str(result) + '\n')

    fptr.close()
