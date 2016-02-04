//
// Created by ben on 04/02/16.
//

#include <iostream>

#include "Menu.h"

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
            case 5:
                viewData();
                break;
            case 9:
            default:
                break;
        }

    } while(option != 9);

}

void Menu::viewData() {
    cout << "Below are the items currently stored to be sorted. If no items appear, the data set is empty:" << endl;
    for(auto &i : list) {
        cout << i << endl;
    }
}

void Menu::setData() {

}

void Menu::loadSampleDataOne() {
    list.push_back(1.25f);
    cout << "The list now contains one item: 1.25" << endl;
}