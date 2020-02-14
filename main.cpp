#include <iostream>
#include <string.h>

using namespace std;
struct node
{
    int id;
    char name[40];
    int age;
    node *next;
};

class lq
{
    node* head ;
    node* tail;

public:
    lq()
    {
        head = tail = NULL;
    }

    void Enqueue (int _id, char _name[] , int _age)
    {
        node* temp = new node();
        temp ->id = _id;
        strcpy(temp ->name ,_name);
        temp ->age = _age;

        if (head == NULL)
        {
            head = tail = temp;
            temp ->next = NULL;
        }

        else
        {
            tail ->next = temp;
            tail = temp;
        }

    }

    node Dqueue ()
    {
        node* t = head;
        node result;
        if (head == NULL)
            return result;
        else
        {
            result.id = head->id;
            strcpy(result.name , head ->name);
            result.age = head ->age;
            head = head ->next;
        }
        cout <<"\n id = "<< result.id <<"\t name = " << result.name <<"\t age = " <<result.age;
        return result;

    }
};

int main()
{
    lq first;
    first.Enqueue(1,"hadeer",23);
    first.Enqueue(3,"hadeer",25);

    first.Dqueue();
    first.Dqueue();

    return 0;
}
