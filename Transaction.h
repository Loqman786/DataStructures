#include <string>
#include <ctime>
#include "Book.h"
#include "Member.h"




class Transaction{
private:
	Std::string transactionID;
	Book book;
	Member member;
	std::time_t issueDate;
	std::time_t returnDate;


public:
	Transaction(const std::string& tranactionID, const Book& book, const Member& member, std::time_t issueDate);
	void calculatedFine() const;

};

