#include "./cylinder.h"
#include "./menu.h"

int main()
{
    cylinder c;
    emenu choice;

    while ((choice = menu()) != EXIT)
    {
        switch (choice)
        {
        case getRadius:
            cout << "radius :" << c.getRadius() << endl;
            break;
        case getHeight:
            cout << "height :" << c.getHeight() << endl;
            break;
        case setRadius:
            cout << "enter radius :" << endl;
            double r;
            cin >> r;
            c.setRadius(r);
            break;
        case setHeight:
            cout << "enter height :" << endl;
            double h;
            c.setHeight(h);
            cin >> h;
            break;
        case getVolume:
            cout << "volume :" << c.getVolume() << endl;
            break;
        case printVolume:
            cout << "volume of cylinder :" << c.printVolume() << endl;
            break;
        default:
            cout << "wrong choice" << endl;
            break;
        }
    }
    cout << "get a life" << endl;
    return 0;
}