#include <bits/stdc++.h>
using namespace std;
string nameuser = "Guest";
long long sodu = 0;
long long nap;
bool ktmoney() {
    return sodu > 0;
}

void welcome() {
    cout << "===============================" << endl;
    cout << "    WELCOME TO MINIGAME" << endl;
    cout << "Hi '" << nameuser << "' welcome" << endl;
    cout << "Your balance: " << sodu << "$" << endl;
}

void homepage() {
    cout << "=============================" << endl;
    cout << "ENTER YOUR CHOICE" << endl;
    cout << "1).Setup profile" << endl;
    cout << "2).Check your balance" << endl;
    cout << "3).Deposit money" << endl;
    cout << "4).Start game" << endl;
    cout << "5).Exit" << endl;
    cout << "6).Credit" << endl;
    cout << "WARNING!!! PLEASE READ THE CONTENT IN THE CREDIT" << endl;
    cout << "=============================" << endl;
}

void setupprofile() {
    cout << endl << "=============================" << endl;
    cout << "SET UP PROFILE ZONE" << endl;
    cout << "Hi welcome to Setup profile page" << endl;
    cout << "Let's tell us your name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, nameuser);
    cout << "I will remember, your name is " << nameuser << endl;
    cout << "Thank you so much" << endl << endl;
}

void checkmoney() {
    cout << endl << "The current amount is: " << sodu << "$" << endl << endl;
}

void addmoney() {
    cout << endl << "=============================" << endl;
    cout << "     BANK" << endl;
    cout << "Enter amount you want add to your account: ";
    cin >> nap;
    if (nap < 0) {
        cout << "Invalid amount!" << endl;
        return;
    }
    cout << "Successful manipulation" << endl;
    cout << "Received successfully " << nap << "$ into " << nameuser << " account" << endl;
    sodu += nap;
    cout << "Total current balance: " << sodu << "$" << endl << endl;
}

void credit() {
    cout << endl << "==================================" << endl;
    cout << "          **CREDIT PAGE**" << endl;
    cout << "    ***PLEASE READ IT CAREFULLY***" << endl;
    cout << "1).This project is just for fun. #J4F" << endl;
    cout << "2).The project has NO incentive to gamble" << endl;
    cout << "3).Project written by Khoi" << endl;
    cout << "==================================" << endl << endl << endl;
}

int random1() {
    return rand();
}

int random2() {
    return rand() % (50 - 3 + 1) + 3;
}

int main() {
    srand(time(NULL));

    welcome();
    homepage();
    int luachon = 0;
    cout << "Enter your choice: ";
    cin >> luachon;

    if (luachon < 1 || luachon > 6) {
        cout << "Invalid choice! Please choose between 1 and 6." << endl;
        return main();
    }

    switch (luachon) {
        case 1:
            setupprofile();
            return main();
        case 2:
            checkmoney();
            return main();
        case 3:
            addmoney();
            return main();
        case 4:
            cout << endl << "==================================" << endl;
            cout << "          **PLAY ZONE**" << endl;
            if (!ktmoney()) {
                cout << "Your balance is not enough, please top up." << endl;
                addmoney();
                return main();
            } else {
                char betchosse;
                cout << "Type 'c' for even and 'l' for odd: ";
                cin >> betchosse;
                if (betchosse != 'c' && betchosse != 'l') {
                    cout << "Invalid choice! Please choose 'c' or 'l'." << endl;
                    return main();
                }

                cout << "Type the amount you want to bet: ";
                int betamount;
                cin >> betamount;
                if (betamount <= 0 || betamount > sodu) {
                    cout << "Invalid bet amount!" << endl;
                    return main();
                }

                int bet3 = random1();
                int bet4 = random2();
                cout << "Round 1: " << bet3 << endl;
                cout << "Round 2: " << bet4 << endl;
                cout << "Result: " << bet3 + bet4 << endl;

                if ((bet3 + bet4) % 2 == 0) {
                    if (betchosse == 'c') {
                        cout << "YOU WIN" << endl;
                        sodu += betamount;
                    } else {
                        cout << "YOU LOSE" << endl;
                        sodu -= betamount;
                    }
                } else {
                    if (betchosse == 'l') {
                        cout << "YOU WIN" << endl;
                        sodu += betamount;
                    } else {
                        cout << "YOU LOSE" << endl;
                        sodu -= betamount;
                    }
                }

                int choice;
                cout << "1. Continue playing" << endl;
                cout << "2. Back to main menu" << endl;
                cout << "3. Exit" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        return main();
                    case 2:
                        return main();
                    case 3:
                        return 0;
                    default:
                        cout << "Invalid choice! Exiting..." << endl;
                        return 0;
                }
            }
            break;
        case 5:
            cout << "Thank you, see you later '" << nameuser << "'" << endl << endl << endl << endl;
            break;
        case 6:
            credit();
            break;
    }
}
