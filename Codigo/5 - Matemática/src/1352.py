"""
Created on 2024-08-13 at 14:35:08

https://www.youtube.com/watch?v=VsBg2pioaoc

@author: GabrielCampelo
"""

def main():
    while True:
        # (N^2)! bilhetes vendidos
        # premio_total = (p / 100) * (N^2)!
        # premio_individual = premio_total / num_vencedores
        # num_vencedores = (qtd_quadrados * 4!) * (N^2 - 4)!
        # qtd_quadrados = (n^4 - n^2) / 12;
        # .: premio individual = (p / 100) * ((n^2 * (n^2 - 1) * (n^2 - 2) * (n^2 - 3)) / (24 * (n^4 - n^2) / 12))

        n, p = map(float, input().split())
        n = int(n)
        if n == 0:
            break
        
        aux = n * n
        qtd_quadrados = (aux * aux - aux) / 12
        
        ans = aux * (aux - 1) * (aux - 2) * (aux - 3) * p
        ans /= 100 * 24 * qtd_quadrados
        
        print(f"{ans:.2f}")

if __name__ == '__main__':
    main()