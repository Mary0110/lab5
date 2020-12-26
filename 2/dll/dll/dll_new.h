#pragma once

#ifdef DLL_NEW_EXPORTS
#define DLL_NEW_API __declspec(dllexport)
#else
#define DLL_NEW_API __declspec(dllimport)
#endif

// Initialize a Fibonacci relation sequence
// such that F(0) = a, F(1) = b.
// This function must be called before any other function.
extern "C" DLL_NEW_API double sum(int a[20], int b, int N);

