/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

// constraints
#define MAXN 1000000

// input data
int N, K, i;
int T[MAXN];

int main() {
//  uncomment the following lines if you want to read/write from files

    int somma, sommaMagg;
    sommaMagg = -2000000000;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    assert(2 == scanf("%d %d", &N, &K));
    for (i = 0; i < N; i++){
        assert(1 == scanf("%d", &T[i]));
    };

int b;
    somma = 0;
    for (b = 0; b < K; b++)
        {
            somma += T[b];
            sommaMagg = somma;
        }


    for (; b < N; b++ ){


        somma = somma - T[b-K] + T[b];

        if (somma > sommaMagg){

            sommaMagg = somma;
        }

    }
    // insert your code here




    printf("%d\n", sommaMagg);
    return 0;
}
