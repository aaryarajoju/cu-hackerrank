#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'isPrime' function below.
#
# The function is expected to return an INTEGER.
# The function accepts LONG_INTEGER n as parameter.
#

def isPrime(n):
    # Write your code here

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    result = isPrime(n)

    fptr.write(str(result) + '\n')

    fptr.close()
