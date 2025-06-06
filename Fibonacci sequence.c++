#include <iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    int sum=0;
    while (a<4000000){
        if(a%2==0)
        sum+=a;
        int next = a + b;
        a = b;
        b = next;
    }
    cout<<"the sum is: "<<sum<<endl;
    return 0;
}