#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    m["a"]= 1;
    m["b"]= 2;
    m["c"]= 3;
    cout<<m.size()<<" "<<endl;//4
    // cout<<m.at("d")<<endl;
    if(m.count("b")>0){
        cout<<"b is present"<<endl;
    }
    return 0;
}
