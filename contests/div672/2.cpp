#include<bits/stdc++.h>
using namespace std;    
int main(){
    int t,n,arr[100005];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i];

        int count=0;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a = arr[i];
                int b = arr[j];
                // cout<<"a"<<" "<<a<<" "<<"b "<<b<<' '<<(a&b)<<"<>"<<(a^b)<<endl;
                if((a&b)>=(a^b)){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}
