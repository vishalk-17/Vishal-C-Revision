// prodcut of sum form array
#include<iostream>
using namespace std;
int main(){
    int  arr[]={2,3,4,5};
    int n = 4;
    int product =1;
    for(int i=0;i<n;i++){
        product *= arr[i];
    }
    cout<<"product= "<<product;
    return 0;
}