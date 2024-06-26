#include "brass.h"
#include "brassplus.h"
#include <iostream>
int main() {
    using std::cout;
    using std::endl;

    Brass b1("Lucy", 100001, 400);
    BrassPlus bp1("Lucifer", 100002, 500);

    b1.ViewAcct();
    cout << endl;
    bp1.ViewAcct();
    cout << endl;

    cout << "b1存钱:\n";
    b1.Deposit(400);
    cout << "bp1存钱:\n";
    bp1.Deposit(500);

    b1.ViewAcct();
    bp1.ViewAcct();

    b1.Withdraw(900);
    bp1.Withdraw(1000);

    return 0;
}