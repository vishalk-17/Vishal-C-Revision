// prodcut of sum from array advanced question

#include<iostream>
#include<vector>
using namespace std;
int productofSum(vector<int>&arr,int n){
    // step1 : find the peak element
    int peak = 0;
    while(peak<n-1 && arr[peak]<arr[peak+1]){
        peak++;
    }
    // step 2: find the sum in ascending order
    int sum1 =0;
    for(int  i=0;i<=peak;i++){
        sum1 += arr[i];
    }
    // step 3 : find the sum in decending order
    int sum2 = 0;
    for(int i=peak;i<n;i++){
        sum2 += arr[i];
    }
    // step 4 : find the prodcut
    return sum1*sum2;
}
int main(){
    vector<int>arr={3,8,14,12,10,7,4};
    int n = arr.size();
    cout<<productofSum(arr,n);
    return 0;

}