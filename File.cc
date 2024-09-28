#include "File.h"
using namespace std;

File :: File(string name, string content, Date& date){
    this->name = name;
    this->content = content;
    this->date = date;
}

bool File :: lessThan(Date& date){
    return this->date.lessThan(date);
}

void File :: print(){
    cout<<"File : "<<name<<" was added on ";
    date.print();
}

void File :: printContents(){
    cout<<"Contents : "<<content;
}