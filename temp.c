#include <stdio.h>
int main()
{
    int d = 2,i=0,j=0;
    int arr[] = { 1, 2, 3, 4, 5},temp[d],n=5;
    for(i=0;i<d;i++){ // push d starting elements in temp array
        temp[i] = arr[i];
    }
    
    for(i=0;i<n-d;i++){ // shift remaining elements towards beggining
        j = i+d;
        arr[i] = arr[j];
    }
    
    for(i=0;i<n;i++){   // print first step
        printf("%d,",arr[i]);
    }
    printf("\n"); // print new line 
    
    j=0;
    for(i=n-d;i<n;i++){  //push temp elements at the end of array
        arr[i] = temp[j];
        j++;
    }
    
    for(i=0;i<n;i++){  //print second step which is final rotated array
        printf("%d,",arr[i]);
    }
    return 0;
}
