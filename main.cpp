// Example program
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int menuSelection = 0;
    
    cout << "----Menu----\n";
    cout << "1: Display All Components\n";
    cout << "2: Add a Component\n";
    cout << "3: Display Specific Component List\n";
    /*
    cout << "4: \n";
    cout << "5: \n";
    */
    cin >> menuSelection;
    
    switch (menuSelection)
    {
        case 1:
        cout << endl;
        cout << "CPUs\n----\n";
        //TODO: display all CPU's
        cout << "GPUs\n----\n";
        //TODO: display all GPUs
        cout << "Motherboards\n-----------\n";
        //display mobos
        cout << "RAM\n---\n";
        //display rams
        cout << "Storage\n-------\n";
        //display storages
        cout << "CPU Coolers\n----------\n"
        //display coolers
        cout << "etc\n";
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        default:
        break;
        
    }
}

