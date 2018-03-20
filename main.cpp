#include <iostream>
#include <cstring>
#include <utility>

class List{
private:
    List *head= nullptr, *tail= nullptr;

public:

    std::string animal;
    int key;
    List *next;
    List *prev;

    void add(std::string merde, int key);
    void printKeys();
    void printValues();

};

void List::add(std::string merde, int key){
    List* tmp;

    tmp = new List;
    tmp->animal = merde;
    tmp->key=key;
    tmp->next = head;
    head = tmp;



}

void List::printKeys() {
    List *p;
    p = head;
    std::cout   <<  "Keys:" <<  std::endl;
    while(p->next!= nullptr){
        std::cout <<  p->key   <<  std::endl;
        p=p->next;
    }
    std::cout <<  p->key   <<  std::endl;

}

void List::printValues() {
    List *p;
    p = head;
    std::cout   <<  "Values:" <<  std::endl;
    while(p->next!= nullptr){
        std::cout <<  p->animal   <<  std::endl;
        p=p->next;
    }
    std::cout <<  p->animal   <<  std::endl;

}

int main() {

    List list;
    list.add("merde", 1);
    list.add("kralicek", 2);
    list.add("ruzovy jednorozec", 3);
    list.add("ponik", 4);
    list.add("vegan", 5);
    list.add("okamura", 6);
    list.add("programator", 7);
    list.add("BFU", 8);
    list.add("kunovec", 9);
    list.add("uzivatel widli", 10);


    list.printKeys();
    list.printValues();

    return 0;

}
