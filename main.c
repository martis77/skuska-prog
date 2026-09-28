#include <stdio.h>

typedef struct {
    int nazov;
    int cena;
    int pocet;
} Product;

int main(void) {
    Product produkty[10];

    for (int i = 0; i < 10; i++) {
        printf("Zadajte nazov produktu %d: ", i + 1);
        scanf("%d", &produkty[i].nazov);
        printf("Zadajte cenu produktu %d: ", i + 1);
        scanf("%d", &produkty[i].cena);
        printf("Zadajte pocet produktu %d: ", i + 1);
        scanf("%d", &produkty[i].pocet);
    }
        
}
