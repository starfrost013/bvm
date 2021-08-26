using System;
using System.Collections.Generic;
using System.Text;

namespace bic
{
    /// <summary>
    /// LaunchArgs
    /// 
    /// August 25, 2021
    /// 
    /// Defines the launch arguments for the Brainfuck Intermediate Compiler.
    /// </summary>
    public static class LaunchArgs
    {
        /// <summary>
        /// The file to intermediate compile. 
        /// </summary>
        public static string File { get; set; }

        /// <summary>
        /// The output file 
        /// </summary>
        public static string OutputFile { get; set; }

        public static CommandLineAction Action { get;  set; }
        public static void Parse(string[] Arguments)
        {
        
            switch (Arguments.Length)
            {
                case 0:
                    Action = CommandLineAction.DoNothing;
                    return; 
                case 1:
                case 2:
                default:
                    return; // presently do nothing but more args will be added.
                    
            }
               
        }
    }
}
