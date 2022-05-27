#include <stdio.h>
#include "gmp.h"

int main (void) {
    int i;
    mpz_t num;

    mpz_init_set_ui (num, 1);
    for (i = 0; i <= 200; i++) {
        printf ("2^%d = ", i);
        mpz_out_str (NULL, 10, num);
        printf ("\n");
        mpz_mul_ui (num, num, 2);
    }

    return 0;
}