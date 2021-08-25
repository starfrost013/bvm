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
    public class LaunchArgs
    {
        public string File { get; set; }

        public string OutputFile { get; set; }
    }
}
