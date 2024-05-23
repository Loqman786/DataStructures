#include "Book.h"


Book::Book(const std::string &title, const std::string &author, const std::string &isbn, const std::string &publicationDate)
	: title(title), author(author), isbn(isbn), publicationDate(publicationDate), status(true) {}

bool Book::isAvailable() const {
	return status;
}



void Book::setStatus(BOOL status) {
	this->status = status;
}



std::string Book::getISBN() const {
	return isbn;
}