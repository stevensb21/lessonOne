#include <iostream>

#define SIZE 3

void printMenu(const std::string arr[SIZE]);

using namespace std;

int main(){

    const string play_[] = {"__Play__", "Settings", "Exit"};
    const string settings_[] = {"Play", "__Settings__", "Exit"};
    const string exit_[] = {"Play", "Settings", "__Exit__"};
    
    int current = 0;

    int cur = 2;


    while (true) {
        if ( current == 0) {
            printMenu(play_);
        } else if (current == 1) {
            printMenu(settings_);
        } else {
            printMenu(exit_);
        }
        

        
    }


    
    
    return 0;
}


void printMenu(const string arr[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }                
}