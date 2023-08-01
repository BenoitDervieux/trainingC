#include <stdio.h>
int main(void) {

    double molecule_weight = 3.0E-23;
    int amount_of_quart;
    double amount_of_molecules;
    printf("What amount of quarts do you need?\n");
    //scanf("%d", &amount_of_quart);
    amount_of_quart = 1;
    printf("Amount of quarts: %d\n", amount_of_quart);
    printf("Molecule's weight: %le\n", molecule_weight);
    amount_of_molecules = (amount_of_quart * 950) / molecule_weight;
    printf("There are %le molecules in %d quarts", amount_of_molecules, amount_of_quart);

    return 0;


}