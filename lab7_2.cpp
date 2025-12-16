#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, studentID, movie, day, lastMsg;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    getline(cin, name);

    cout << "?????: Fahsai: Wow!!! " << name << " is a really cool name." << endl;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
    getline(cin, studentID);

    int gear = stoi(studentID.substr(0, 2)) - 12;

    cout << name << ": Fahsai: I think you may be GEAR " << gear
         << ". I have a free movie ticket for you." << endl;

    cout << "Fahsai: Let's go to the cinema together!!!" << endl;
    cout << "Fahsai: What movie do you want to watch?" << endl;
    getline(cin, movie);

    cout << name << ": Fahsai: So....which day are you free to go with me?" << endl;
    getline(cin, day);

    cout << name << ": Fahsai: " << day
         << "....that is OK!!! I'm looking forward to watching "
         << movie << " with you." << endl;

    getline(cin, lastMsg);

    cout << name << ": Fahsai: 555+ see you " << day
         << ". Bye Bye \\(^ ^)/" << endl;

    return 0;
}
