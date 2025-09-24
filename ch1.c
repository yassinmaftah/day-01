#include <stdio.h>

int main()
{
    char name[50];
    char prenom[50];
    char email[100];
    char sexe[10];
    int age;

    printf("Entre votre nom: ");
    scanf("%49s", name);

    printf("Entre votre prénom: ");
    scanf("%49s", prenom);

    printf("Entre votre âge: ");
    scanf("%d", &age);

    printf("Entre votre sexe: ");
    scanf("%9s", sexe);

    printf("Entre votre adresse email: ");
    scanf("%99s", email);

    printf("\n--- Vos informations personnelles ---\n");
    printf("Nom     : %s\n", name);
    printf("Prénom  : %s\n", prenom);
    printf("Âge     : %d\n", age);
    printf("Sexe    : %s\n", sexe);
    printf("Email   : %s\n", email);

    return 0;
}
