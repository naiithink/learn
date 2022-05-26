#include <iostream>

using namespace std;

class Flight
{
    private:
        int capacity;
        int passenger_count;
        struct Passenger
        {
            int id;
            string name;
        }
        *passenger;
    
    public:
        Flight(const int capacity)
        {
            this->capacity = capacity;
            struct Passenger temp[capacity];
            this->passenger = &temp[0];
        }

        int getCapacity(void)
        {
            return capacity;
        }

        int getPassenger_count(void)
        {
            return passenger_count;
        }

        string getPassenger(int id)
        {
            return passenger[id].name;
        }

        int add_passenger(const string name)
        {
            int exit_status = -1;

            if (open_seats())
            {
                passenger[passenger_count].id = passenger_count;
                passenger[passenger_count].name = name;
                passenger_count++;

                exit_status = 1;
            }
            else
            {
                exit_status = 0;
            }

            return exit_status;
        }

        int open_seats(void)
        {
            return capacity - passenger_count;
        }
};

int main(void)
{
    const int person_count = 4;
    Flight flight(3);
    string people[person_count] = { "Harry", "Ron", "Hermione", "Ginny" };

    cout << flight.getCapacity() << endl;

    for (int i = 0, is_succeed = -1; i < person_count; i++)
    {
        is_succeed = flight.add_passenger(people[i]);
        switch (is_succeed)
        {
            case 1:
                cout << "done." << endl;
                cout << flight.open_seats() << endl;
                break;
            case 0:
                cout << "no more seats." << endl;
                cout << flight.open_seats() << endl;
                break;
            case -1:
                cout << "class: n/a" << endl;
                break;
            default:
                cout << "main: n/a" << endl;
        }
    }

    return 0;
}