 #include<iostream>
 using namespace std;
 int main(){
 int n;
    cout<<"Enter the Patter Size"<<endl;
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=i;j>=0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}