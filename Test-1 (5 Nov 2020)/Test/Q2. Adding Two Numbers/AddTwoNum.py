#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'addNumbers' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. FLOAT a
#  2. FLOAT b
#

def addNumbers(a, b):
    # Write your code here

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = float(input().strip())

    b = float(input().strip())

    result = addNumbers(a, b)

    fptr.write(str(result) + '\n')

    fptr.close()
