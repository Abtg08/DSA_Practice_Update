#include<bits/stdc++.h>
using namespace std;
int main(){
    int nd;
    double base=0.01;
    double total=0;
    cout<<"Enter the no of days"<<endl;
    cin>> nd;
    for(int i=1; i<=nd; i++){
        total= total + base;
        base= base*2;
    }
    
    std::cout << std::fixed << std::setprecision(2);
    cout<< "The total sum after "<< nd << " days is: "<< endl;
    // cout<< base << endl;
    cout<< total<< endl;
}