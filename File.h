#include <iostream>
#include <string>
#include "Date.h"

class File{
    public:
        File(string name,string content,Date& date);

        bool lessThan(Date& parameter);
        void print();
        void printContents();


    private:
       string name;
       string content;
       Date date; 

};