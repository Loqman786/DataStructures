#include <string>
#include <list>
#include "Transaction.h"



class Member{
private:
	std::string memberID;
	std::string name;
	std::string address;
	std::string phone;
	std::list<Transaction> transactions;


public:
	Member(const std::string &memberID, const std::string &name, const std::string &address, const std::string &phone);
	void borrowBook(Transaction &transaction);
	void returnBook(Transaction &transaction);
	std::string getMemberID() const;

};

