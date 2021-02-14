#ifndef BANK_H
#define BANK_H

#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <string>
using std::cout, std::endl, std::cin, std::string, std::ostream;

//single transactions
class Transaction {
private:
  string name_of_transaction;
  string year_of_transaction;
  string month_of_transaction;
  string day_of_transaction;
  double amount;
public:
  void set_name();
  string get_name();
  void set_date();
  string get_date();
  void set_amount();
  double get_amount();
  Transaction();
  ~Transaction();
  Transaction(const Transaction& obj);
  Transaction& operator= (const Transaction& obj);
  friend ostream& operator<<(ostream& os, Transaction& obj) {
    os << "Transaction: " << obj.get_name() << endl;
    os<< "Date of Transaction: " << obj.get_date() << endl;
    os << "Amount charged: $" << obj.get_amount() << endl;
    os << "--------------------------------";
    return os << endl;
  }


};
//one bank account;
class Account {
private:
    string last_name;
    string first_name;
    string account_num;
    double balance_total;
    size_t num_transactions;
    //Transaction* recent_transactions; //list of transactions


public:
  void set_last_name();
  void set_first_name();
  string get_last_name();
  string get_first_name();
  string get_name();
  void set_account_num();
  string get_account_num();
  void set_balance_total(double input);
  double get_balance_total();
  void set_num_transactions(size_t input);
  size_t get_num_transactions();
  Account();
  ~Account();
  Account(const Account& obj);
  Account& operator= (const Account& obj);
  friend ostream& operator<<(ostream& os, Account& obj) {
    os << "Hello, " << obj.get_first_name() << "!" << endl;
    os << "Here is the bank information for your account:\nName: " << obj.get_name() << endl;
    os << "Account Number: " << obj.get_account_num() << endl;
    os << "\nYour current balance total is $" << obj.get_balance_total();
    os << "\nYou have had " << obj.get_num_transactions() << " transactions on this account";
    return os << endl;
  }
  // void add_transaction();



};


#endif
