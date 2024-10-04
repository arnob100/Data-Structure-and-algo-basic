#include <bits/stdc++.h>
using namespace std;
int main() {
    typedef pair<int, pair<string, int>> pip;
    priority_queue<pip, vector<pip>, greater<pip>> pq;
    pq.push({4, {"p1", 5}}); pq.push({5, {"p2", 4}});pq.push({8, {"p3", 3}});
    pq.push({0, {"p4", 2}});pq.push({3, {"p5", 4}});int temp = 0;
    while (!pq.empty()) { auto it = pq.top();pq.pop();
        int arrivaltime = it.first;
        string process = it.second.first;
        int bursttime = it.second.second;
        if (temp < arrivaltime) {
            temp = arrivaltime;
        }int completiontime = temp + bursttime;temp = completiontime;
        int turnaroundtime = completiontime - arrivaltime;
        int waitingtime = turnaroundtime - bursttime;
        cout << "Process: " << process << " | Arrival Time: " << arrivaltime <<" | bursttime :"<<bursttime 
             << " | Completion Time: " << completiontime << " | Turnaround Time: " << turnaroundtime
             << " | Waiting Time: " << waitingtime
             << endl;}
    return 0;
}
