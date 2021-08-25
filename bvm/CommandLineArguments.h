#pragma once

#include <iostream>
#include "CommandLineAction.h"

/// <summary>
/// CommandLineArguments
/// 
/// August 25, 2021
/// 
/// Defines the command line arguments for the application.
/// </summary>
class CommandLineArguments
{
	public:
		CommandLineAction Action;
		std::string IntermediateFilePath;

};