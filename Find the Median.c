//Md.Injamul Haque
//BSc in CSE, DIU
#include<stdio.h>
int Partition(int array[],int left,int Right){
    int temp,pivot;
    pivot=array[left];
    while(left!=Right){
        if(pivot==array[left]){
            if(array[Right]>pivot){
                Right--;
            }
            else if(array[Right]<=pivot){
            temp=array[Right];
            array[Right]=array[left];
            array[left]=temp;
            pivot=array[Right];
            left++;
           }
        }
        else if(pivot==array[Right]){
            if(array[left]<pivot){
                left++;
            }
            else if(array[left]>=pivot){
                temp=array[left];
                array[left]=array[Right];
                array[Right]=temp;
                pivot=array[left];
                Right--;
            }
        }

    }
    return left;
}
void Quicksort(int arr[],int left,int Right){
    int pivot;
    if(left<Right){
        pivot=Partition(arr,left,Right);
        Quicksort(arr,left,pivot-1);
        Quicksort(arr,pivot+1,Right);
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Quicksort(arr,0,n-1);

        printf("%d\n",arr[n/2]);

}
