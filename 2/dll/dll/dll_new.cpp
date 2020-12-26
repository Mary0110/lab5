#include "pch.h" 
#include <utility>
#include <limits.h>
#include "dll_new.h"

// DLL internal state variables:
static int m;            

double sum(int a[20], int b, int N)
{
    if (N == b)
        return (sin(a[N]) * cos(a[N]));
    m = (b + N) / 2;
    return sum(a, b, m) + sum(a, m + 1, N);
}


