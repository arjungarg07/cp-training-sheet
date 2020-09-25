#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n,m, arra[22];
    for(int i=0;i<22;i++){
        arra[i]=0;
    }

    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        arra[b] += a;
    }
    //     for(int i=0;i<=22;i++){
    //     cout<<arra[i]<<" ";
    // }
    int count = 0;
    for(int j=11;j>=0;j--){
        // cout<<arra[j]<<endl;
            if(n==0)
              break;

            if(n>arra[j]){
                count+=arra[j]*j;
                n-=arra[j];
                // cout<<n<<endl;
                continue;
            }
            if(n<=arra[j]){
                count+=n*j;
                n=0;
            }
        
    }
    cout<<count<<endl;
}