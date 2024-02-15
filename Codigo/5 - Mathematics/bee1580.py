import math

fat = [0] * 1001
fat[0] = 1
fat[1] = 1
for i in range(2, 1001):
    fat[i] = fat[i - 1] * i

while True:
    try:
        str_input = input()
    except EOFError:
        break

    freq = [0] * 26
    tam = len(str_input)
    for i in range(tam):
        freq[ord(str_input[i]) - ord('A')] += 1

    perms = fat[tam]
    for i in range(26):
        if freq[i] > 1:
            perms //= fat[freq[i]]

    perms %= 1000000007

    print(perms)
