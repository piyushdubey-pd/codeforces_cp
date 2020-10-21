#include <iostream>

using namespace std;

void merge1(int a[], int l, int mid, int r){
    int i,j,k;
    int n1=mid-l+1;
    int n2=r-mid;
    int L[n1];
    int R[n2];
    for(i=0; i<n1;i++)
        L[i]=a[i+l];
    for(j=0;j<n2;j++)
        R[j]=a[mid+j+1];

    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }
}
/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int a[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge1(a, l, m, r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

/* Driver program to test above functions */
int main()
{
    int a[] = { 12, 11, 5, 10, 7 };
    int arr_size = sizeof(a) / sizeof(a[0]);

    printf("Given array is \n");
    printArray(a, arr_size);

    mergeSort(a, 0, arr_size - 1);

    printf("\nSorted array is \n");
    printArray(a, arr_size);
    return 0;
}


