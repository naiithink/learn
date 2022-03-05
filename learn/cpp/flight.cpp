#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct Passenger
{
    int seat_number;
    string name;
    struct Passenger *next;
}
Passenger;

class Flight
{
    public:
        explicit Flight(const int capacity)
        {
            this->capacity = capacity;
            this->passenger_count = 0;
            this->passengers = NULL;
        }

        int init()
        {
            int res = -1;
            Passenger *temp = NULL;

            temp = new_block();

            if (temp == NULL)
                res = 0;
            else
                res = 1;

            return res;
        }

        int add_passenger(const string name)
        {
            int succeeded = -1;

            if (open_seats())
            {
                Passenger *temp;

                temp = new_block();
                if (temp != NULL)
                {
                    this->passengers = temp;
                    this->passengers->name = name;
                    this->passengers->seat_number = passenger_count + 1;
                }
                else
                    succeeded = 0;
            }
            else
            {
                succeeded = 0;
            }

            return succeeded;
        }

        int open_seats()
        {
            return capacity - passenger_count;
        }

        int cancel()
        {
            char answer = 0;
            cerr << "Are you sure?" << endl \
                    << "y/N: ";
            cin >> answer;

            switch (answer)
            {
                case 'N':
                    
                    break;
                case 'y':
                    
                    break;
                default:

            }
        }
    
    protected:
        int capacity;
        int passenger_count;
        Passenger *passengers;

        Passenger *new_block()
        {
            Passenger *res;

            res = (Passenger *) malloc(sizeof(Passenger));

            if (res != NULL)
            {
                this->passengers = res;
                this->passengers->name = "";
                this->passengers->seat_number = 0;
                this->passengers->next = NULL;

                free(res);
            }

            return res;
        }
};

int main()
{


    return 0;
}