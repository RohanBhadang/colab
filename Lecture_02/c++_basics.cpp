/*
    Syntax :
      Every programming language is written by following it's rules to write
      it. This rules are known as the syntax of that programming language.
*/

#include <iostream>
using namespace std;
 
/*
    #include <iostream>

    => It is a preprocessor directive or a header file. This line means to
       include all the components of <iostream> library in our program during
       preprocessing or before the compiler starts compiling our program.

    using namespace std;

    => All the standard library components of c++ is defined under the std
       namespace therefore, we write using namespace std, jisse hume baar baar
       std:: prefix likhne ki jarurat nahi padegi.
*/

int main()
{
    /*
        It is the starting point of our Program, Compiler code ko yaha se
        read karna chalu karta hai.
    */

    cout<<"Hello c++"<<endl;

    /*
        cout -> output stream object (character output).
        <<   -> Insertion operator, iska kaam hai kisi bhi chij ko output
                stream me bhejna.
    */
}

/*
   Execution of this file :

   - When we run a .c++ file four files are created before printing the desired
     output

   1) .i : It is a preprocessing file which removes comments, expand macros
           and include all the code from header files into the code before 
           compiling.
   2) .s : It converts the .i file code into Assembly level code.
   3) .o : It finally converts the code into machine level(Binary) by creating
           objects.
   4) .exe : It is a final executable linker file. It links all of the .o sort of
             files and executes it. 
*/