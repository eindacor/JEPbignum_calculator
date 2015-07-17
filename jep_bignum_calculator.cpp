#include "jep_bignum_calculator.h"

bool baseChange(string entered, jep::settings &user_settings)
{
	if (jep::checkWord(entered, 0, "base 10") || jep::checkWord(entered, 0, "decimal"))
	{
		user_settings.setBase(10);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 11") || jep::checkWord(entered, 0, "undenary"))
	{
		user_settings.setBase(11);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 12") || jep::checkWord(entered, 0, "dozenal") || jep::checkWord(entered, 0, "duodecimal"))
	{
		user_settings.setBase(12);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 13") || jep::checkWord(entered, 0, "tridecimal"))
	{
		user_settings.setBase(13);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 14") || jep::checkWord(entered, 0, "quattuordecimal"))
	{
		user_settings.setBase(14);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 15") || jep::checkWord(entered, 0, "quindecimal"))
	{
		user_settings.setBase(15);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 16") || jep::checkWord(entered, 0, "sexadecimal") || jep::checkWord(entered, 0, "hexadecimal"))
	{
		user_settings.setBase(16);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 17") || jep::checkWord(entered, 0, "septendecimal"))
	{
		user_settings.setBase(17);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 18") || jep::checkWord(entered, 0, "octodecimal"))
	{
		user_settings.setBase(18);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 19") || jep::checkWord(entered, 0, "nonadecimal"))
	{
		user_settings.setBase(19);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 20") || jep::checkWord(entered, 0, "vigesimal"))
	{
		user_settings.setBase(20);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 21"))
	{
		user_settings.setBase(21);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 22"))
	{
		user_settings.setBase(22);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 23"))
	{
		user_settings.setBase(23);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 24"))
	{
		user_settings.setBase(24);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 25"))
	{
		user_settings.setBase(25);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 26"))
	{
		user_settings.setBase(26);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 27"))
	{
		user_settings.setBase(27);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 28"))
	{
		user_settings.setBase(28);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 29"))
	{
		user_settings.setBase(29);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 30"))
	{
		user_settings.setBase(30);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 31"))
	{
		user_settings.setBase(31);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 32"))
	{
		user_settings.setBase(32);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 33"))
	{
		user_settings.setBase(33);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 34"))
	{
		user_settings.setBase(34);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 35"))
	{
		user_settings.setBase(35);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 36"))
	{
		user_settings.setBase(36);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 2") || jep::checkWord(entered, 0, "binary"))
	{
		user_settings.setBase(2);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 3") || jep::checkWord(entered, 0, "ternary"))
	{
		user_settings.setBase(3);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 4") || jep::checkWord(entered, 0, "quaternary"))
	{
		user_settings.setBase(4);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 5") || jep::checkWord(entered, 0, "quinary"))
	{
		user_settings.setBase(5);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 6") || jep::checkWord(entered, 0, "senary"))
	{
		user_settings.setBase(6);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 7") || jep::checkWord(entered, 0, "septenary"))
	{
		user_settings.setBase(7);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 8") || jep::checkWord(entered, 0, "octonary"))
	{
		user_settings.setBase(8);
		return true;
	}

	if (jep::checkWord(entered, 0, "base 9") || jep::checkWord(entered, 0, "nonary"))
	{
		user_settings.setBase(9);
		return true;
	}

	return false;
}

void changeColors(WORD colors)
{
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hstdout, colors);
}

void printShellLine()
{
	changeColors(GRAY_ON_BLACK);
	cout << "> ";
}

string getEntered()
{
	printShellLine();
	changeColors(GRAY_ON_BLACK);
	char entered[MAX_CHARS];
	cin.getline(entered, sizeof(entered));

	string entered_string;
	for (int i = 0; i < MAX_CHARS; i++)
	{
		if ((int)entered[i] == 0 || (int)entered[i] == -52)
			break;

		else entered_string += entered[i];
	}

	for (int i = 0; i < MAX_CHARS; i++)
		entered[i] = 0;

	return entered_string;
}

int main(int argc, char** argv)
{
	jep::settings user_settings(ONES_PLACE, false, false);
	bignum previous;
	jep::solution answer;

	// Remember how things were when we started
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

	if (argc > 1)
	{
		answer = solve(std::string(argv[1]), previous, user_settings);
		printShellLine();
		changeColors(WHITE_ON_BLACK);
		cout << answer.getSolved().getNumberString(true, false, 6) << endl;
		printShellLine(); 
		cout << endl;
	}

	bool exit = false;

	while (!exit)
	{
		string entered = getEntered();

		if (baseChange(entered, user_settings))
		{
			printShellLine();
			cout << endl;
			printShellLine();
			changeColors(GREEN_ON_BLACK);
			cout << "\tswitching from base " << previous.getBase() << " to base " << user_settings.getBase() << endl;
			printShellLine();
			changeColors(PURPLE_ON_BLACK);
			cout << previous.getNumberString(true, false, DEFAULT_DECIMAL_PLACES);
			changeColors(GRAY_ON_BLACK);
			cout << " --> ";

			previous.convertBase(user_settings.getBase());

			changeColors(WHITE_ON_BLACK);
			cout << previous.getNumberString(true, false, DEFAULT_DECIMAL_PLACES) << endl;
			printShellLine(); 
			cout << endl;
			continue;
		}
			
		jep::solution answer = jep::solve(entered, previous, user_settings);

		if (answer.getError())
		{
			printShellLine();
			changeColors(DARK_RED_ON_BLACK);
			cout << "INVALID ENTRY" << endl;
			printShellLine();
			cout << endl;
		}

		else
		{
			string answer_string = answer.getSolved().getNumberString(true, false, DEFAULT_DECIMAL_PLACES);
			printShellLine();
			cout << "= ";
			changeColors(WHITE_ON_BLACK);
			cout << answer_string << endl;
			printShellLine();
			cout << endl;
			previous = answer.getSolved();
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_INPUT_HANDLE), GRAY_ON_BLACK);

	return 0;
}