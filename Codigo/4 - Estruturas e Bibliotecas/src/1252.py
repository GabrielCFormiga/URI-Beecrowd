"""
Created on 2025-03-19 at 16:46:24

@author: GabrielCampelo
"""

def main():
    while True:
        n, m = map(int, input().split())
        print(n, m)
        if n == 0:
            break

        ar = []
        for _ in range(n):
            x = int(input())
            ar.append(x)

        def sort_key(x):
            r = x % m
            if x < 0 and r != 0:
                r = r - m 

            is_even = (x % 2 == 0)
            return (r, 1 if is_even else 0, x if is_even else -x)

        ar.sort(key=sort_key)

        for x in ar:
            print(x)

if __name__ == "__main__":
    main()