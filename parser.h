#include "LexemString.h"
#include "tree.h"
#include <vector>



class Parser{
private:
    int TS;
    const LexemString& lexems; 
    int i;
public:
    Parser(const LexemString &Lexem_String);
    void SCN();
    Tree *generate_tree(LexemString LexemString);
    Node *signal_program();
    Node *program();
    Node *procedure_identifier();
    Node *block();
    Node *declarations();
    Node *statements_list();
    Node *empty();
    Node *procedure_declarations();
    Node *procedure();
    Node *parameters_list();
    Node *declarations_list();
    Node *declaration();
    Node *variable_identifier();
    Node *identifiers_list();
    Node *attribute();
    Node *attributes_list();
    Node *identifier();
};