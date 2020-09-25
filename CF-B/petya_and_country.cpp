#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,arr[1003];
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int max = INT_MIN;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }

    for(int i=0;i<n;i++){
        
        int ele = arr[i];
        int count = 1;
        int min = arr[i];

        for(int j=i-1;j>=0;j--){
            if(arr[j]<=min){
                count++;
                min = arr[j];
            }else{
                break;
            }
        }

        min = arr[i];

        for(int k=i+1;k<n;k++){
            if(arr[k]<=min){
                count++;
                min = arr[k];
            }else{
                break;
            }
        }

        if(count>max)
        max = count;
    }
    cout<<max<<endl;

}