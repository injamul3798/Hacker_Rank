#include<stdio.h>
int main(){
    int s,t,m,n,a,b;
    scanf("%d%d",&s,&t);
    scanf("%d%d",&m,&n);
    scanf("%d%d",&a,&b);
    int arr[a];
    int i,j;
    int ar[b];

    int cc=0,ct=0;
    for(i=0;i<a;i++){

        scanf("%d",&arr[i]);
    }
    for(i=0; i<b; i++){
        scanf("%d",&ar[i]);
    }

    for(i=0; i<a; i++)
    {


        if((m+arr[i]>=s) && (m+arr[i]<=t) )
        {
            cc++;
        }

    }
    for(i=0; i<b; i++){

        if((n+ar[i]>=s) && (n+ar[i]<=t) ){
            ct++;
        }


    }
    printf("%d\n%d\n",cc,ct);



}
