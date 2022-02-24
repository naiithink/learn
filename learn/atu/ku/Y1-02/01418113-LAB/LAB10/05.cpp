#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;

    Time duration2Time(int duration)
    {
        Time res(0);
        int temp_hour = 0;
        int temp_minute = 0;
        int temp_second = 0;

        temp_hour = (int)duration / 3600;

        if (temp_hour > 24 || duration < 0)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        else
        {
            duration -= this->hour * 3600;
            minute = (int)duration / 60;
            duration -= this->minute * 60;
            second = duration;
        }

        return res;
    }
//     int duration;

public:
    explicit Time(int hour, int minute, int second)
    {
        int duration = 0;

        this->hour = hour;
        this->minute = minute;
        this->second = second;
        
        duration = second + (minute * 60) + (hour * 3600);

        if (duration > 86400 || hour < 0 || minute < 0 || second < 0)
        {
            this->hour = 0;
            this->minute = 0;
            this->second = 0;
        }
    }

    explicit Time(int duration)
    {
        this->hour = (int)duration / 3600;

        if (this->hour > 24 || duration < 0)
        {
            this->hour = 0;
            this->minute = 0;
            this->second = 0;
        }
        else
        {
            duration -= this->hour * 3600;
            this->minute = (int)duration / 60;
            duration -= this->minute * 60;
            this->second = duration;
        }
    }

    int getDuration(void)
    {
        int duration = 0;

        duration += this->hour * 3600;
        duration += this->minute * 60;
        duration += this->second;
        
        return duration;
    }

    int getHour(void)
    {
        return this->hour;
    }

    int getMinute(void)
    {
        return this->minute;
    }

    int getSecond(void)
    {
        return this->second;
    }

    void setHour(const int in_hour)
    {
        hour = in_hour;
    }

    void setMinute(const int in_minute)
    {
        // minute = in_minute;
    }

    void setSecond(const int in_second)
    {
        // second = in_second;
        duration2Time();
    }

    Time add(Time other)
    {
        int sum_duration = 0;

        sum_duration = getDuration() + other.getDuration();
        
        Time res(sum_duration);
        
        return res;
    }

    int subtract(Time other)
    {
        int res = 0;
        Time day(24, 0, 0);

        res = getDuration() - other.getDuration();
        if (res < 0)
            res = day.getDuration() - getDuration();

        return res;
    }

    int equals(Time other)
    {
        int res = -1;
        int this_duration = 0;
        int other_duration = 0;

        this_duration = getDuration();
        other_duration = other.getDuration();

        if (this_duration == other_duration)
            res = 1;
        else
            res = 0;

        return res;
    }

    string toString(void)
    {
        string res;
        stringstream buf;

        buf << setfill('0') << setw(2) << this->hour << ":" << setw(2) << this->minute << ":" << setw(2) << this->second;
        buf >> res;

        return res;
    }
};

int main()
{
    Time foo(60);
    Time other(30);
    Time another(0);
    int n = 0;

    n = foo.getDuration();
    cout << n << endl;

    another = foo.add(other);
    cout << another.getDuration() << endl;

    n = foo.equals(other);
    cout << n << endl;

    cout << foo.toString() << endl;

    /* From the example */
    // Time a(2, 2, 2);
    // Time b(1, 1, 1);
    // Time c(82739);
    // Time d(9, 8, 4);
    // Time day(24, 0, 0);

    // cout << a.subtract(b) << endl;
    // cout << b.subtract(a) << endl;
   
    // cout << a.getDuration() << endl;
    // cout << b.getDuration() << endl;
   
    // cout << c.toString() << endl;
    // cout << d.toString() << endl;
    // cout << d.getDuration() << endl;
   
    // cout << day.getDuration() << endl;
    // cout << day.subtract(b) << endl;

    

    return 0;
}