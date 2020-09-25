#include<bits/stdc++.h>
using namespace std;    
int main(){
    int t,n,arr[100005];
    cin>>t;
    while(t--){
        int count=0;
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i];

        int m = ((n*(n-1))/2)-1;

        for(int i=0;i<n;i++){
            for(int j=0;j<n-i;j++){
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1] = temp;
                    count++;
                }
            }
            if(count>m){
                break;
            }
        }
        if(count>m){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
