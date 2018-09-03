#include "anynull.h"

bool anynull(const double* x, size_t n)
{
    size_t i=0;
    bool res = false;
    while(i<n){
        if(isnan(x[i])){
            res = true;
            break;
        }
        if(isinf(x[i])){
            res = true;
            break;
        }
        i++;
    }
    return res;
}
