#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    void input()
    {
        cout << "Enter hour minute second: ";
        cin >> hour >> min >> sec;
    }

    Time add(Time t)
    {
        Time temp;

        temp.sec = sec + t.sec;
        temp.min = min + t.min + temp.sec / 60;
        temp.sec = temp.sec % 60;

        temp.hour = hour + t.hour + temp.min / 60;
        temp.min = temp.min % 60;

        return temp;
    }

    void display()
    {
        cout << hour << " : " << min << " : " << sec;
    }
};

int main()
{
    Time t1, t2, t3;

    t1.input();
    t2.input();

    t3 = t1.add(t2);

    cout << "Total Time = ";
    t3.display();

    return 0;
}