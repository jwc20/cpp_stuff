// step 1: add "#include <fstream>" to the top of your file

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // step 2: declare an input stream variable.  I've named it "infile" but you can make up your 
    // own name.  We call this a stream variable in C++, but it may be easier to think of it as a
    // "file variable" since it represents a file.
    
    // Once you've declared a stream variable, you will use that variable (e.g., "infile") in your
    // program to refer to the file, instead of using the actual name of the file.
    
    ifstream infile;
    char ch;

    // step 3: open the file, which means
            // a) get it ready for reading
            // b) associate the stream variable with a physical file
    infile.open("data.txt");

    // OR, use the following code to let the user enter the name of the file:
    
    /*
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;
    infile.open(filename);
    */
    
    // Note: you must create the text file yourself.  You could use your IDE's
    // text editor to create it, or you could use Notepad (Windows) or TextEdit 
    // (Mac) to make it, or you could use a word processor and chose "save as
    // text" when you save it.  I strongly recommend that you simply use your IDE's
    // text editor.  If you use a word processor or Mac's TextEdit, you must be 
    // careful that your file is saved as a plain text file.  Accidentally saving the file in 
    // some other format (.docx, .rtf, etc.) is a major source of headaches for 
    // students, and just making sure the extension is .txt does not guarantee that
    // the file is a plain text file.

    // step 4: check to make sure the file opened successfully.  See step 5 below for an
    // explanation of why we use "infile" as a logical expression.

    if (!infile){
        cout << "couldn't open file." << endl;
    } else {

    // step 5: use a special-value type loop to read through the file.  Here I illustrate
    // reading one character at a time; In your assignment it's likely that you'll want to
    // read one string at a time instead.  It may seem a little strange to see "infile" being
    // used where you would expect to see a logical expression.  It turns out that stream 
    // variables can be used in the place of a logical expression.  When they are, they have
    // the value "true" when everything is fine.  The value "false" indicates that the stream
    // variable has gone into an error state.  One thing that causes a stream variable to go into
    // an error state is when you try to open a file that can't be found (see step 4 above).  In 
    // our current step, the stream variable goes into an error state when an attempt is made to
    // read past the end of the file.  This works out nicely for us, because that is precisely when
    // we want our loop to stop.

        infile.get(ch);
        while (infile){
            cout << ch;
            infile.get(ch);
        }

    // I can't emphasize enough how important it is to use a special-value loop in this case.  other
    // types of loops will often result in reading the last character in the file twice.
    
    // step 6. close the file

        infile.close();
    }
}