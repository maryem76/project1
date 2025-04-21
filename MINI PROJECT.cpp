#include <iostream>
#include "DRINKS.h"
#include "COFFEE.h"
#include "JUICE.h"
int main()
{   cout<< "OUR FAMOUS DRINKS ARE: " << endl;
cout << "------------------------------------\n";
    DRINKS* dr_ptr;
    COFFEE C1("COFFEE", true, 150, "CAPUCCINO");
    C1.print();
    dr_ptr = &C1;
    dr_ptr->ingredients();
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n" ;
    COFFEE C2("COFFEE", false, 200, "ICE COFFEE");
    C2.print();
    dr_ptr = &C2;
    dr_ptr->ingredients();
    cout << "----------------------------\n";
    JUICE J1("JUICE", false, "ORANGE", 100, "SMALL");
    J1.print();
    dr_ptr = &J1;
    dr_ptr->ingredients();
    cout << "*************************************\n" ;
    JUICE J2("JUICE", true, "APPLE", 160, "MEDIUM");
    J2.print();
    dr_ptr = &J2;
    dr_ptr->ingredients();
    cout << "##############################\n" ;
    JUICE J3("JUICE", true, "MANGO", 250, "LARGE");
     J3.print();
     dr_ptr = &J3;
     dr_ptr->ingredients();

}

