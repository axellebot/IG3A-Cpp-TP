//
// Created by axel on 19/10/17.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "arbresBasiques.h"
#include "arbresFctRecursives.h"
#include "modifArbres.h"
#include "../libs/libs.h"

void exercice1(){
    displayHeaderExercice(1);
    int i;
    struct noeud *racine;
    // recuperation de l'arbre predefini
    racine = unArbrePredefini();
    i = afficheArbre(racine);
    if(i == 0)
        printf(" arbre vide\n");
}

void exercice2(){
    displayHeaderExercice(2);
    int i;
    struct noeud *racine;
    // recuperation de l'arbre predefini
    racine = unArbrePredefini();
    printf("affichage d'un arbre : \n");
    i = afficheArbre(racine);
    if(i == 0)
        printf("arbre vide\n");

    // test de la fonction nbNoeuds
    i = nbNoeuds(racine);
    printf("le nombre de ses noeuds est %i\n", i);

    // test de la fonction sommeValArbres
    i = sommeValArbres(racine);
    printf("la somme de ses valeurs est %i\n", i);

    // test de la fonction hauteur
    i = hauteur(racine);
    printf("sa hauteur est %i\n", i);
}

void exercice3(){
    displayHeaderExercice(3);
    int i, j;
    struct noeud *racine;
    racine = NULL;
    srand(time(NULL));
    // recuperation de l'arbre predefini
    racine = unArbrePredefini();
    i = afficheArbre(racine);
    if(i == 0)
        printf(" arbre vide\n");

    for(i = 0; i < 5; i++){
        j = rand() % 100;
        printf("ajout de la valeur %i\n", j);
        racine = ajouterValeurABR(racine, j);
    }
    afficheArbre(racine);

    for(i = 0; i < 5; i++){
        j = rand() % 100;

        rechercheValeur(racine, j);
        printf("% dans larbre? %i\n", j, rechercheValeur(racine, j));
    }

    printf("entrez une valeur a supprimer ");
    scanf("%d", &i);
    supprimerValeurABR(racine, i);
    printf("arbre apres suppression ");
    afficheArbre(racine);
}

void exercice4(){
    displayHeaderExercice(4);
}

void exercice5(){
    displayHeaderExercice(5);
}

int main(){
    displayHeaderTP(3);

    bool finished = false;
    int ex = 0;
    while(!finished){
        printf("Select an exercice : ");
        scanf("%d", &ex);
        switch(ex){
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
            case 5:
                exercice5();
                break;
            default:
                printf("404 Not found");
        }
        finished = endOfProgram();
    }

    printf("Bye !!!");
    exit(0);
}
