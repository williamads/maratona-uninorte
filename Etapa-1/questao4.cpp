#include<bits/stdc++.h>
using namespace std;
typedef long long       ll;
#define N ((int)2e5+123)
inline void reads(string& x){char kk[N]; scanf("%s",kk); x = kk;}


int main(){
    ios_base::sync_with_stdio(0);
    string s;
    getline(cin,s);
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]==' ' || s[i] == '.'){
            for(int j = i-1;j>=0;j--){
                if(s[j] == ' ')break;
                cout << s[j];
            }
            cout << s[i];
        }
    }
    return 0;
}
