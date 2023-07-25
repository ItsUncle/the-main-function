#include <iostream>
#include "classes&functions.h"
#include <conio.h>
using namespace std;

MainMenu()
{
     cout << "\nHOTEL MANAGEMENT APPLICATION"
        << "\n---------------------------------"
        << "\nADMIN LOGIN - Press a"
        << "\nGUEST LOGIN - Press g"
        << "\nEXIT PROGRAM - Press ESC\n\n";
}
int main() {
    char option;
    bool main_menu = false;
    Admin admin1;
    Guest guest1;

        while (!main_menu) {
        MainMenu();
        cin >> option;

        if (option == 'a') {
            bool login_success = admin1.adminLogin();
            if (login_success) {
                int choice;
                char try_again = 'y';
               while (try_again == 'y') {
        cout << "\nPlease enter an option"
        << "\n---------------------------------"
            << "\n1.  Show all rooms"
            << "\n2.  Search for a particular room"
            << "\n3.  Search for unoccupied rooms"
            << "\n4.  Add room"
            << "\n5.  Remove a room"
            << "\n6.  Show all guests"
            << "\n7.  Search for Guest"
            << "\n8.  Add Guest"
            << "\n9.  Remove Guest"
            << "\n10. Exit\n"
            << "\nEnter 0 to go to main menu.\n"
            << ": ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            admin1.showAllRooms();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 2:
            admin1.searchForRoom();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 3:
            admin1.searchAvailableRooms();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 4:
            admin1.addRoom();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 5:
           admin1.removeRoom();
           cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 6:
            admin1.showAllGuests();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 7:
            admin1.searchForGuest();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 8:
            admin1.addGuest();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 9:
            admin1.removeGuest();
            cout << "press y to go back, press 0 to go to main menu: ";
            cin >> try_again;
            break;

        case 10:
            return 0;

        case 0:
            try_again = 'n';
            break;

        default:
            cout<< "You entered an invalid option, please try again. "<< endl;
            try_again = 'y';
            break;
        }
      }

    }
}

    else if (option == 'g') {
            bool login_success = guest1.guestLogin();
            if (login_success) {
                int choice;
                cout << "\nPlease enter an option"
                     << "\n----------------------------------"
                     << "\n1.  Search for available rooms"
                     << "\n2.  Check for personal details"
                     << "\n3.  Leave room"
                     << "\n4.  Exit\n\n";
                cin >> choice;
                switch (choice) {
                    case 1:
                        cout << "These are the list of rooms available"
                             << "\n-----------------------------";
                        admin1.searchAvailableRooms();
                        break;
                    case 2:
                        admin1.searchForGuest();
                        break;
                    case 3:
                        admin1.removeGuest();
                        break;
                    case 4:
                        return 0;
                    default:
                        cout << "You entered an invalid option, please try again." << endl;
                        break;
                }
            }
        } else {
            cout << "Invalid option. Please try again." << endl;
        }
    }
    return 0;
}


