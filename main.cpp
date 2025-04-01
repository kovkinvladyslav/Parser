#include <iostream>
#include <fstream>
#include <error.h>
#include "Lexer.h"
#include "Table.h"
#include "Attributes.h"
#include "LexemString.h"
#include "parser.h"
#include "Error.h"

int main(int argc, char** argv){

    if(argc != 2){
        std::cerr << "Compilation error: Path of file is required!";
        return 1;
    }

    std::string Test = argv[1];
    Tables LexTable;
    Attributes attributes;
    Lexer lexer(LexTable, attributes);
    lexer.scan(Test);
    LexemString scan_result = lexer.GetScanResult();
    scan_result.Output();
    LexTable.OutputAllTables();
    Parser parser(scan_result, LexTable);
    parser.generate_tree()->output_tree();
    errorLogger.printErrors();


    
}