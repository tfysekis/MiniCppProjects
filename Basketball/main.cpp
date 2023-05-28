#include "BasketballPlayer.h"
#include "Comparator.h"
#include "overloads.h"
#include "string"
#include <iostream>

using namespace std;

void first(){
    string name, surname, position;

    cin >> name >> surname >> position;
    BasketballPlayer p1(name, surname, position);

    cin >> name >> surname >> position;
    BasketballPlayer *p2 = new BasketballPlayer(name, surname, position);

    cout << p1.getName() << endl;
    cout << p2->getSurname() << endl;
    cout << p2->getPosition() << endl;

    cout << "Goodbye 1!" << endl;
}

void second(){
    string name, surname, position;

    cin >> name >> surname;
    Player p1(name, surname);

    cin >> name >> surname >> position;
    Player *p2 =
      new BasketballPlayer(name, surname, position);

    cout << p1.getPlayerDescription() << endl;
    cout << p2->getPlayerDescription() << endl;

    cout << "Goodbye 2!" << endl;
}

void third(){
    cout << boolalpha;

    string name, surname, position;

    cin >> name >> surname >> position;
    BasketballPlayer p1(name, surname, position);

    cin >> name >> surname >> position;
    BasketballPlayer *p2 =
      new BasketballPlayer(name, surname, position);

    cout << (p1 == *p2) << endl;

    cout << p1 << " " << *p2 << endl;

    print(1);
    print("test");
    print(p1);

    cout << "Goodbye 3!" << endl;
}

void fourth(){
    cout << boolalpha;

    vector<int> vect11, vect12;
    int temp;
    cin >> temp;
    while (temp >= 0) {
    vect11.push_back(temp);
    cin >> temp;
    }
    cin >> temp;
    while (temp >= 0) {
    vect12.push_back(temp);
    cin >> temp;
    }
    Comparator<int> c1(vect11, vect12);
    cout << c1.equals() << endl;

    vector<BasketballPlayer> vect21, vect22;
    string pos;
    cin >> pos;
    while (pos != "q") {
    BasketballPlayer p("", "", pos);
    vect21.push_back(p);
    cin >> pos;
    }
    cin >> pos;
    while (pos != "q") {
    BasketballPlayer p("", "", pos);
    vect22.push_back(p);
    cin >> pos;
    }

    Comparator<BasketballPlayer> c2(vect21, vect22);
    cout << c2.equals() << endl;

    cout << "Goodbye 4!" << endl;
}

int main() {

    cout << "Number: ";
    int number;
    cin >>  number;

    while (number == 1 || number == 2 || number == 3 || number == 4){
        if (number == 1){first();}
        else if (number == 2){second();}
        else if (number == 3){third();}
        else if (number == 4){fourth();}
        cout << "Number: ";
        cin >>  number;
    }
    cout << "Goodbye!" << endl;

}
