m3 = [0] * 201
m4 = [13, 65533]
m3[0] = 5
n_max = 0

tt = int(input())

while tt > 0:
    tt -= 1

    m, n = map(int, input().split())

    if m == 0:
        print(n + 1)
    elif m == 1:
        print(n + 2)
    elif m == 2:
        print(3 + n * 2)
    elif m == 3:
        if n > n_max:
            n_max = n
        
        m3[n] = (5 + 8 * (2 ** n - 1))
        print(m3[n])
    elif m == 4:
        if n == 0:
            print(m4[0])
        elif n == 1:
            print(m4[1])
        elif n == 2:
            n = m4[1]
            print(m3[n_max] + 8 * 2 ** n_max * (2 ** (n - n_max) - 1))


