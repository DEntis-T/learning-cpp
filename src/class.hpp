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

	void code(str_t lang)
	{
		using namespace std;

		cout << "Human is coding in " << lang << endl;
	}
};

int main_hook()
{
	Human human(true, 17);

	human.code("C++");

	std::cout << (human.alive ? "true" : "false") << " " << human.age << std::endl;
	return 0;
}
