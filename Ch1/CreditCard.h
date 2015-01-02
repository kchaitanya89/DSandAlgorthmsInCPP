#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H
#include <string>
using std::string;
class CreditCard {
private:
    string number, name;
    int limit;
    double balance;
public:
    CreditCard(const string &no, const string &nm, int lim, double bal);
    CreditCard(const string &no, const string &nm, int limit);
    bool chargeIt(double price);
    void makePayment(double payment);   // make a payment
    string getNumber() const;
    string getName() const;
    double getBalance() const;
    int getLimit() const;
};
#endif // CREDIT_CARD_H
