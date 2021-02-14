#include "bank.h"


void Transaction::set_name() {
  cout << "Input name of transaction: ";
  cin >> name_of_transaction;
  cout << endl;
}
string Transaction::get_name() {
  return name_of_transaction;
}
void Transaction::set_date() {
  cout << "Input month of transaction: ";
  cin >> month_of_transaction;
  cout << "\nInput day of transaction: ";
  cin >> day_of_transaction;
  cout << "\nInput year of transaction: ";
  cin >> year_of_transaction;
  cout << endl;
}
string Transaction::get_date() {
  return month_of_transaction+"/"+day_of_transaction+"/"+year_of_transaction;
}
void Transaction::set_amount() {
  cout << "Input the amount for the transaction: ";
  cin >> amount;
  cout << endl;
}
double Transaction::get_amount() {
  return amount;
}
Transaction::Transaction() {
  set_name();
  set_date();
  set_amount();
}
Transaction::~Transaction() {}
Transaction::Transaction(const Transaction& obj) {
  name_of_transaction = obj.name_of_transaction;
  year_of_transaction = obj.year_of_transaction;
  month_of_transaction = obj.month_of_transaction;
  day_of_transaction = obj.day_of_transaction;
  amount = obj.amount;
}
Transaction& Transaction::operator= (const Transaction& obj) {
  if (this == &obj) {
    return *this;
  }
  name_of_transaction = obj.name_of_transaction;
  year_of_transaction = obj.year_of_transaction;
  month_of_transaction = obj.month_of_transaction;
  day_of_transaction = obj.day_of_transaction;
  amount = obj.amount;
  return *this;
}
void Account::set_last_name() {
  cout << "Input last name: ";
  cin >> last_name;
  cout << endl;
}
void Account::set_first_name() {
  cout << "Input first name: ";
  cin >> first_name;
  cout << endl;
}
string Account::get_first_name() {
  return first_name;
}
string Account::get_last_name() {
  return last_name;
}
string Account::get_name() {
  string output = last_name + ", " + first_name;
  return output;
}
void Account::set_account_num() {
  cout << "Input account number: ";
  cin >> account_num;
  cout << endl;
}
string Account::get_account_num() {
  return account_num;
}
void Account::set_balance_total(double input) {
  balance_total = input;
}
double Account::get_balance_total() {
  return balance_total;
}
void Account::set_num_transactions(size_t input) {
  num_transactions = input;
}
size_t Account::get_num_transactions() {
  return num_transactions;
}
Account::Account() {
  set_last_name();
  set_first_name();
  set_account_num();
  set_balance_total(0.00);
  set_num_transactions(0);
  // recent_transactions = new Transaction[num_transactions];
  


}
Account::~Account() {}
Account::Account(const Account& obj) {
  last_name = obj.last_name;
  first_name = obj.first_name;
  account_num = obj.account_num;
  balance_total = obj.balance_total;
  num_transactions = obj.num_transactions;
}
Account& Account::operator=(const Account& obj) {
  if (this == &obj) {
    return *this;
  }
  last_name = obj.last_name;
  first_name = obj.first_name;
  account_num = obj.account_num;
  balance_total = obj.balance_total;
  num_transactions = obj.num_transactions;
  return *this;
}
void Account::add_transaction() {

}
