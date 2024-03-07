#include<stdio.h>
#include<stdlib.h>

void user();
int gioco();

int main() {
    char scelta;
    char scelta2;

    do {
        printf("Inizio gioco, premere 'i' per giocare, 'q' per uscire.\n");
        printf("Scelta: ");
        scanf(" %c", &scelta);

        if (scelta == 'i' || scelta == 'I') {
            printf("Inizio gioco\n");
            user();
            gioco();
        } else if (scelta == 'q' || scelta == 'Q') {
            printf("Termino il gioco\n");
            return EXIT_SUCCESS;
        }

        printf("Vuoi ricominciare? (s/n) ");
        scanf(" %c", scelta2);
    } while (scelta2 == 's' || scelta2 == 'S');

    printf("Grazie per aver giocato!\n");

    return EXIT_SUCCESS;
}

void user() {
    char nome_utente[30];
    printf("Inserisci il tuo nome: ");
    scanf("%s", nome_utente);
    printf("Ciao, %s, buona fortuna!\n", nome_utente);
}

int gioco() {
    char risposta1, risposta2, risposta3;
    int punteggio = 0;

    printf("Qual e' la capitale della Francia?\nA) Roma\tB) Parigi\tC) Londra\n");
    scanf(" %c", &risposta1);
    if (risposta1 == 'B' || risposta1 == 'b') {
        punteggio++;
    }

    printf("Qual e' la capitale dell'Italia?\nA) Roma\tB) Parigi\tC) Londra\n");
    scanf(" %c", &risposta2);
    if (risposta2 == 'A' || risposta2 == 'a') {
        punteggio++;
    }

    printf("Qual e' la capitale dell'Inghilterra?\nA) Roma\tB) Parigi\tC) Londra\n");
    scanf(" %c", &risposta3);
    if (risposta3 == 'C' || risposta3 == 'c') {
        punteggio++;
    }

    printf("Hai completato il gioco con punteggio: %d\n", punteggio);

}
