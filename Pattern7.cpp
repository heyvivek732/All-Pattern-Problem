#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the Patter Size"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
           if(j<=n-i+1 ||j>=n+i-1){
               cout<<"*";
         } else{
            cout<<" ";
        }
      }
         for(int j=2*n-1;j>=1;j--){
           if(j<=n-i+1 ||j>=n+i-1){
               cout<<"*";
         } else{
            cout<<" ";
        }
    }
    cout<<endl;
  }
}