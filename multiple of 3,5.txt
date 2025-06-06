#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=1; i<1000; i++){
        if(i%3==0||i%5==0){
            sum +=1;
        }
    }
    cout<<"Sum of all multiple of 3 and 5 below 1000 is "<<sum<<endl;
    return 0;
}