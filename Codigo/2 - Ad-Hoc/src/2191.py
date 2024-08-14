"""
Created on 2024-08-13 at 15:16:53

O(n) - Kadane`s Algorithm

@author: GabrielCampelo
"""

def main():
    testes = 1
    while True:
        n = int(input())
        if n == 0:
            break

        print(f"Teste {testes}")
        testes += 1

        saldo = [0] * n
        for i in range(n):
            x, y = map(int, input().split())
            saldo[i] = x - y

        # Implementação de Kadane para encontrar a maior soma de subarray
        max_sum = 0
        current_sum = 0
        start = 0
        end = 0
        temp_start = 0

        for i in range(n):
            current_sum += saldo[i]

            if current_sum > max_sum:
                max_sum = current_sum
                start = temp_start
                end = i
            elif current_sum == max_sum:
                if i - temp_start > end - start:
                    start = temp_start
                    end = i

            if current_sum < 0:
                current_sum = 0
                temp_start = i + 1

        if max_sum == 0:
            print("nenhum\n")
        else:
            print(f"{start + 1} {end + 1}\n")

if __name__ == '__main__':
    main()
