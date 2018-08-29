#include <stdio.h>  // printf
#include "anynull.h"

int main()
{
    //double x0[] = {1, 2, 3, 4., 5};
    //printf("%s\n", anynull(x0, 5) ? "found nan or inf" : "everything ok");

    double x1[] = {1, 2, 3, 0./0., 5};
    printf("%s\n", anynull(x1, 5) ? "found nan or inf" : "everything ok");

    double x2[] = {1, 2, 1./0., 4, 5};
    printf("%s\n", anynull(x2, 5) ? "found nan or inf" : "everything ok");

    double x3[] = {1, -1./0., 3, 4, 5};
    printf("%s\n", anynull(x3, 5) ? "found nan or inf" : "everything ok");
}
