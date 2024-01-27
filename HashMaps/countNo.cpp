#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n" <<endl;
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]= {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    cout<<"Enter q"<<endl;
    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the no to fetch"<<endl;
        cin>>number;
        cout<<"The number of appearance is"<<endl;
        cout<<hash[number]<<endl;
    }
    return 0;
}