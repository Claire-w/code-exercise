#include "ticketmachine.h"

int main() {
    TicketMachine ticket_machine;

    ticket_machine.showBalance();
    ticket_machine.insertMoney();
    ticket_machine.showBalance();

    return 0;
}