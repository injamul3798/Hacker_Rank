
//Md. Injamul Haque
//BSc in CSE, DIU
#include <stdio.h>
int main()
{
    int n, i, j, temp;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0;i<n-1;i++){
            for(j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    count++;
                }
            }
    }
    printf("Array is sorted in %d swaps.\n",count);
    printf("First Element: %d\n",arr[0]);
    printf("Last Element: %d\n",arr[n-1]);

}
