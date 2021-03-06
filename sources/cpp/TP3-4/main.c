//
// Created by Axel LE BOT on 19/10/17.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "arbresBasiques.h"
#include "arbresFctRecursives.h"
#include "modifArbres.h"
#include "../libs/libs.h"
#include "parcoursArbres.h"

void exercice1() {
    displayHeader(HEADER_LEVEL_EXERCICE, "Exercice 1");
    int i;
    struct noeud *racine;
    // recuperation de l'arbre predefini
    racine = unArbrePredefini();
    i = afficheArbre(racine);
    if (i == 0)
        printf("Arbre vide\n");
}

void exercice2() {
    displayHeader(HEADER_LEVEL_EXERCICE, "Exercice 2");
    int i;
    struct noeud *racine;
    // recuperation de l'arbre predefini
    racine = unArbrePredefini();
    puts("Affichage d'un arbre : \n");
    i = afficheArbre(racine);
    if (i == 0)
        puts("Arbre vide");

    // test de la fonction nbNoeuds
    i = nbNoeuds(racine);
    printf("Le nombre de noeuds cet arbre est de %i\n", i);

    // test de la fonction sommeValArbres
    i = sommeValArbres(racine);
    printf("La somme de ses noeuds est de %i\n", i);

    // test de la fonction hauteur
    i = hauteur(racine);
    printf("La hauteur de l'arbre est de %i noeud(s)\n", i);
}

void exercice3() {
    displayHeader(HEADER_LEVEL_EXERCICE, "Exercice 3");
    srand(time(NULL));

    int i, j;
    struct noeud *racine;
    racine = unArbrePredefini(); // recuperation de l'arbre predefini
    i = afficheArbre(racine);
    if (i == 0)
        puts("Arbre vide");

    for (i = 0; i < 5; i++) {
        j = rand() % 100;
        printf("Ajout de la valeur %i\n", j);
        racine = ajouterValeurABR(racine, j);
    }
    afficheArbre(racine);

    for (i = 0; i < 5; i++) {
        j = rand() % 100;

        rechercheValeur(racine, j);
        printf("%d est dans l'arbre ? %i\n", j, rechercheValeur(racine, j));
    }

    printf("Entrez une valeur a supprimer : ");
    scanf("%d", &i);puts("");

    supprimerValeurABR(racine, i);
    puts("Arbre après suppression :");
    afficheArbre(racine);
}

void exercice4() {
    displayHeader(HEADER_LEVEL_EXERCICE, "Exercice 4");
    int i, j;
    struct noeud *racine;

    // recuperation de l'arbre predefini
    racine = unArbrePredefini();

    // affichage de l'arbre en format classique
    puts("Affichage de l'arbre :");
    afficheArbre(racine);

    // affichage du parcours en profondeur
    printf("le parcours en profondeur de l'arbre est :\n");
    parcoursProfondeur(racine);
    printf("\n");
}

int main() {
    displayHeader(HEADER_LEVEL_TP, "TP 3-4");

    int ex = 0;
    do {
        printf("Select an exercice [1-4] : ");
        scanf("%d", &ex);
        switch (ex) {
            case 1:
                exercice1();
                break;
            case 2:
                exercice2();
                break;
            case 3:
                exercice3();
                break;
            case 4:
                exercice4();
                break;
            default:
                printf("404 Not found");
        }

    }while (!endOfProgram());

    printf("Bye !!!");
    exit(0);
}
