#include "sort.h"

//Bubblesort
void swap(int *a,long int i,long int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

long long int bubble_sort(int *a,long int n){
    int swp;
    long long int cmp_num=0;
    for(long int i=0;i<n-1;i++){
        swp=0;
        for(long int j=0;j<(n-i-1);j++){
            cmp_num++;
            if(a[j]>a[j+1]){
                swap(a,j,j+1);
                swp=1;
            }
        }
        if(swp==0)
            break;
    }
    return cmp_num;
}

//Mergesort

void merge(int *a,long int low,long int mid,long int high,long long int *cmp_num){
    long int i,j,k;
    int b[high];
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid && j<=high){
        *(cmp_num)=*(cmp_num)+1;
        if(a[i]<a[j]){
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    while(j<=high){
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++){
        a[i]=b[i-low];
    }
}

void merge_sort(int *a,long int low,long int high,long long int *cmp_num){
    if(low<high){
        long int mid=(low+high)/2;
        merge_sort(a,low,mid,cmp_num);
        merge_sort(a,mid+1,high,cmp_num);
        merge(a,low,mid,high,cmp_num);
    }
}

//Quick Sort

int partition(int *a,long int low,long int high,long long int *cmp_num){
    int pivot=a[low];
    int i=low+1;
    int j=high;
    while(i<=j){
        while(i<=high && a[i]<=pivot){
            i++;
            *(cmp_num)=*(cmp_num)+1;
        }
        while(j>low && a[j]>pivot){
            j--;
            *(cmp_num)=*(cmp_num)+1;
        }
        if(i<j)
            swap(a,i,j);
    }
    if(j!=low){
        a[low]=a[j];
        a[j]=pivot;
    }
    return j;
}

void quick_sort(int *a,long int low,long int high,long long int *cmp_num){
    int pivot;
    if(low<high){
        pivot=partition(a,low,high,cmp_num);
        quick_sort(a,low,pivot-1,cmp_num);
        quick_sort(a,pivot+1,high,cmp_num);
    }
}

//Selection Sort

long long int selection_sort(int *a,long int n){
    int min,swp;
    long long int min_index,cmp_num=0;
    for(long int i=0;i<n-1;i++){
        min=a[i];
        for(int j=i+1;j<n;j++){
            cmp_num++;
            if(a[j]<min){
                min=a[j];
                min_index=j;
            }
        }
    }
    return cmp_num;
}
