//calculate the area of water collected by rain holded by bar graph/histogram
#include <bits/stdc++.h> 
using namespace std; 

int trap(vector<int> h) {
    int l = 0, r = h.size()-1, lmax = INT_MIN, rmax = INT_MIN, ans = 0;
    while(l < r){
        lmax = max(lmax,h[l]);
        rmax = max(rmax,h[r]);
        ans += (lmax<rmax)? lmax-h[l++] : rmax-h[r--];
    }
    return ans;
}