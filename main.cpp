#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

#include "LinkedList.h"
#include "PreViolate.h"

int getPosition(string entry, LinkedList<string>* listPtr);


int main() {

  LinkedList<string>* listPtr = new LinkedList<string>();
  string entry;

  string data[] = {"one",
		   "two",
		   "three",
		   "four",
		   "five",
		   "six"};

  cout << "isEmpty returns: "
       << listPtr->isEmpty()
       << "; should be 1 (true)"
       << endl;

  try {
    for (int i = 0; i < 6; ++i) {
      if (listPtr->insert(i + 1, data[i]) ) {
	cout << "Inserted "
	     << listPtr->getEntry(i + 1)
	     << " at position "
	     << i + 1
	     << endl;
      }
      else {
	cout << "Cannot insert "
	     << data[i]
	     << " at position "
	     << i + 1
	     << endl;
      }
    }
  }
  catch (const PreViolate& e) {
    cerr << "ERROR: "
	 << e.what()
	 << endl;
  }

  cout << "All done!"
       << endl;

  cout << "What entry would you like to find? " << endl;
  cin >> entry;

  int result = getPosition(entry, listPtr);

  if(result > 0)
    cout << "Entry found at " << result << "." << endl;
  else
    cout << "Target not found." << endl;

  return EXIT_SUCCESS;
}
int getPosition(string entry, LinkedList<string>* listPtr) {

  while(!listPtr->isEmpty())
    {
      for(int i = 1; i < listPtr->getLength(); ++i)
	{
      	  if(listPtr->getEntry(i) == entry)
	    return i;
	}
      return -1;
    }
}
