#include <iostream>
using namespace std;

class Time
{
private:
    int h, m, s;

public:

    Time(int hours=0, int minutes=0, int seconds=0)
    {
    }
    int getHour()
    {
        return h;
    }
    int getMinute()
    {
        return m;
    }
    int getSecond()
    {
        return s;
    }
    void printTime()
    {
        cout << "Time is " << h << ":" << m << ":" << s << endl;
    }
    void setHour(int hours)
    {
        this->h=hours;
    }
    void setMinute(int minutes)
    {
        this->m=minutes;
    }
    void setSecond(int seconds)
    {
        this->s=seconds;
    }
};

int main()
{
    int ntimes ;
    cout << "enter the time objects : ";
    cin >> ntimes;

    Time *timeArray = new Time[ntimes];

    timeArray[0].setHour(2);
    timeArray[0].setMinute(5);
    timeArray[0].setSecond(5);

    timeArray[1].setHour(20);
    timeArray[1].setMinute(50);
    timeArray[1].setSecond(50);


    for (int i = 0; i < ntimes; i++)
    {
        timeArray[i].printTime();
    }

    delete[] timeArray;

    return 0;
}