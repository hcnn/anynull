#include "anynull.h"

bool anynull(double* x, int n)
{
    int i=0;
    bool res = false;
    while(i<n){
        if isnan(x[i]){
            res = true;
            break;
        }
        if isinf(x[i]){
            res = true;
            break;
        }
        i++;
    }
    return res;
}
