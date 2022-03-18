#include <iostream>

using namespace std;

class Person
{
    public:
        explicit Person(string name);
        {
            this->name = name;
        }

    private:
        string name;

    public:
        int rename(string newName)
        {
            this->name = newName;
        }

        string getName(void)
        {
            return name;
        }
};

int main(void)
{
    Person me("Harry");

    me.rename("Ron");

    cout << me.getName() << endl;

    return 0;
}