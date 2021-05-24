#include<stdio.h>
#include<time.h>

void swap(int* ,long int ,long int );
//swap function is used to swap the elements in an array with the index specified in the last 2 params
long long int selection_sort(int *,long int );
//selection_sort takes 2 params->the array variable and the size of the array. It sorts the the array and then returns the number of comparisions.

int partition(int *,long int ,long int ,long long int *);
//partition takes 4 params->the array variable, low, high and the address of the number of comparisions. It partitions the array and then returns the new pivot position.
void quick_sort(int *,long int ,long int ,long long int*);
//quick_sort takes 3 params->the array variable, the size of the array and the address of the no. of comparisions variable. It sorts the the array.

void merge(int* ,long int ,long int ,long int ,long long int* );
//merge takes 5 params->the array variable, low, mid, high and the address of the number of comparisions. It merges the array in ascending order.
void merge_sort(int* ,long int ,long int,long long int* );
//merge_sort takes 4 params->the array variable, low,high and the address of the number of comparisions. It sorts the array in ascending order.

long long int bubble_sort(int* ,long int );
//bubble_sort takes 2 params->the array variable and the size of the array. It sorts the array and then returns the no. of comparisions.