/*
*
* Class testing
*
*
*/


class Human
{
public:
	bool alive;
	int age;

	Human(bool alive, int age) // constructor
	{
		this->alive = alive;
		this->age = age;
	}
};

// Inheritance
class DEntisT : public Human
{
public:
	void code(str_t lang)
	{
		using namespace std;

		cout << "DEntisT is coding in " << lang << endl;
	}
};

class Y_Less : public Human
{
public:
	void code_too(str_t lang)
	{
		using namespace std;

		cout << "Y_Less is coding in " << lang << endl;
	}
};


int main_hook()
{
	DEntisT human(true, 17);

	human.code("C++");
	return 0;
}
