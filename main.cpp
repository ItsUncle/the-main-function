#include <iostream>
#include "classes&functions.h"
#include <conio.h>
using namespace std;

int main()
{
    cout << "\nHOTEL MANAGEMENT APPLICATION"
        << "\n---------------------------------"
        << "\nADMIN LOGIN - Press a"
        << "\nGUEST LOGIN - Press g"
        << "\nEXIT PROGRAM - Press ESC\n\n";
        char option;
        cin >> option;
    Admin admin1;
//    Room room1;
   // admin1.showAllGuests();

    if (option == 'a')
    {
        int choice;
        while(true) {
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
            << "\n10. Exit\n\n";

        cin >> choice;
        switch (choice)
        {
        case 1:
            admin1.showAllRooms();
            break;

        case 2:
           {string room_id;
            cout << "Please enter room id: ";
            cin >> room_id;
            admin1.searchForRoom(room_id);}
            break;

        case 3:
            admin1.searchAvailableRooms();
            break;

        case 4:
            {
              //  Room room_data
             vector<string> room_data;
            //Room;

            string id, type, price, status, occupants, capacity;
            cout << "Please enter the following\n"
                 << "room id: "; cin>> id;
            cout<< "\nroom type: "; cin>> type;
            cout<< "\nroom price: "; cin>> price;
            cout<< "\nroom status: "; cin>> status;
            cout<< "\nroom occupants: "; cin>> occupants;
            cout<< "\nroom capacity: "; cin>> capacity;
            room_data.push_back(id);
            room_data.push_back(type);
            room_data.push_back(price);
            room_data.push_back(status);
            room_data.push_back(occupants);
            room_data.push_back(capacity);
            admin1.addRoom(room_data);
            }

            break;

        case 5:
            {
            string room_id;
            cout << "Please enter room id: ";
            cin >> room_id;
           admin1.removeRoom(room_id);
           }
            break;

        case 6:
            admin1.showAllGuests();
            break;

        case 7:
            {
            string guest_id;
            cout << "Please enter guest id: ";
            cin >> guest_id;
            admin1.searchForGuest(guest_id);
            }
            break;

        case 8:
            {
                vector<string> guest_data;
                string name, id, contact_info, residency_status, room_id;
            cout << "Please enter the following\n"
                 << "guest name: "; cin>> name;
            cout<< "\nguest id: "; cin>> id;
            cout<< "\nguest contact: "; cin>> contact_info;
            cout<< "\nguest residency status: "; cin>> residency_status;
            cout<< "\nroom id: "; cin>> room_id;
            guest_data.push_back(name);
            guest_data.push_back(id);
            guest_data.push_back(contact_info);
            guest_data.push_back(residency_status);
            guest_data.push_back(room_id);
            admin1.addRoom(guest_data);
            }
            break;

        case 9:
            {
            string guest_id;;
            cout << "\nPlease enter guest id: ";
            cin >> guest_id;
            admin1.removeGuest(guest_id);
            }
            break;

        case 10:
            return 0;

        default:
            cout<< "You entered an invalid option, please try again."<< endl;
            break;
        }
        cin.get();
      }
    }

    else if (option == 'g')
    {
        while(true){
        int choice;
        cout << "\nPlease enter an option"
        << "\n----------------------------------"
            << "\n1.  Search for available rooms"
            << "\n2.  Check for personal details"
            << "\n3.  Leave room"
            << "\n4.  Exit\n\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "These are the list of rooms available"
                << "\n-----------------------------";
            admin1.searchAvailableRooms();
            break;
        case 2:
            {
            string guest_id;
            cout << "Please enter your id: ";
            cin >> guest_id;
            admin1.searchForGuest(guest_id);
            }
            break;
        case 3:
            {
            string guest_id;;
            cout << "\nPlease enter your guest id: ";
            cin >> guest_id;
            admin1.removeGuest(guest_id);
            }
            break;
        case 4:
            return 0;

        default:
            cout<< "You entered an invalid option, please try again."<< endl;
            break;
        }
        cin.get();
    }
    return 0;
    }
}
