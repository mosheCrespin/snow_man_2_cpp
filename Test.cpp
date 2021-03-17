/**
 * AUSTHORS: Moshe Crespin
 * Date 10.03.21
 * Number of Tests: 33
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 * my test goes like that:
 * for the base case (11111111) he move through all the options for snow man
 * put attention that there are 4 option for each LEVUSH' but actually we should check for 3,
 * from the reason that the base case covered all of the 1 option for each subject
 * 
 */


#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
#include <algorithm>
using namespace std;
const int BASE_CASE_INPUT=11111111;
const string BASE_CASE_STR="     \n_===_\n (.,.) \n<( : )>\n ( : ) \n";


/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input)
{
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    input.erase(remove(input.begin(), input.end(), '\t'), input.end());
    input.erase(remove(input.begin(), input.end(), '\n'), input.end());
    input.erase(remove(input.begin(), input.end(), '\r'), input.end());
    return input;
}

TEST_CASE("Base Cases") {//the base cases are the cases of the example with my base case
    //base cases
    CHECK(nospaces(snowman(BASE_CASE_INPUT)) == nospaces(BASE_CASE_STR));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(33232124)) == nospaces("   _   \n  /_\\\n\\(o_O) \n (] [)>\n (   )\n"));
}



                            //              1         2         3         4  
TEST_CASE("Snowman's Hat") {//          ("     "   " ___ "   "  _  "   " ___ ")
                            //4 Options ("_===_" , "....." , " /_\ " , "(_*_)")
                            
    CHECK(nospaces(snowman(21111111)) == nospaces(" ___ \n.....\n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(31111111)) == nospaces("  _  \n/_\\\n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(41111111)) == nospaces(" ___ \n(_*_)\n (.,.) \n<( : )>\n ( : ) \n"));

}

                                    //           1     2      3     4
TEST_CASE("Snowman's nose/Mouth") {//4 Options ("," , ". " , "_" , " ")

    CHECK(nospaces(snowman(12111111)) == nospaces("     \n_===_\n (...) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(13111111)) == nospaces("     \n_===_\n (._.) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(14111111)) == nospaces("     \n_===_\n (. .) \n<( : )>\n ( : ) \n"));
}
                                  //         1     2     3     4
TEST_CASE("Snowman's Left Eye") {//4 Option("." , "o" , "O" , "-" )

    CHECK(nospaces(snowman(11211111)) == nospaces("     \n_===_\n (o,.) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11311111)) == nospaces("     \n_===_\n (O,.) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11411111)) == nospaces("     \n_===_\n (-,.) \n<( : )>\n ( : ) \n"));
}

                                   //         1     2     3     4
TEST_CASE("Snowman's Right Eye") {//4 Option("." , "o" , "O" , "-" )

    CHECK(nospaces(snowman(11121111)) == nospaces("     \n_===_\n (.,o) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11131111)) == nospaces("     \n_===_\n (.,O) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11141111)) == nospaces("     \n_===_\n (.,-) \n<( : )>\n ( : ) \n"));
}

                                 //             1     2     3     4
TEST_CASE("Snowman's Left Arm") {//4 Options  (" "   "\"   " "   " ")
                                //            ("<" , " " , "/" , " ")
    
    
    CHECK(nospaces(snowman(11112111)) == nospaces("     \n_===_\n\\(.,.) \n ( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11113111)) == nospaces("     \n_===_\n (.,.) \n/( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11114111)) == nospaces("     \n_===_\n (.,.) \n ( : )>\n ( : ) \n"));

}

                                //              1     2     3     4
TEST_CASE("Snowman's Right Arm") {//4 Options (" "   "/"   " "   " ")
                                //            (">" , " " , "\" , " ")

       CHECK(nospaces(snowman(11111211)) == nospaces("     \n_===_\n (.,.)/\n<( : )>\n ( : ) \n"));
       CHECK(nospaces(snowman(11111311)) == nospaces("     \n_===_\n (.,.) \n<( : )\\\n ( : ) \n"));
       CHECK(nospaces(snowman(11111411)) == nospaces("     \n_===_\n (.,.) \n<( : ) \n ( : ) \n"));


}
                               //           1       2       3        4
TEST_CASE("Snowman's Torso") {//4 Options(" : " , "] [" , "> < " , "   ")

    CHECK(nospaces(snowman(11111121)) == nospaces("     \n_===_\n (.,.) \n<( : )>\n (] [) \n"));
    CHECK(nospaces(snowman(11111131)) == nospaces("     \n_===_\n (.,.) \n<( : )>\n (> <) \n"));
    CHECK(nospaces(snowman(11111141)) == nospaces("     \n_===_\n (.,.) \n<( : )>\n (   ) \n"));

}

                              //           1       2       3       4 
TEST_CASE("Snowman's Base") {//4 Options{" : " , "" "" , "___" , "   "}

    CHECK(nospaces(snowman(11111112)) == nospaces("     \n_===_\n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11111113)) == nospaces("     \n_===_\n (.,.) \n<( : )>\n ( : ) \n"));
    CHECK(nospaces(snowman(11111114)) == nospaces("     \n_===_\n (.,.) \n<( : )>\n ( : ) \n"));

}

TEST_CASE("Bad snowman code") {//6
    CHECK_THROWS(snowman(555));// not valid inpud
    CHECK_THROWS(snowman(-555));//check negative number with numbr of numbers smaller then 8
    CHECK_THROWS(snowman(-33333333));//check negative input but with 8 numbers
    CHECK_THROWS(snowman(11111511));// check one of the number is not in the range
    CHECK_THROWS(snowman(02222222));// one of the number is smaller then the valid range
    CHECK_THROWS(snowman(11111119));// one of the numbers is bigger then the valid range

}
