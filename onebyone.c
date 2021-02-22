#include <stdio.h>
int main()
{
    int d = 2,i=0,j=0;
    int arr[] = { 1, 2, 3, 4, 5, 6, 7,8,9,10 },temp=0,n=10;
    for(i=0;i<d;i++){  //store arr[0] into temp
        temp = arr[0];
        for(j=0;j<n-1;j++){  //shift arr[j+1] into arr[j]
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }
    for(i=0;i<n;i++){  //print arr[i] final rotated array
        printf("%d,",arr[i]);
    }
    return 0;
}
