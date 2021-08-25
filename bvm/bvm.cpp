// bvm.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// Brainfuck Virtual Machine
// 
// August 24, 2021
// 
// A C++ windows Brainfuck bytecode interpreter.
//

#include <iostream>
#include <windows.h>
#include "CommandLineArguments.h"
#include "VirtualMachine.h"
#include "ProgramDefinitions.h"

// defines


// function prototypes
LPSTR* CommandLineArguments_Get();
CommandLineArguments CommandLineArguments_Parse(LPSTR CLAPointer); 

int main()
{
    const char* Ver = PROGRAM_VERSION;

    std::cout << "bvm (Brainfuck Virtual Machine)\n";
    printf_s("Version %s\n", Ver);

    std::cout << "©2021 starfrost\n";

    LPSTR* CommandLineArguments = CommandLineArguments_Get(); 

    LPSTR CLA_String = *CommandLineArguments;  // Dereference that pointer

    CommandLineArguments_Parse(CLA_String); 

}

LPSTR* CommandLineArguments_Get()
{
    LPSTR CLA = GetCommandLineA();
    
    LPSTR* CLAPointer = &CLA; // Get a pointer to it. 

    return CLAPointer; 
}

CommandLineArguments CommandLineArguments_Parse(LPSTR CLAPointer)
{
#ifdef DEBUG 
    std::cout << "DEBUG:";
    std::cout << CLAPointer;
    std::cout << "\n";

#endif
    CommandLineArguments CLAA;

    char* Tokens = strtok_s(CLAPointer, ",");

    int i = 0;

    while (Tokens != NULL)
    {
        i++;

    }

    return CLAA; 
};
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
