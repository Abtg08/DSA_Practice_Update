#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0;
    vector<int> nums;
    cout<<"Enter the values"<< endl;
    while(i!= -1){
        cin>>i;
        nums.push_back(i);
    }
    auto a = find(nums.begin(), nums.end(), 0);
    if (a != nums.end()) {
        cout << "0 found at index: " << distance(nums.begin(), a) << endl;
    } else {
        cout << "0 not found in the vector." << endl;
    }
    return 0;
}