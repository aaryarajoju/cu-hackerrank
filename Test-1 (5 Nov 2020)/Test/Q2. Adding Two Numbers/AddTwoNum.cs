using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;



class Result
{

    /*
     * Complete the 'addNumbers' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     *  1. FLOAT a
     *  2. FLOAT b
     */

    public static int addNumbers(float a, float b)
    {

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        float a = Convert.ToSingle(Console.ReadLine().Trim());

        float b = Convert.ToSingle(Console.ReadLine().Trim());

        int result = Result.addNumbers(a, b);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
