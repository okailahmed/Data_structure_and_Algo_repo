#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList(int value)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }

//this is a destructor 
    ~LinkedList()
    {
        Node *temp= head;
        while(head)
        {
            head = head->next;
            delete head;
            temp = head;
        }

    }

    void printList()
    {
        Node *temp = head;

        while (temp)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void append(int value)
    {
        Node *newNode = new Node(value);  // this line mean we create new node 

        if(length == 0 )
        {
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
        length ++;
        
    }

    void delete_last()
    {
        if(length == 0)
        {
            return;
        }

        Node *temp = head;
        Node *pre = head;
        while(temp->next)
        {
            pre = temp;
            temp = temp->next;
        }
        tail = pre;
        tail->next= nullptr;
        length --;
        if(length == 0)
        {
            head = nullptr;
            tail = nullptr;
        }
        delete temp;
    }

    void get_head()
    {
        cout << "head : " << head->value << endl;
    }

    void get_tail()
    {
        cout << "tail : " << tail->value << endl;
    }

    void get_length()
    {
        cout << "length : " << length << endl;
    }
};

int main()
{
    LinkedList * myLinkedList = new LinkedList(4);


    // myLinkedList->get_head();
    // myLinkedList->get_tail();
    // myLinkedList->get_length();

    

    myLinkedList->append(6);
    myLinkedList->printList();
    
    return 0;
}