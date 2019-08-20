#include <iostream>
using namespace std;

class node
{
private:
    int data;
    node* next_node;
public:
    node(){
        this->data = 0;
        this->next_node=nullptr;
    }
    node(int data, node* next_node){
        this->data = data;
        this->next_node = next_node;
    }

    void set_data(int data){
        this->data = data;
    }
    void set_next_node(node* next_node){
        this->next_node = next_node;
    }

    int get_data(){
        return this->data;
    }
    node* get_next_node(){
        return this->next_node;
    }

    void print_node(){
        cout << "---------------------------------------------------" << endl;
        
        cout << "data of this node is : " << this->data << endl;
        cout << "next node address is : " << this->next_node << endl;
        cout << "address of the current node is : " << this << endl;

        cout << "---------------------------------------------------" << endl;
    }
};