#include <iostream>
using namespace std;

class tollbooth
{
private:
    unsigned int carcount;
    unsigned int unpaidcount;
    double amt;

public:
    tollbooth()
    {
        this->carcount = 0;
        this->unpaidcount = 0;
        this->amt = 0;
    }

    void payingcar()
    {
        this->carcount = carcount + 1;
        this->amt = this->amt + 0.50;
    }

    void nopaycar()
    {
        this->unpaidcount = unpaidcount + 1;
        // car=car+0;
    }

    void printonconsole()
    {
        cout << "total number of paid cars :" << this->carcount << endl;
        cout << "total number of unpaid cars :" << this->unpaidcount << endl;
        cout << "total amount paid by cars:" << this->amt << endl;
    }

    void menu()
    {
        cout << "enter your choice :" << endl;
        cout << "1.car paid totals :" << endl;
        cout << "2.car unpaid totals :" << endl;
        cout << "3.total cars :" << endl;
        cout << "0.EXIT" << endl;
    }
};

int main()
{

    int choice;
    tollbooth t;
    do
    {

        t.menu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            t.payingcar();
            break;
        case 2:
            t.nopaycar();
            break;
        case 3:
            t.printonconsole();
            break;

        default:
            cout << "bhaag idhar se" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}