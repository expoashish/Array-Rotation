#include <stdio.h>

int main()
{
    int d = 2,i=0,j=0;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7,8,9,10 },temp[d],n=10;
    int newarr[n];
    for(i=0;i<d;i++){ // push two starting elements in temp
        temp[i] = arr[i];
    }
    for(i=2;i<n;i++){ // push remaining 8 elements in new array
        newarr[j] = arr[i];
        j++;
    }
    for(i=n-d;i<n;i++){
        newarr[i] = arr[i];
    }
    
    for(i=0;i<n;i++){
        printf("%d,",newarr[i]);
    }
    printf("\n");
    j = 0;
    for(i=n-d;i<n;i++){
        newarr[i] = temp[j];
        j++;
    }
    
    for(i=0;i<n;i++){
        printf("%d,",newarr[i]);
    }   
    return 0;
}
