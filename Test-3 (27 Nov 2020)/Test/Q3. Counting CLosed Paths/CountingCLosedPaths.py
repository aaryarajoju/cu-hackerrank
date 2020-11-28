#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'closedPaths' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER number as parameter.
#

def closedPaths(number):
    # Write your code here

    num = number
    numOfClosedPaths = 0
    rem = 0
    

    for num > 0
        rem = num % 10
        
        if rem = 0 or rem = 4 or rem = 6 or rem = 9:
            numOfClosedPaths = numOfClosedPaths + 1
        elif rem = 8:
            numOfClosedPaths = numOfClosedPaths + 2

    
    return numOfClosedPaths




if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    number = int(input().strip())

    result = closedPaths(number)

    fptr.write(str(result) + '\n')

    fptr.close()



