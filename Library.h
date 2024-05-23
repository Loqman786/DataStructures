#include <string>
#include <unordered_map>
#include "Catalogue.h"
#include "Librarian.h"
#include "Transactions.h"


class Library

private:{
	std::string name;
	std::string affress;
	Catalogue catalogue;
	std::unordered_map<std::string, Member> members; //key: memberID
	std::unordered_map<std::string, Librarian> librarians; //key: EmployeeID
	std::list<Transaction> transactions;

public;
	Library(const std::string& name, const std::string& address);
	void addBook(const Book& book)
	void removeBook(const std::string& ishbn);
	void registerMember(const Member& member);
	void deregisterMember(const std::string &memberID);
	void IssueBook(const std::string &isbn, const std::string &memberID);
	void returnBook(const std::string &isbn, const std::string& memberID);

};


