//
//  Controller.cpp
//  SampleMiniProject
//
//  Created by Stout, Zachary on 1/25/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    for (int index=12; index < 31; index++)
    {
        cout << "This is the " << index + 1 << " time in the loop" << endl;
    }
    string myname = "zach";
    cout << &myname << endl;
}
int addition (int a, int b)
{
    int r;
    r=a+b;
    return r;
}
int oldmain ()
{
    int z;
    z = addition(5,3);
    cout << "The result is " << z;
    return z;
}
int food [] = {1,3,5,7,9};
int n, result=0;

int newmain ()
{
    for ( n=0 ; n<5 ; ++n )
    {
        result += food[n];
    }
    cout << result;
    return 0;
}



