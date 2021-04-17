#include<bits/stdc++.h>
using namespace std;
typedef long long       ll;
#define N ((int)2e5+123)
inline void reads(string& x){char kk[N]; scanf("%s",kk); x = kk;}

char s[N];

int main(){
    ios_base::sync_with_stdio(0);
    scanf("%s",s);
    int a=0,c=0,g=0,t=0;
    int n = strlen(s);
    for(int i=0;i<n;i++){
        a += s[i]=='A';
        g += s[i]=='G';
        t += s[i]=='T';
        c += s[i]=='C';
    }
    printf("i -> A: %d G: %d T: %d C: %d\n",a,g,t,c);
    printf("ii -> %d\n",n);
    return 0;
}
