#include <iostream>
#include <vector>
using namespace std;

vector<int> removeNegativeElements(const vector<int>& arr) {
    vector<int> result;
    for (int num : arr) {
        if (num >= 0) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    vector<int> A = {-3, 5, -2, 8, -1, 4, 0};
    
    
    vector<int> filteredArray = removeNegativeElements(A);
    
    
    cout << "Масив після вилучення від'ємних елементів: ";
    for (int num : filteredArray) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
