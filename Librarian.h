#include <string>
#include "Library.h"


class Librarian{
private:
	std::string employeeID;
	std::string name:


public:
	Librarian(const tstd::string& employeeid, const std::string& name);
	void addBook(Catalogue& catalogue, const Book& book);
	void removeBook(Catalogue& catalogue, const std::string &isbn;
	void registerMember(Libary &libary, const Member& member);
	void deregisterMember(Libary& libary, const std::string &memberID);

};

