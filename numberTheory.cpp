#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define vi vector<int>


// Maximo divisor comum
int gdc(int a, int b) {
    int r = a % b;

    if (r == 0) return b;

    return gdc(b, r);
}

// Menor multiplo comum
int lmc (int a, int b) {
    return a / gcd(a,b) * b;
}

// Descobrir se N é primo
bool primeNumber(int n) {
    if (n == 1) return false;

    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Numeros primos entre 1 e N
vector<int> primeNumbers(int n) {
    vector<bool> lista(n+1, 1);
    vi primeList;

    lista[0] = 0;
    lista[1] = 0;

    for (int i = 2; i*i<=n; i++) {
        if(primeNumber(i)) {
            for (int j=i+i; j<=n; j += i) {
                lista[j] = 0;
            }
        }
    }

    for (int i=2; i<=n; i++) if (lista[i] == 1) primeList.push_back(i);

    return primeList;
}

int main() {
    int n;

    cin >> n;
    vi v = primeNumbers(n);

    for (auto x: v) {
        cout << x << " ";
    }
    cout << endl;
}