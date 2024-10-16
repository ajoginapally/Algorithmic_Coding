#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int>& height) { //good but is O(n^2)
    int max_area = 0;
    for (int i = 0; i < height.size(); i++) {
        for (int j = i + 1; j < height.size(); j++) {
            int area = min(height[i], height[j]) * (j - i);
            max_area = max(max_area, area);
        }
    }
    return max_area;
}

int maxArea2(vector<int>& height) { //should be O(n)
    int max_area = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        max_area = max(max_area, (j-i) * min(height[i], height[j]));
        if (height[i] < height[j]) {
            i++;
        } else {
            j--;
        }
    }
    return max_area;
}


int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxArea2(height) << endl;
}