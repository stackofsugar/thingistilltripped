#include <iostream>
#include <fstream>
#include <limits>
#include <string>
#include <vector>
using namespace std;

#ifndef __USE_MISC
typedef unsigned long int ulong;
#endif

struct account_t {
    string idname,
           fullname,
           password;
    ulong balance;
};

bool ac_valid(vector<account_t>& acc_data, string& idname){
    if(acc_data.size() == 1){
        return true;
    }
    else {
        size_t acc_sz = acc_data.size();
        for(size_t i = 0; i < acc_sz; i++){
            if(acc_data[i].idname == idname){
                return false;
            }
        }
        return true;
    }
}

string str_nosp(vector<account_t>& acc_data, bool do_validate){
    string buffer;
    bool healthy;
    while(1){
        healthy = true;
        if(getline(cin, buffer)){
            for(size_t i = 0; i < buffer.size(); i++){
                if(buffer[i] == ' '){
                    healthy = false;
                    break;
                }
            }
            if(healthy){
                if(do_validate){
                    if(ac_valid(acc_data, buffer)){
                        return buffer;
                    }
                    else {
                        cout << "Sorry, that ID is taken! \n> ";
                    }
                }
                else {
                    return buffer;
                }
            }
            else {
                cout << "ID can have no spaces! \n> ";
            }
        } 
        else {
            cout << "Invalid input! Please try again: ";
            cin.clear();
            cin.ignore();
        }
    }
}

string str_pass(){
    string buffer;
    bool healthy;
    while(1){
        healthy = true;
        if(getline(cin, buffer)){
            for(size_t i = 0; i < buffer.size(); i++){
                if(buffer[i] == ' '){
                    healthy = false;
                    break;
                }
            }
            if(healthy){
                if(buffer.size() <= 6){
                    cout << "Access codes need to be atleast 7 characters! \n> ";
                }
                else {
                    return buffer;
                }
            }
            else {
                cout << "Access codes can have no spaces! \n> ";
            }
        }
        else {
            cout << "Invalid input! Please try again: ";
            cin.clear();
            cin.ignore();
        }
    }
}

template<typename Ty>
Ty input(Ty floor = 0, Ty ceil = numeric_limits<Ty>::max(), 
    string floor_message = "Your input was too small! Try again: ",
    string ceil_message = "Your input was too big! Try again: ")
{
    Ty buffer;
    while(1){
        if(cin >> buffer){
            if(buffer < floor){
                cout << floor_message;
            } else if(buffer > ceil){
                cout << ceil_message;
            } else {
                return buffer;
            }
        } else {
            cout << "Invalid input! Please try again: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        }
    }
}

size_t user_valid(vector<account_t>& accounts, string& userid, string& passcode){
    size_t acc_sz = accounts.size();
    for(size_t i = 1; i < acc_sz; i++){
        if(accounts[i].idname == userid && accounts[i].password == passcode){
            return i;
        }
    }
    return 0;
}

int main(){
    int m_choice;
    vector<account_t> accounts_list;
    account_t reserving;
    accounts_list.push_back(reserving);     // reserving accounts_list[0]

    cout << "Welcome to Bank Jago Online \n";

    while(1){
        cout << "[1] Registration [2] Login [Other] Exit \n> ";
        m_choice = input<int>();

        if(m_choice == 1){
            while(1){
                account_t acbuf;
                string strbuf;
                int choice;
                cout << "Welcome to Bank Jago Registration Page \n"
                     << "Please enter your Full Name \n> ";
                cin.ignore();
                getline(cin, strbuf);
                acbuf.fullname = strbuf;
                cout << "Please enter your new ID \n"
                     << "(IDs can't have spaces) \n> ";
                strbuf = str_nosp(accounts_list, true);
                acbuf.idname = strbuf;
                cout << "Please enter your Bank Jago Online access code \n"
                     << "(Enter more than 6 alphanumeric characters with no spaces) \n> ";
                strbuf = str_pass();
                acbuf.password = strbuf;

                cout << "Do you want to do a first deposit? (1/0)\n> ";
                choice = input<int>(0,1);

                if(choice == 1){
                    ulong ulbuf;
                    cout << "Enter your first deposit: Rp ";
                    ulbuf = input<ulong>();
                    acbuf.balance = ulbuf;
                }
                else {
                    acbuf.balance = 0UL;
                }

                accounts_list.push_back(acbuf);

                cout << "Do you want to register again? (1/0) \n> ";
                choice = input<int>(0,1);
                if(choice == 0){
                    break;
                }
            }
        }
        else if(m_choice == 2){
            if(accounts_list.size() == 1){
                cout << "There are no registered accounts! \n";
            }
            else {
                size_t acc_num;
                string userid, passcode;
                cout << "Welcome to Bank Jago Online! Please enter your Login: \n";
                while(1){               // SECTION Login Loop
                    int choice;
                    cin.ignore();
                    cout << "User ID    : ";
                    userid = str_nosp(accounts_list, false);
                    cout << "Access Code: ";
                    passcode = str_pass();
                    
                    acc_num = user_valid(accounts_list, userid, passcode);
                    if(acc_num == 0){
                        cout << "You've entered a wrong user ID or Access Code! \n";
                    }
                    else {
                        while(1){           // SECTION Main event loop 
                            cout << "Welcome, " << accounts_list[acc_num].fullname << " ! \n"
                                 << "[1] Check Balance   [2] Deposit \n"
                                 << "[3] Withdraw        [4] Change Access Code \n"
                                 << "[Other] Exit to main menu \n> ";
                            choice = input<int>(0);

                            if(choice == 1){
                                cout << "Your balance is: \nRp " << accounts_list[acc_num].balance << '\n';
                            }
                            else if(choice == 2){
                                ulong deposited;
                                cout << "= Deposit = \n"
                                     << "Enter the amount of your deposit \n> Rp ";
                                deposited = input<ulong>();
                                accounts_list[acc_num].balance += deposited;
                                cout << "Your final balance is Rp " << accounts_list[acc_num].balance << '\n';
                            }
                            else if(choice == 3){
                                ulong withdrawn;
                                cout << "= Withdraw = \n"
                                     << "Enter your withdrawal amount (max. Rp 10.000.000 / tx) \n> Rp ";
                                while(1){
                                    withdrawn = input<ulong>();
                                    if(withdrawn > accounts_list[acc_num].balance){
                                        cout << "Insufficient funds. Your balance is Rp " << accounts_list[acc_num].balance << "> Rp ";
                                    }
                                    else {
                                        accounts_list[acc_num].balance -= withdrawn;
                                        break;
                                    }
                                }
                                cout << "Your final balance is Rp " << accounts_list[acc_num].balance << '\n';
                            }
                            else if(choice == 4){
                                string acc_code;
                                cout << "= Change Access Code = \n"
                                     << "Enter your current Access Code! \n> ";
                                while(1){
                                    acc_code = str_pass();
                                    if(acc_code != accounts_list[acc_num].password){
                                        cout << "Your current Access Code doesn't match! Try again! \n> ";
                                    }
                                    else {
                                        cout << "Enter your new password! \n> ";
                                        acc_code = str_pass();
                                        cout << "Your password is accepted! \n";
                                        accounts_list[acc_num].password = acc_code;
                                        break;
                                    }
                                }
                            }
                            else {
                                break;
                            }
                        }                   // !SECTION Main event loop
                        if(choice == 0){
                            break;
                        }
                    }
                }                       // !SECTION Login Loop
            }
        }
        else {
            cout << "Thank you for using Bank Jago Online service! \n";
            return 0;
        }
    }
}