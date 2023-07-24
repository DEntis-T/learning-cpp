/*
* 
*
*	Functions 
*
*/

typedef std::string str_t;

namespace utils
{
	char space = ' ';
	///////////////////////////////////////////////////
	template<typename data, typename data2> auto max(data x, data2 y)
	{
		return x > y ? x : y;
	}
	///////////////////////////////////////////////////
	int echo(str_t output)
	{
		using namespace std;
		/* Using sexually transmitted diseases */
		if(output.empty())
		{
			cout << "ERROR: No output was specified" << endl;
			return 1;
		}
		cout << "INFO: " << output << endl;
		return 0;
	}
	///////////////////////////////////////////////////
	int echorectangle(int rows, int columns, char character, bool spaces)
	{
		using namespace std;
		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < columns; j++)
			{
				if(!spaces) cout << character;
				else if(spaces) cout << character << space;
			}
			cout << endl;
		}
		return 0;
	}
	////////////////////////////////////////
	bool strcomp(str_t str1, str_t str2)
	{
		if(str1.length() != str2.length())
		{
			return false;
		}
		for(int i = 0; i < str1.length(); i++)
		{
			if(str1.at(i) != str2.at(i))
			{
				return false;
			}
		}
		return true;
	}
}

namespace sampctl
{
	int print(str_t output)
	{
		using namespace std;
		/* Using sexually transmitted diseases */
		if(output.empty())
		{
			cout << "ERROR: No output was specified" << endl;
			return 1;
		}
		cout << "[sampctl] Thread: " << output << endl;
		return 0;
	}

	int processCommand(str_t input)
	{
		using namespace std;

		if(utils::strcomp(input, "help"))
		{
			utils::echo("This is a beta program");
		}
		else if(utils::strcomp(input, "max"))
		{
			utils::echo("Insert 2 numbers!");
			int input1, input2;
			cin >> input1 >> input2;
			cout << "Bigger element is: " << utils::max(input1, input2) << endl;
		}
		return 1;
	}
}