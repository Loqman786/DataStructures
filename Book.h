#include <string>



class Book{
private:
	std::string title;
	std::string auther;
	std::string isbn;
	std::string publicationDate;
	bool status; // true if avilable, false if issued


public:
	Book(const std::string &title, const std::string &author, const std::string &isbn, const std::string &publicationDate);
	bool isAvailable() const;
	void setStatus(bool status);
	std::string getISBN() const;
};

