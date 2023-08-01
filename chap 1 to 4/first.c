#include <stdio.h>

int main(void) {
    int num_addresse;
    int code_postal;
    char* ville;
    char* addresse;
    num_addresse = 18;
    code_postal = 69420;
    addresse = "rue du raffour";
    ville = "Condrieu";

    printf("Je m\'appelle Benoit Dervieux et j\'habite %d %s %d %s", num_addresse, addresse, code_postal, ville);
}