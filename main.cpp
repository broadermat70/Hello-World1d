#include <iostream>

using namespace std;

int hello1Function(string name1);

int hello2Function(string name2);

int main()

{

	string name1="mateen zadeh";

	hello1Function(name1);

	string name2="billy magdangal";

	hello2Function(name2);

	return 0;

}

#include <iostream>

using namespace std;

int hello1Function(string name1)

{

	cout << "hello World " << name1 << endl;

	return 0;

}


