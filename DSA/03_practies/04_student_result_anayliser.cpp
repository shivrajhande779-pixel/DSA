#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
private:
    string name;
    vector<int> marks;

public:
    void input() {
        int n;

        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter number of subjects: ";
        cin >> n;

        cout << "Enter marks:\n";

        for (int i = 0; i < n; i++) {
            int mark;
            cin >> mark;
            marks.push_back(mark);
        }
    }

    double average() {
        int sum = 0;

        for (int mark : marks)
            sum += mark;

        return (double)sum / marks.size();
    }

    int highest() {
        return *max_element(marks.begin(), marks.end());
    }

    int lowest() {
        return *min_element(marks.begin(), marks.end());
    }

    char grade() {
        double avg = average();

        if (avg >= 90)
            return 'A';
        else if (avg >= 75)
            return 'B';
        else if (avg >= 60)
            return 'C';
        else if (avg >= 50)
            return 'D';
        else
            return 'F';
    }

    void display() {
        cout << "\n===== Student Result =====\n";
        cout << "Name    : " << name << endl;
        cout << "Average : " << average() << endl;
        cout << "Highest : " << highest() << endl;
        cout << "Lowest  : " << lowest() << endl;
        cout << "Your Grade   : " << grade() << endl;
    }
};

int main() {

    Student s;

    s.input();
    s.display();

    return 0;
}