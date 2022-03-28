#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j,count=0;
    int xx;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            xx=arr[i]+arr[j];
            if(xx%k==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}


