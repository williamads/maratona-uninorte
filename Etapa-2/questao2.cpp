#include<bits/stdc++.h>

using namespace std;

int bubbleSort(vector<int> v) {
    int tam = v.size(), trocas = 0;
    for (int i = tam - 1; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            if (v[j] < v[j-1]) swap(v[j-1], v[j]), trocas++;
        }
    }
    for(int i = 0; i < tam; ++i) cout << v[i] << ' ' ;
    cout << '\n';
    return trocas;
}

int selectionSort(vector<int> v) {
    int tam = v.size(), trocas = 0, menor, idx;
    for (int i = 0; i < tam; ++i) {
        menor = v[i];
        idx = i;
        for(int j = i + 1; j < tam; ++j) {
            if (menor > v[j]) {
                menor = v[j];
                idx = j;
            }
        }
        if (i != idx) {
            swap(v[i], v[idx]);
            trocas++;
        }
    }
    for(int i = 0; i < tam; ++i) cout << v[i] << ' ';
    cout << '\n';
    return trocas;
}

int main() {
    vector<int> v = {10, 8, 6, 4, 2, 1, 3};
    cout << bubbleSort(v) << '\n';
    cout << selectionSort(v) << '\n';
    return 0;
}
