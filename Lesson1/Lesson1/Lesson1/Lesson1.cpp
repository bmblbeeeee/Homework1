#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ifstream input("in.txt");
    ofstream output("out.txt");

    int n, m;
    input >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        input >> a[i];
    }

    input >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        input >> b[i];
    }

    reverse(a.begin(), a.end());
    output << m << endl;
    for (int i = 0; i < m; i++) {
        output << b[i] << " ";
    }
    output << endl;

    reverse(b.begin(), b.end());
    output << n << endl;
    for (int i = 1; i < n; i++) {
        output << a[i] << " ";
    }
    output << a[0] << endl;

    return 0;
}