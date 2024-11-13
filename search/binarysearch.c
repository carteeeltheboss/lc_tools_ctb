#import "binarysearch.h"

int bisect(int arr[], int n, int target){
	int low = 0;
	int high = 0;

	while(low <= high){
		int mid = low + (high - low)/2; //so we can avoid overflowing ?
		if (arr[mid] == target) return mid;
		else if (arr[mid] < target) low=mid+1;
		else high = mid - 1;
	}
	return -1; //none found
}

int lowerBound(int arr[], int n, int target) {
    int low = 0;
    int high = n;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int upperBound(int arr[], int n, int target) {
    int low = 0;
    int high = n;

    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Binary search for lower bound
int lower_bound(int *arr, int n, long long target, int start) {
    int left = start, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

// Binary search for upper bound
int upper_bound(int *arr, int n, long long target, int start) {
    int left = start, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}