#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<(int)log2(n&(-n))<<endl;
    return 0;
}