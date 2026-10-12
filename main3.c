#include<stdio.h>
#include<string.h>

int main(void) {
    char slovo[50];
    printf("Zadaj slovo, a zistim ci je palindrom\n");
    scanf("%s", slovo);
    printf("Zadal si: %s\n", slovo);

    int dlzka = strlen(slovo);
    
    slovo[1] = 'x';
    
    printf("Vymenil si: %s\n", slovo);
}
