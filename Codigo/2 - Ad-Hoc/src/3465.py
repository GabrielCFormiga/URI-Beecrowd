"""
Created on 2025-03-20 at 03:32:27

@author: GabrielCampelo
"""

import math

def main():
    a, b, c = map(int, input().split())

    p = (a + b + c) / 2.0

    area = math.sqrt(p * (p - a) * (p - b) * (p - c))

    print(f"{area:.3f} m2")

if __name__ == '__main__':
    main()