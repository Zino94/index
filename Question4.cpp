// Zithile 1113552 2024/11/28
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Task {
    int profit, deadline;
    Task(int p, int d) : profit(p), deadline(d) {}
};

bool compare(Task& a, Task& b) {
    return a.profit > b.profit;
}

int main() {
    int N;
    cin >> N;
    vector<Task> tasks;
    for (int i = 0; i < N; i++) {
        int profit, deadline;
        cin >> profit >> deadline;
        tasks.emplace_back(profit, deadline);
    }

    sort(tasks.begin(), tasks.end(), compare);
    vector<int> slots(N, -1);
    int maxProfit = 0;
    vector<int> scheduledTasks;

    for (const Task& task : tasks) {
        for (int j = min(N, task.deadline) - 1; j >= 0; j--) {
            if (slots[j] == -1) {
                slots[j] = task.profit;
                maxProfit += task.profit;
                scheduledTasks.push_back(task.profit);
                break;
            }
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;
    cout << "Scheduled Tasks: [";
    for (size_t i = 0; i < scheduledTasks.size(); ++i) {
        cout << scheduledTasks[i];
        if (i != scheduledTasks.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
    return 0;
}

