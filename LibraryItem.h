#ifndef SENECA_LIBRARYITEM_H
#define SENECA_LIBRARYITEM_H

#include <iostream>
using namespace std;
namespace seneca
{
	class LibraryItem
	{
	public:
		char* m_title;
		int m_year;

		LibraryItem();
		LibraryItem(const char* title, const int year);
		LibraryItem(const LibraryItem& lib);
		LibraryItem& operator=(const LibraryItem & lib);
		virtual ~LibraryItem();
		virtual ostream& display(ostream& ostr = cout) const;
	};
}

#endif // !SENECA_LIBRARYITEM_H


