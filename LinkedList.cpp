#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class LinkedList{
    private:
        Node* head;
    public:

    LinkedList(){
        head = nullptr;
    }

//insertion of nodes in a linked list
    void insertStart(int data){
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
        cout<<data<<"Inserted"<<" ";

        cout<<endl;

}

    void display(){
        cout<<"The Linked List is: "<<endl;
        Node *current = head;
        while(current!=NULL){
            cout<<current->data<<" ";
            current = current->next;
        }
        cout<<endl;
}
};

int main(){
    LinkedList list;
    list.insertStart(3);
    list.insertStart(4);
    list.insertStart(5);
    list.insertStart(2);
    list.insertStart(1);

    list.display();

return 0;
}