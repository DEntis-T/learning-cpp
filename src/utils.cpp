/*
* 
*
*	Functions 
*
*/

typedef std::string str;

namespace utils
{
	char space = ' ';
	///////////////////////////////////////////////////
	int echo(str output)
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
	int echorectangle(int rows, int columns, char character)
	{
		using namespace std;
		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < columns; j++)
			{
				cout << character << space;
			}
			cout << endl;
		}
		return 0;
	}
	////////////////////////////////////////
	bool strcomp(str str1, str str2)
	{
		if(str1.length() != str2.length())
		{
			return false;
		}
		for(int i; i < str1.length(); i++)
		{
			if(str1.at(i) != str2.at(i))
			{
				return false;
			}
		}
		return true;
	}
}