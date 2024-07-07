#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> skills(n);
    vector<int> subject1, subject2, subject3;

    for (int i = 0; i < n; ++i) {
        cin >> skills[i];
        if (skills[i] == 1) {
            subject1.push_back(i + 1);
        } else if (skills[i] == 2) {
            subject2.push_back(i + 1);
        } else if (skills[i] == 3) {
            subject3.push_back(i + 1);
        }
    }

    int num_teams = (int)std::min(subject1.size(), subject2.size());
    int a = (int)subject3.size();
    num_teams = std::min(num_teams, a);
    cout << num_teams << endl;

    for (int i = 0; i < num_teams; ++i) {
        cout << subject1[i] << " " << subject2[i] << " " << subject3[i] << endl;
    }

    return 0;
}
