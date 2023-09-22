#include <iostream>

struct Date {
    int day;
    int month;
    int year;

    void initDate() {
        day = 0;
        month = 0;
        year = 0;
    }

    void printDateOnConsole() {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }

    void acceptDateFromConsole() {
        std::cout << "Enter day: ";
        std::cin >> day;
        std::cout << "Enter month: ";
        std::cin >> month;
        std::cout << "Enter year: ";
        std::cin >> year;
    }

    bool isLeapYear() {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main() {
    Date date;
    int choice;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Initialize Date\n";
        std::cout << "2. Print Date\n";
        std::cout << "3. Accept Date\n";
        std::cout << "4. Check Leap Year\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                date.initDate();
                break;
            case 2:
                date.printDateOnConsole();
                break;
            case 3:
                date.acceptDateFromConsole();
                break;
            case 4:
                if (date.isLeapYear()) {
                    std::cout << "It is a leap year.\n";
                } else {
                    std::cout << "It is not a leap year.\n";
                }
                break;
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
