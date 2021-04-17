#include<bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &vet) {
    int i, cont, aux, TAM = vet.size(), j;
    for(i=0;i<TAM;i++){
        cont = 0;
        for(j=0;j<TAM-1;j++){
            if(vet[j] > vet[j+1]){
                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
                cont++;
            }
        }
        if(cont == 0) break;
    }
}

int main() {
    vector<int> v = {30, 2, 19, 3, 5, 10};
    bubbleSort(v);
    for(int x : v) cout << x << ' ' ;
    cout << '\n';
    return 0;
}
