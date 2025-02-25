#include <iostream>
#include <vector>
#include <limits.h>  

using namespace std;

int findFirstMaxNegativeBeforeT(const vector<int>& arr, int T) {
    int maxNegative = INT_MIN;
    int maxIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == T) {
            break;  
        }
        
        if (arr[i] < 0 && arr[i] > maxNegative) {
            maxNegative = arr[i];
            maxIndex = i;
        }
    }
    
    return maxIndex;
}

int main() {
    vector<int> A = {-3, -5, -2, 8, -1, 4, 0};
    int T = 8;  
    
    int result = findFirstMaxNegativeBeforeT(A, T);
    
    if (result != -1) {
        cout << "Номер першого максимального від'ємного елемента перед T: " << result << endl;
    } else {
        cout << "Не знайдено від'ємних елементів перед T." << endl;
    }

    return 0;
}
