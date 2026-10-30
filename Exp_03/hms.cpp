#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time(int h = 0, int m = 0, int s = 0): hour(h), minute(m), second(s) {}
    Time add(const Time &t) {
        int h = hour + t.hour;
        int m = minute + t.minute;
        int s = second + t.second;
    
        // seconds into minutes
        m += s / 60;
        s = s % 60;

        // minutes into hours
        h += m / 60;
        m = m % 60;

        return Time(h, m, s);    
    }

    Time subtract(const Time &t) {
        int h = hour - t.hour;
        int m = minute - t.minute;
        int s = second - t.second;

        // Borrow 1 minute if seconds are negative
        if (s < 0) {
            s += 60;
            m--;
        }

        // Borrow 1 hour if minutes are negative
        if (m < 0) {
            m += 60;
            h--;
        }

        return Time(h, m, s);
    }

    // Display time
    void display() const {
        cout << hour << " Hour "
             << minute << " Minute "
             << second << " Second" << endl;
    }
};

int main() {
    Time t1(4, 50, 40);
    Time t2(2, 20, 30);

    Time sum = t1.add(t2);
    Time diff = t1.subtract(t2);

    cout << "First Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}