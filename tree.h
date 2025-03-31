#include <vector>
#include <string>

class Node{
    std::vector<Node*> children;
    std::string value;
    public:
    Node(std::string new_value){
        value = new_value;
    }
    void add_child(Node *newNode){
        children.push_back(newNode);
    }
    void set_value(std::string new_value){
        value = new_value;
    }
};

class Tree{
    Node* root;
    public:
    Tree(){
        root = nullptr;
    }
    void set_root(Node *root_node){
        root = root_node;
    }
};
