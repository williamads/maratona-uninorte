#include<bits/stdc++.h>
using namespace std;
typedef long long       ll;
#define N ((int)2e5+123)
inline void reads(string& x){char kk[N]; scanf("%s",kk); x = kk;}


int main(){
    ios_base::sync_with_stdio(0);
    int n = 10;
    vector<int> v(n);
    iota(v.begin(),v.end(),0);
    for(int i=0;i<n;i+=2)swap(v[i],v[i+1]);
    for(int x : v)printf("%d ",x);printf("\n");
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(v[j] < v[j-1])swap(v[j],v[j-1]);
        }
    }
    for(int i=0;i<n;i++)printf("%d ",v[i]);
    printf("\n");
    return 0;
}
