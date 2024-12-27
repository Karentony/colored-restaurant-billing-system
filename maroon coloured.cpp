#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;

void setColor(int colorCode) {
    
    cout << "\033[38;5;" << colorCode << "m";
}

void clearScreen() {
    
    system("CLS");
}

bool validateLogin(string username, string password) {
    
    const string correctUsername = "admin";
    const string correctPassword = "admin123";

    return (username == correctUsername && password == correctPassword);
}

int main() {
    
    system("Color 4F");

    string username, password;

   
    while (true) {
        clearScreen();  
        setColor(15);   
        cout << "\n\n\n";
        cout << "================================================\n";
        setColor(88);   
        cout << "          Restaurant Billing System             \n";
        setColor(15);   
        cout << "================================================\n\n";

        setColor(15);   
        cout << "Please login to continue...\n\n";
        
       
        setColor(15);   
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

     
        if (validateLogin(username, password)) {
            clearScreen();
            setColor(15);   
            cout << "\nLogin Successful!\n";
            setColor(88);   
            cout << "Welcome to the Restaurant Billing System\n";
            break; 
        } else {
            clearScreen();
            setColor(196); 
            cout << "\nInvalid Username or Password. Please try again.\n";
        }
    }

    return 0;
}
