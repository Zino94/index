// Zithile 1113552 2024/11/28
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Element {
    int value, arrayIndex, elementIndex;
    Element(int v, int ai, int ei) : value(v), arrayIndex(ai), elementIndex(ei) {}
    bool operator>(const Element& other) const {
        return value > other.value;
    }
};

int main() {
    int K;
    cin >> K;
    vector<vector<int>> arrays(K);
    for (int i = 0; i < K; i++) {
        int size;
        cin >> size;
        arrays[i].resize(size);
        for (int j = 0; j < size; j++) cin >> arrays[i][j];
    }

    priority_queue<Element, vector<Element>, greater<Element>> pq;
    for (int i = 0; i < K; i++) {
        if (!arrays[i].empty()) {
            pq.emplace(arrays[i][0], i, 0);
        }
    }

    vector<int> result;
    while (!pq.empty()) {
        Element current = pq.top();
        pq.pop();
        result.push_back(current.value);
        if (current.elementIndex + 1 < arrays[current.arrayIndex].size()) {
            pq.emplace(arrays[current.arrayIndex][current.elementIndex + 1], current.arrayIndex, current.elementIndex + 1);
        }
    }

    cout << "Merged Array: [";
    for (size_t i = 0; i < result.size(); ++i) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}

