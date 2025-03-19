"""
Created on 2025-03-19 at 16:44:06

@author: GabrielCampelo
"""

import sys

MAX_INT = 2147483647
MAX_LEN = 55

def main():
    while True:
        line = sys.stdin.readline()
        if not line:
            break
        
        str_input = line.strip()
        ans = []
        error = False
        
        for char in str_input:
            if char.isdigit():
                ans.append(char)
            elif char in ['O', 'o']:
                ans.append('0')
            elif char == 'l':
                ans.append('1')
            elif char not in [' ', ',']:
                error = True
                break
        
        if not ans or error:
            print("error")
            continue
        
        num_str = ''.join(ans)
        num = int(num_str)
        
        if num > MAX_INT:
            print("error")
        else:
            print(num)

if __name__ == '__main__':
    main()