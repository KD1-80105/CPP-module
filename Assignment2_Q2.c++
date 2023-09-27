// #include <iostream>
// #include<string>
// using namespace ;

// class Address
// {
// private:
//   string building;
//   string street;
//   string city;
//   int pin;

// public:
//   Address()
//   {
//     this->building = building;
//     this->street = street;
//     this->city = city;
//     this->pin = pin;
//   }

//   void acceptadd()
//   {
//     cout << "enter building name ";
//     cin >> building;
//     cout << endl;
//     cout << "enter street name ";
//     cin >> street;
//     cout << endl;
//     cout << "enter city name ";
//     cin >> city;
//     cout << endl;
//     cout << "enter pin ";
//     cin >> pin;
//     cout << endl;
//   }
//   void displayadd()
//   {
//     cout << "building: " << this->building << "street:" << this->street << "  city:" << this->city << " pin:" << this->pin;
//   }
//   string get_building()
//   {
//     return building;
//   }
//   string get_street()
//   {
//     return street;
//   }

//   string get_city()
//   {
//     return city;
//   }
//   int get_pin()
//   {
//     return pin;
//   }

//   void set_building(string building)
//   {
//     this->building = building;
//   }
//   void set_street(string street)
//   {
//     this->street = street;
//   }

//   void set_city(string city)
//   {
//     this->city = city;
//   }

//   void set_pin(int pin)
//   {
//     this->pin = pin;
//   }
// };
// int main()
// {
//   Address A1;
//   Address A2;
//   A1.acceptadd();

//   A1.acceptadd();
//  A1.displayadd();
//   A1.get_building();
//   A1.get_street();
//   A1.get_city();
//   A1. get_pin();
//   A2.set_building();
//   A2.set_street();
//   A2.set_city();
//   A2.set_pin();

//   return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
  string street;
  string city;
  string state;
  string zipCode;

public:
  Address() {}

  Address(string street, string city, string state, string zipCode)
  {
  }

  string getStreet() const
  {
    return street;
  }

  string getCity() const
  {
    return city;
  }

  string getState() const
  {
    return state;
  }

  string getZipCode() const
  {
    return zipCode;
  }

  void setStreet(string street)
  {
    this->street = street;
  }

  void setCity(string city)
  {
    this->city = city;
  }

  void setState(string state)
  {
    this->state = state;
  }

  void setZipCode(string zipCode)
  {
    this->zipCode = zipCode;
  }

  void accept()
  {
    cout << "Enter street: ";
    getline(cin >> ws, street);

    cout << "Enter city: ";
    getline(cin >> ws, city);

    cout << "Enter state: ";
    getline(cin >> ws, state);

    cout << "Enter zip code: ";
    getline(cin >> ws, zipCode);
  }

  void display() const
  {
    cout << "Street: " << street << endl;
    cout << "City: " << city << endl;
    cout << "State: " << state << endl;
    cout << "Zip Code: " << zipCode << endl;
  }
};

int main()
{
  Address myAddress;

  myAddress.accept();
  cout << endl;

  myAddress.display();

  return 0;
}
