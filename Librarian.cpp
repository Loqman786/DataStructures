#include "Librarian.h"
#include <iostream>

Library::Library(const std::string &name, const std::string &address)
	: name(name), address(address) {}

void Libarary::addBook(const Book& book) {
	catalogue.addBook(book);
}


void Libarary::removeBook(const std::string &isbn) {
	catalogue.removeBook(isbn);
}

void Library::registerMember(const Member& member) {
	members[member.getMemberID()] = member;
}

void Library::deregisterMember(const std::string& memberID) {
	members.erase(memberID);

}


void Libarary::issueBook(const std::string& isbn, const std::string& memberID) {
	Book* book = catalogue.searchBook(isbn);
	if (book && book->isAvalilable() && members.find(memberID) != members.end()) {
		Transaction transaction(std::to_string(transaction.size() + 1), *book, members[memberID], std::time(nullptr));
		transactions.push_back(transaction);
		book->setStatus(false);
	}
	else {
		std::cerr << "Cannot issue book.\n";
	}
}


void Library::returnBook(const std::string &isbn, const std::string &memberID) {
	Book* book = catalogue.searchBook(isbn);
	if (book && !book->isAvailable() && members.find(memberID) != members.end()) {
		for (Transaction& transaction : transactions) {
			if (transaction.getBook().getISBN() == isbn && transaction.getMember().getMemberID() == memberID{
				transaction.setReturnData(std::time(nullptr));
				book->setStatus(true);
				break;

				}


		}


	}else{
		std::cerr << "Cannot return book.\n";
	}
}
