#ifndef TICKET_MACHINE_H_
#define TICKET_MACHINE_H_
#include <iostream>

using namespace std;

/*
    Ticket Machine
    ----------------------
            | PRICE
    data    | balance
            | total
    ----------------------
            | showPrompt
            | getMoney
    methods | printTicket
            | showBalance
            | printError
*/
class TicketMachine {
private:
    const int PRICE_;
    int balance_;
    int total_;

public:
    TicketMachine(int price = 100, int balance = 0, int total = 0);
    virtual ~TicketMachine();
    void showPrompt();
    void insertMoney();
    void printTicket();
    void showBalance();
    void printError();
};

#endif