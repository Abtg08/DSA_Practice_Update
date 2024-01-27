#include<iostream>
namespace MyNamespace{
    int add(int a, int b){
        return a+b;
    }
}
int main(){
    int res= MyNamespace:: add(4, 6);
    std::cout<< res<<std::endl;
}