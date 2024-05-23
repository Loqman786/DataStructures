#include "Catalogue.h"


void Catalogue::addBook(const Book& book) {
	books[book.getISBN()] = book;
}


void Catalogue::removeBook(const std::string &isbn) {
	books.erase(isbn);
}

Book* Catalogue::searchBook(const std::string& isbn) {
	auto it = books.find(isbn);
	return (it != books.end()) ? &it->second : nullptr;
}