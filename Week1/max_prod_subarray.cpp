#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int product=1;
    int maxi=INT_MIN;
    for(int i=0; i<nums.size(); i++){
        product*=nums[i];
        if(product>maxi) maxi=product;
        if(product==0) product=1;
    }
    product=1;
    for(int i=nums.size()-1; i>=0; i--){
        product*=nums[i];
        if(product>maxi) maxi=product;
        if(product==0) product=1;
    }
    return maxi;
}