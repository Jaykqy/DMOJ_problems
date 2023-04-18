#include <iostream>
#include <string>

using namespace std;

void Boolean() {
    string sentence;
    int notcount;
    getline(cin, sentence);
    notcount = sentence.find("not");
    cout << notcount;
}

void balance(string str, int &balance) {                        // determines balance for one day
    bool positive = true;                                       // boolean stays true when balance is positive
    for (unsigned long int j = 0; j < str.length(); j++) {      // go through string char by char
        if (str[j] == '+')                                      // if char = '+'
            balance++;                                          // add to balance
        if (str[j] == '-')                                      // if minus
            balance--;                                          // take away from balance
        if (balance < 0) {                                      // if balance drops below 0
            balance = 0;                                        // reset balance to 0
            cout << "OH NOES!\n";                               // output error message
            positive = false;                                   // balance no longer positive
            break;                                              // break loop early
        }
    }
    if (positive)                                               // if balance did not go negative 
        cout << balance << endl;                                // print out balance of the day
}

void ShowMeMoney() {
    int bal = 0;                                                // current balance 
    string arr[5];                                              // array of string to hold 5 days of transactions
    cin >> arr[0];                                              // initialize all indexes
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];
    cin >> arr[4];
    for (int i = 0; i < 5; i++) {                               // call function to determine each days balance
        balance(arr[i], bal);                                   // pass string of current day and previous day's balance
    }
}

int main()
{
    ShowMeMoney();
}
