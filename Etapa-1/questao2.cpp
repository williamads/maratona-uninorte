#include<bits/stdc++.h>
using namespace std;
typedef long long       ll;
#define N ((int)2e5+123)
inline void reads(string& x){char kk[N]; scanf("%s",kk); x = kk;}

struct pilha{
    int *v;
    int size = 1, capacity = 2;
    pilha(){
        v = (int*) malloc(sizeof(int) * capacity);
    }
    void push(int val){
        if(size + 1 == capacity){
            capacity *= 2;
            realloc(v,sizeof(int) * capacity);
        }
        v[size] = val;
        size++;
    }
    void pop(){
        size--;
        v[size] = 0;
    }
    int top(){
        return v[size-1];
    }
    bool empty(){return size == 0;}
    void mostra(){
        for(int i=1;i<size;i++)printf("%d ",v[i]);printf("\n");
    }
};

int main(){
    ios_base::sync_with_stdio(0);
    int n;scanf("%d", &n);
    pilha p;
    for(int i=1;i<=5;i++){
        p.push(i);
    }
    p.mostra();
    p.pop();
    p.pop();
    p.mostra();
    return 0;
}
