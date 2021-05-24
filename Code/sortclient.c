#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "sort.h"

void main(){
    long int n,i;
    int rand_num;//to store the random number that is generated
    time_t start,end;//start and end are the variables to store the no. of clocks required for the execution of each sort 
    double bbltime,mrgtime,qwktime,seltime;//variables to store the time taken by the 4 sorting techniques.
    long long int cmp_num_bbl,cmp_num_mrg,cmp_num_qwk,cmp_num_sel;//variables to store the no. of element to element comparisions by the 4 sorting techniques.

    printf("#Size Bubble-Sort Merge-Sort Quick-Sort Selection-Sort\n");
    //The below for loop runs from 100000 to 1000000 size of the elements
    for(n=100000;n<=1000000;n=n+50000){

        int *a=(int*)malloc(sizeof(int)*n);
        //a is a Temporary dynamic array to store the random values generated using random function and use the same set of random values to be sorted by different sorting algorithms for unbiased comparision of the algorithms.
        int *b=(int*)malloc(sizeof(int)*n);
        //b is a Temporary array which takes its values from a and is passed on to different sorting techniques to get it sorted.
        for(i=0;i<n;i++){
            rand_num=rand();
            a[i]=rand_num;
        }
        //In the above loop the random values are stored in array a

        for(i=0;i<n;i++){
            b[i]=a[i];
        }
        //In the above loop the random values stored in array a is copied to b. This process is performed before every sorting technique for unbiased comparision of different sorting techniques.
        start=clock();//start stores the number of clocks before the function call of below sorting technique
        cmp_num_bbl=bubble_sort(b,n);
        end=clock();//end stores the number of clocks after the function call of above sorting technique
        bbltime=(double)(end-start)/CLOCKS_PER_SEC;//It stores the time taken
        
        for(i=0;i<n;i++)
            b[i]=a[i];
        cmp_num_mrg=0;
        start=clock();
        merge_sort(b,0,n-1,&cmp_num_mrg);
        end=clock();
        mrgtime=(double)(end-start)/CLOCKS_PER_SEC;

        for(i=0;i<n;i++)
            b[i]=a[i];
        cmp_num_qwk=0;
        start=clock();
        quick_sort(b,0,n,&cmp_num_qwk);
        end=clock();
        qwktime=(double)(end-start)/CLOCKS_PER_SEC;

        for(i=0;i<n;i++)
            b[i]=a[i];
        start=clock();
        cmp_num_sel=selection_sort(b,n);
        end=clock();
        seltime=(double)(end-start)/CLOCKS_PER_SEC;

        printf("%ld %lf %lf %lf %lf\n",n,bbltime,mrgtime,qwktime,seltime);
        printf("%ld %lld %lld %lld %lld\n",n,cmp_num_bbl,cmp_num_mrg,cmp_num_qwk,cmp_num_sel);

        free(a);
        free(b);
    }
}