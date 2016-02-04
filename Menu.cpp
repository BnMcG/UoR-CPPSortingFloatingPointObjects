//
// Created by ben on 04/02/16.
//

#include <iostream>

#include "Menu.h"
#include "sorting/BubbleSort.h"

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
                Sorting::BubbleSort bs(list);
                list = bs.sort();
                cout << "List now bubble sorted! Be sure to view the list by choosing the appropriate menu item!" << endl;
            }

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
    // Remove any previous items from the list
    list.clear();
    list.push_back(1.25f);
    cout << "The list now contains one item: 1.25. Any previous items were removed." << endl;
}

void Menu::loadSampleDataTwo() {
    // Remove any previous items from the list
    list.clear();
    list.push_back(73.59509428489079f);
    list.push_back(38.05690529220719f);
    list.push_back(40.8147767357453f);
    list.push_back(82.44280484654654f);
    list.push_back(29.655267720748956f);
    list.push_back(24.86252465694741f);
    list.push_back(81.17984809783519f);
    list.push_back(31.87366439811784f);
    list.push_back(20.033510524686303f);
    list.push_back(40.11811674327186f);

    cout << "The list now contains 10 items. Any previous items were removed." << endl;
}

void Menu::loadSampleDataThree() {
    list.clear();
    list.push_back(27.52986550373471f);
    list.push_back(-0.0f);
    list.push_back(0.0f);
    list.push_back(-33.16274463433734f);
    list.push_back(95.60185162280405f);
    list.push_back(0.0f);
    list.push_back(95.71985644171795f);
    list.push_back(-0.0f);
    list.push_back(-44.9345345334543f);

    cout << "The list now contains items such as +0, -0" << endl;
}