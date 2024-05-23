#include <unordered_map>
#include "Book.h"


class Catalogue{
Private:
	std::unordered_map<std::string, Book> books; // Key:  isbn

public:
	void addBook(const Book& book);
	void removeBook(const std::string& ishbn);
	Book* searchBook(const std::string& isbn);

};

