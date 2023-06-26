#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main() {
    std::ifstream inputFile("in.txt");
    std::ofstream outputFile("out.txt");

    int n, m;
    inputFile >> n;

    std::vector<int> arrN(n);
    for (int i = 0; i < n; ++i) {
        inputFile >> arrN[i];
    }

    inputFile >> m;

    std::vector<int> arrM(m);
    for (int i = 0; i < m; ++i) {
        inputFile >> arrM[i];
    }

    
    std::rotate(arrM.rbegin(), arrM.rbegin() + 1, arrM.rend());
    std::rotate(arrN.begin(), arrN.begin() + 1, arrN.end());

    
    outputFile << m << std::endl;
    for (const auto& num : arrM) {
        outputFile << num << " ";
    }
    outputFile << std::endl;

    outputFile << n << std::endl;
    for (const auto& num : arrN) {
        outputFile << num << " ";
    }
    outputFile << std::endl;

    inputFile.close();
    outputFile.close();

    return 0;
}

