#include <stdio.h>
#include <stdlib.h>

//Declaration de fonction
void Decomposition_Annee_Mois_Jour(int* anneePointeur, int* moisPointeur, int* jourPointeur);


/** \brief Fonction principal Main du programme
 *
 * \return int
 *
 */
int main()
{
    /*Initialisation des variables à zéro*/
    int annee = 0;
    int mois = 0;
    int jour = 0;


    printf("\n    DECOMPOSITION DU NOMBRE DE JOURS EN ANNEE, MOIS ET JOURS\n\n");

    printf("    Veuillez entrer un nombre de jours: "); //Test avec une valeur introduit par l'utilisateur. Exemple: 6772 jours. Resultat attendu: 18 annees, 9 mois et 22 jours.
    scanf("%i", &jour);

    printf("\n\n    Voici la decomposition pour %i jours:\n\n", jour);

    //Utilisation de la fonction de décomposition. Récupération des adresses mémoire des variables annee, mois, jour
    Decomposition_Annee_Mois_Jour(&annee, &mois, &jour);

    //Affichage de la decomposition
    printf("    Annees:      %i\n", annee);
    printf("    Mois:        %i\n", mois);
    printf("    Jours:       %i\n\n", jour);

    return EXIT_SUCCESS;
}

/** \brief Récupération et transformation de la valeur à l'adresse mémoire des variables
 *
 * \param anneePointeur int*
 * \param moisPointeur int*
 * \param jourPointeur int*
 * \return void
 *
 */
void Decomposition_Annee_Mois_Jour(int* anneePointeur, int* moisPointeur, int* jourPointeur)
{
    //Decomposition de la variable "jour"
    *anneePointeur = *jourPointeur/360;
    *moisPointeur = *jourPointeur%360/30;
    *jourPointeur = *jourPointeur%360%30;
}
