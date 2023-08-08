#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int gc(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else if(a==b){
            return a;
        }else{
            b=b%a;
        }
    }
    return max(a,b);
}

int main(){
    int g;
    g = gc(4,72);
    cout << g << endl;
}