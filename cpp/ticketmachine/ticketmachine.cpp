#include "ticketmachine.h"

TicketMachine::TicketMachine(int price, int balance, int total) : 
PRICE_(price), balance_(balance), total_(total) {

}

TicketMachine::~TicketMachine() {}

void TicketMachine::showPrompt() {
    cout << "Insert money to buy ticket" << endl;
}

void TicketMachine::insertMoney() {
    cout << "Insert money: " << endl;
    int money;
    cin >> money;
    balance_ += money;
}

void TicketMachine::printError() {
    cout << "Error" << endl;
}

void TicketMachine::printTicket() {
    cout << "Ticket price: " << PRICE_ << endl;
}

void TicketMachine::showBalance() {
    cout << "Current balance: " << balance_ << endl;
}
