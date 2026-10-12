#include <stdio.h>

typedef struct
{
    char nazovproduktu[50];
    int pocet;
    float cena;
} Product;

int main(void) {
    int n;
    printf("Vitajte v pokladni!\n");
    printf("Zadajte pocet poloziek ktore mate v kosiku (1 až 10 produktov maximalne): ");
    
    if (scanf("%d", &n) != 1 || n <= 0 || n > 10) {
        printf("Chyba: Neplatna volba. Musite zadat cislo v rozmedzi 1 az 10.\n");
        return 1; 
    }

    Product produkty[10];
    float celkova_cena = 0;

    for(int i = 0; i < n; i++) {
        printf("\n>>> POLOZKA C. %d <<<\n", i + 1);
        printf("Nazov tovaru: ");
        scanf("%s", produkty[i].nazovproduktu);
        printf("Cena za 1 ks: ");
        scanf("%f", &produkty[i].cena);
        printf("Mnozstvo: ");
        scanf("%d", &produkty[i].pocet);
    }
    
    printf("\n\n=== VASE FAKTURACNE ZHRNUTIE ===\n");
    for(int i = 0; i < n; i++) {
        float spolu = produkty[i].cena * produkty[i].pocet;
        celkova_cena += spolu;
        printf("[%d] %s -> %d ks x %.2f EUR = Spolu: %.2f EUR\n", 
               i + 1, produkty[i].nazovproduktu, produkty[i].pocet, produkty[i].cena, spolu);
    }
    
    printf("--------------------------------------\n");
    printf("K UHRADE CELKOM: %.2f EUR\n", celkova_cena);

    if (celkova_cena > 50) {
        float zlavnena_cena = celkova_cena * 0.9;
        printf("\nSkvela sprava! Ziskavate vernostnu zlavu 10%% (nakup presiahol 50 EUR).\n");
        printf("Nova suma po zlave: %.2f EUR\n", zlavnena_cena);
    }

    return 0;
}
