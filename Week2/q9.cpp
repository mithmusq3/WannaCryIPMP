#include<bits/stdc++.h>
using namespace std;

int myAtoi(string s) {
    if(s.length()==0) return 0;
    long ans=0;
    int sign=1;
    int i=0;
    while(i<s.length() && s[i]==' ') i++;
    s=s.substr(i);
    if(s[0]=='-') sign=-1;
    i=(s[0]=='+' || s[0]=='-')?1:0;
    while(i<s.length()){
        if(s[i]==' '|| !isdigit(s[i])) break;
        ans=ans*10+(s[i]-'0');
        if(sign==-1 && -1*ans<INT_MIN) return INT_MIN;
        if(sign==1 && ans>INT_MAX) return INT_MAX;
        i++;
    }
    return (int)(ans*sign);
}

int main(){
    string s="1024";
    cout<<myAtoi(s);
}