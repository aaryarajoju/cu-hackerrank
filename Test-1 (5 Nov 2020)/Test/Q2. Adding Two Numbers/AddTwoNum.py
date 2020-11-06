#!/bin/python3

import math
import os
import random
import re
import sys

import math

def addNumbers(a, b):
    return(math.floor(a+b))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = float(input().strip())

    b = float(input().strip())

    result = addNumbers(a, b)

    fptr.write(str(result) + '\n')

    fptr.close()
