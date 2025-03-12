#include <stdio.h>

#define MAX_STUDENTI 3
typedef struct {
    unsigned int matricola;
    int eta;
    float media;
} Studente;

int main(void) {
    Studente classe[MAX_STUDENTI];
    for (int i = 0; i < MAX_STUDENTI; i++) {
        printf("inserisci i dati dello studente %d\n", i + 1);
        do {
            printf("matricola");
            scanf("%u", &classe[i].matricola);
        } while (classe[i].matricola < 10000 || classe[i].matricola > 99999);
        do {
            printf("eta: ");
            scanf("%d", &classe[i].eta);
        } while (classe[i].eta < 13);
        do {
            printf("media: ");
            scanf("%f", &classe[i].media);
        } while (classe[i].media < 1.0 || classe[i].media > 10.0);
    }
    for(int i=0;i<MAX_STUDENTI;i++) {
        printf("dati dello studente numero %d : matricola: %d , eta: %d, media : %2.f",i+1,classe[i].matricola,classe[i].eta,classe[i].media);
    }
    return 0;
}
