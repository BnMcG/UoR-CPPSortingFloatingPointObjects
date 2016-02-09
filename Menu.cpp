//
// Created by ben on 04/02/16.
//

#include <iostream>

#include "Menu.h"
#include "sorting/UoRBubbleSort.h"

using namespace std;

Menu::Menu() {
    // Menu for the program
    int option = -1;

    cout << endl << "Welcome to the C++ floating point object sorter!" << endl;
    cout << "================================================" << endl;

    do {
        cout << endl << "Please choose from one of the options below..." << endl << endl;
        cout << "(1) Enter data to sort" << endl;
        cout << "(2) Load sample data set 1" << endl;
        cout << "(3) Load sample data set 2" << endl;
        cout << "(4) Load sample data set 3" << endl;
        cout << "(5) View data set" << endl;
        cout << "(6) Sort using bubble sort" << endl;
        cout << "(9) Exit" << endl;

        cout << endl << endl;

        cout << "Please enter a number: ";
        cin >> option;

        switch(option) {
            case 1:
                break;
            case 2:
                loadSampleDataOne();
                break;
            case 3:
                loadSampleDataTwo();
                break;
            case 4:
                loadSampleDataThree();
                break;
            case 5:
                viewData();
                break;
            case 6: {
                Sorting::UoRBubbleSort ubs(uflist);
                uflist = ubs.sort();
                cout << "List now UoR bubble sorted!" << endl;
            }
            case 9:
            default:
                break;
        }

    } while(option != 9);

}

void Menu::viewData() {
    cout << "Below are the items currently stored to be sorted. If no items appear, the data set is empty:" << endl;
    for(auto &i : uflist) {

        if(floatingpoint::UoRFloat::isNaN(i)) {
            cout << "NaN with mantissa " << i.getMantissa() << endl;
        } else {
            cout << i.getFloat() << endl;
        }
    }
}

void Menu::setData() {

}

void Menu::loadSampleDataOne() {
    // Remove any previous items from the list
    uflist.clear();
    uflist.push_back(floatingpoint::UoRFloat(10));
    cout << "The list now contains one item: 1.25. Any previous items were removed." << endl;
}

void Menu::loadSampleDataTwo() {
    // Remove any previous items from the list
    uflist.clear();
    uflist.push_back(floatingpoint::UoRFloat(38.05690529220719f));
    uflist.push_back(floatingpoint::UoRFloat(40.8147767357453f));
    uflist.push_back(floatingpoint::UoRFloat(82.44280484654654f));
    uflist.push_back(floatingpoint::UoRFloat(29.655267720748956f));
    uflist.push_back(floatingpoint::UoRFloat(24.86252465694741f));
    uflist.push_back(floatingpoint::UoRFloat(81.17984809783519f));
    uflist.push_back(floatingpoint::UoRFloat(31.87366439811784f));
    uflist.push_back(floatingpoint::UoRFloat(20.033510524686303f));
    uflist.push_back(floatingpoint::UoRFloat(40.11811674327186f));

    cout << "The list now contains 10 items. Any previous items were removed." << endl;
}

void Menu::loadSampleDataThree() {

    // We need to pass exponents as pointers
    // Woe betide us
    int *exp1 = new int(4);
    int *nanexp = new int(255);

    uflist.clear();
    uflist.push_back(floatingpoint::UoRFloat(20));
    uflist.push_back(floatingpoint::UoRFloat(0.8, exp1));
    uflist.push_back(floatingpoint::UoRFloat(0.9, nanexp));
    uflist.push_back(floatingpoint::UoRFloat(0.0f));
    uflist.push_back(floatingpoint::UoRFloat(0.6, nanexp));
    uflist.push_back(floatingpoint::UoRFloat(0.532, nanexp));
    uflist.push_back(floatingpoint::UoRFloat(0.43, exp1));
    uflist.push_back(floatingpoint::UoRFloat(-0.0f));
    uflist.push_back(floatingpoint::UoRFloat(-1));

    cout << "The list now contains items such as +0, -0" << endl;
}