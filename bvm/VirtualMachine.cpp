#include "VirtualMachine.h";

VirtualMachine::VirtualMachine()
{
	// Initialise the memory to 0x00.
	Memory = new char[30000] {0};
	Cur = &Memory[0]; // Set the default memory location to 0.


}
