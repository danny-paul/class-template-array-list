//MUST exclude the implementation and header files from your project for the template to work correctly
#include <iostream>
#include "myList.h"

using namespace std;

int main()
{
    int a = 5;
    myList<int> temp;
    temp.print();
    temp.insert(a, 19);
    temp.remove(10);
    temp.print();
    temp.add(a);
    temp.print();
    temp.replace(a, 11);
    temp.print();
    system("PAUSE");

}