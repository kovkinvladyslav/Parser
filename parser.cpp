#include "parser.h"

Parser::Parser(const LexemString &Lexem_String)
    : lexems(Lexem_String), i(0)
{

}

void Parser::SCN(){
    if(i < lexems.get().size()){
        TS = lexems.get()[i++].code;
    }
}

Node* Parser::signal_program(){
    Node *node = new Node("<signal-program>");
    node->add_child(program());
    return node;
}

Node* Parser::program(){
    Node *node = new Node("<program>");
    if(lexems.get()[i].code == )
}