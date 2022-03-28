//Injamul Haque
//BSc in CSE,DIU

#include <iostream>
using namespace std;
int main()
{
    int T;
    int n,k,i,j;
    cin>>T;
    for(j=1; j<=T; j++)
    {
        cin>>n>>k;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for(i=0; i<n; i++)
        {
            if(arr[i]<=0)
            {
                count++;
            }
        }
       /* if(count>k)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }*/
        cout<<((count >= k) ? "NO" : "YES")<<endl;
    }
    return 0;
} 
