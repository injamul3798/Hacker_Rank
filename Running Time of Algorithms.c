//Md. Injamul Haque
//BSc in CSE, DIU
#include <stdio.h>
int main()
{
    int n, i, j, temp;

    int count=0;
     
    scanf("%d",&n);
    long int arr[n];
    for(i=0;i<n;i++){
        scanf("%ld",&arr[i]);
    }
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


    printf("%d\n",count);


}


