#include <stdio.h>

#ifndef BISECT_H
#define BISECT_H

int bisect(int arr[], int n, int target);
int lowerBound(int arr[], int n, int target);
int upperBound(int arr[], int n, int target);
int lower_bound(int *arr, int n, long long target, int start);
int upper_bound(int *arr, int n, long long target, int start);
#endif
