#include<bits/stdc++.h>
using namespace std;
typedef long long       ll;
#define N ((int)2e5+123)
inline void reads(string& x){char kk[N]; scanf("%s",kk); x = kk;}


int main(){
    ios_base::sync_with_stdio(0);
    int n;scanf("%d", &n);
    vector<int> v(n);
    for(int &x:v)scanf("%d",&x);
    int i = min_element(v.begin(),v.end()) - v.begin();
    swap(v[i],v[0]);
    int j = max_element(v.begin(),v.end())  - v.begin();
    swap(v[j],v[n-1]);
    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    return 0;
}
