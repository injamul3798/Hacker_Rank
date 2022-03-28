#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    if(k>max){
        cout<<"0"<<endl;
    }
    else{
        cout<<max-k<<endl;
    }
    return 0;
}
