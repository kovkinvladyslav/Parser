#include "Lexer.h"
#include "LexemString.h"
#include "Error.h"

int main() {

	std::string Test;
	int option;
	while (1) {
		bool exitCycle = false;
		std::cout << "Choose testfile (Enter a number)";
		std::cout << "\n1 -- TrueTest\n2 -- illigal character test\n3 -- Not Closed Comment test\n4 -- Blank file test\n5 -- exit\n";
		std::cin >> option;
		
		switch (option)
		{
		case 1:
			Test = "TrueTest1.txt";
			break;
		case 2:
			Test = "illigalSymbol.txt";
			break;
		case 3:
			Test = "NotClosedComment.txt";
			break;
		case 4:
			Test = "BlankTest.txt";
			break;
		case 5:
			exitCycle = true;
			break;
		default:
			break;
		}
		if (exitCycle) break;
		Tables LexTable;
		Attributes attributes;

		Lexer lexer(LexTable, attributes);

		std::printf("%s:\n", Test.c_str());
		lexer.scan(Test);
		
		LexTable.OutputAllTables();
		lexer.GetScanResult().Output();
		errorLogger.printErrors();
		errorLogger.clear();


		std::cout << "\n\nPress any key... \n";
		std::cin.ignore();
		std::cin.get();
	}

	return 0;
}