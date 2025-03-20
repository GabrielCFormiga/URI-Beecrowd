/**
* @file 1215.c
*
* Created on 2025-03-19 at 18:14:24
* @author GabrielCampelo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h> // tolower()

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

typedef long long ll;
typedef unsigned long long ull;

#define MAX_LEN 220
#define MAX_WORDS 5100
#define HASH_SIZE 10007

/* 
    funcoes uteis:
        strdup()
        tolower()
        isalpha()
        strncpy()

 */

char *strdup(const char *s) {
    size_t len = strlen(s) + 1; // +1 para o caractere nulo ('\0')
    char *copy = malloc(len);   // Aloca memória para a cópia
    if (copy) {
        memcpy(copy, s, len);   // Copia a string original para a nova memória
    }
    return copy; // Retorna o ponteiro para a cópia
}

// Estrutura para a tabela hash
typedef struct {
    char *word;
    int used;
} HashEntry;

HashEntry hashTable[HASH_SIZE];

// Função de hash simples
unsigned int hash(const char *str) {
    unsigned int hash = 0;
    while (*str) {
        hash = (hash * 31) + (*str++);
    }
    return hash % HASH_SIZE;
}

// Função para inserir ou verificar duplicatas
int insertWord(const char *word) {
    unsigned int index = hash(word);

    while (hashTable[index].used) {
        if (strcmp(hashTable[index].word, word) == 0) {
            return 0; // Palavra já existe
        }
        index = (index + 1) % HASH_SIZE; // Tratamento de colisões
    }

    // Insere a palavra na tabela hash
    hashTable[index].word = strdup(word);
    hashTable[index].used = 1;
    return 1; // Nova palavra
}

int compare(const void * a,const void * b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int main() { 
    char line[MAX_LEN];
    char word[MAX_LEN];
    char *words[MAX_WORDS];
    int qtd_words = 0;

    while (fgets(line, MAX_LEN, stdin) != NULL) {
        int len = strcspn(line, "\n"); 
        line[len] = '\0';

        for (int i = 0; i < len; i++) {
            // if (line[i] >= 'A' && line[i] <= 'Z') line[i] = line[i] - 'A' + 'a';
            line[i] = tolower(line[i]);
        }

        int i = 0, j = 0;

        while (i < len) {
            // procura o inicio de uma palavra
            // while (i < len && !(line[i] >= 'a' && line[i] <= 'z')) i++;
            while (i < len && !isalpha(line[i])) i++;

            if (i == len) break;

            // procura o fim da palavra
            j = i;
            // while (j + 1 < len && line[j + 1] >= 'a' && line[j + 1] <= 'z') j++;
            while (j + 1 < len && isalpha(line[j + 1])) j++;

            // palavra em [i,j]
            strncpy(word, line + i, j - i + 1);
            word[j - i + 1] = '\0';

            // Verifica se a palavra já existe usando a tabela hash
            if (insertWord(word)) {
                words[qtd_words++] = strdup(word);
            }

            i = j + 2;
        }
    }

    // Ordena as palavras
    qsort(words, qtd_words, sizeof(char *), compare);

    // Imprime as palavras únicas
    for (int i = 0; i < qtd_words; i++) {
        printf("%s\n", words[i]);
        free(words[i]); // Libera a memória alocada
    }

    // Libera a memória da tabela hash
    for (int i = 0; i < HASH_SIZE; i++) {
        if (hashTable[i].used) {
            free(hashTable[i].word);
        }
    }

    return 0;
}