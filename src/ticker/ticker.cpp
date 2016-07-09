// ticker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main(int argc, char* argv[])
{
    while (true) 
    {
        cout << "Tick" << endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    };
    return 0;
}

