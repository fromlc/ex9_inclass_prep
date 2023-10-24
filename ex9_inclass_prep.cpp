//------------------------------------------------------------------------------
// ex9_inclass_prep.cpp
// 
// word lookup
// 
// Modify function lookup_word() to return definition as ref param
// Add a loop to prompt user for word to lookup
//------------------------------------------------------------------------------
#include <iostream>
#include <vector>

using namespace std;

//------------------------------------------------------------------------------
// globals
//------------------------------------------------------------------------------
namespace ex9 {
    string cars[] = {
        "Mazda",
        "KIA",
        "Tesla",
        "Ford",
    };
}

//------------------------------------------------------------------------------
// local functions
//------------------------------------------------------------------------------
int find_word();

//------------------------------------------------------------------------------
// entry point
//------------------------------------------------------------------------------
int main() {

    // word to find
    string car = "KIA";
    //int index = find_word(car);

    // without const argument, lookup doesn't work with a string literal
    //int index = lookup_word("Tesla");

    // output
    //cout << ex9::cars[index] << '\n';
}

//------------------------------------------------------------------------------
// -find passed word in ex9::cars array
// -return index of word if found otherwise return -1
//------------------------------------------------------------------------------
int find_word() {

    // search array with string compare

    return -1;
}
