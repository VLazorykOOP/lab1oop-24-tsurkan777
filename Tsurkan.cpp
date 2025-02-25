#include <iostream>
#include <vector>
#include <cmath>


double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int a, b;
    int n;
    std::cin >> a >> b;
    std::cin >> n;

    std::vector<std::pair<int, int>> houses(n);


    for (int i = 0; i < n; ++i) {
        std::cin >> houses[i].first >> houses[i].second;
    }

    double totalDistance = 0;


    for (const auto& house : houses) {
        totalDistance += calculateDistance(a, b, house.first, house.second);
    }


    double averageDistance = totalDistance / n;


    std::cout << "Середня відстань від будинків до школи: " << averageDistance << std::endl;

    return 0;
}

