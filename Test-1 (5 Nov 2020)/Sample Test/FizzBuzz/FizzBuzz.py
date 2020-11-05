#!/bin/python3

import math
import os
import random
import re
import sys

def fizzBuzz(n):
    for i in range (1,n+1):
        if i%15==0:
            print("FizzBuzz")
        elif i%3==0:
            print("Fizz")
        elif i%5==0:
            print("Buzz")
        else :
            print(i)

if __name__ == '__main__':
    n = int(input().strip())

    fizzBuzz(n)
