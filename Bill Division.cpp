#include <iostream>
using namespace std;
int main(){
    long long int n,k;
    cin>>n>>k;
    long int arr[n],i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int b,xx;
    xx = arr[k];
    long long int sum = 0;
    cin>>b;
    for(i=0;i<n;i++){
        if(i!=k){
            sum += arr[i];
        }
    }
    long long int yy = sum/2;
    if(yy == b){
        cout<<"Bon Appetit"<<endl;
    }
    else{
        cout<<b-yy<<endl;
    }
    return 0;
}
