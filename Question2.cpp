// Zithile 1113552 2024/11/28
#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

struct Task {
    string name;
    int priority;
    Task(string n, int p) : name(n), priority(p) {}
    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};

int main() {
    int N;
    cin >> N;
    priority_queue<Task> pq;
    string command;
    while (N--) {
        cin >> command;
        if (command == "ADD") {
            string name;
            int priority;
            cin >> name >> priority;
            pq.emplace(name, priority);
        } else if (command == "GET") {
            if (!pq.empty()) {
                cout << pq.top().name << endl;
                pq.pop();
            }
        }
    }
    vector<pair<string, int>> remainingTasks;
    while (!pq.empty()) {
        remainingTasks.emplace_back(pq.top().name, pq.top().priority);
        pq.pop();
    }
    cout << "Remaining tasks: [";
    for (size_t i = 0; i < remainingTasks.size(); ++i) {
        cout << "('" << remainingTasks[i].first << "', " << remainingTasks[i].second << ")";
        if (i != remainingTasks.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}

