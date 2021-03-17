#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <stdexcept>

/*

TEST_CASE("Snowman's Base") {//4 Options{" : " , "" "" , "___" , "   "}

*/


using namespace std;
namespace ariel{
      enum {HAT,NOSE,LEFT_EYE,RIGHT_EYE,LEFT_ARM,RIGHT_ARM,TORSO,BASE};//body parts
      enum {NOSE_Y_CORDINATE=2,NOSE_X_CORDINATE=3,L_EYE_Y_CORDINATE=2, L_EYE_X_CORDINATE=2,R_EYE_Y_CORDINATE=2,R_EYE_X_CORDINATE=4,HAT_MIN_RANGE=2,HAT_MAX_RANGE=6,
            ARMS_MIN_RANGE=2,ARMS_MAX_RANGE=3,LEFT_ARM_X_CORDINATE=0,RIGHT_ARM_X_CORDINATE=6,TORSO_X_MIN=2,TORSO_Y=3,BASE_X_MIN=2,BASE_Y=4};//cordinates
      enum {LEN=8,TEN=10,MIN=1,MAX=4,ROWS=5,COL=8};



      ////////building parts//////////

      const vector<string> HAT_STR{"     _===_" , " ___ ....." ,"  _   /_\\ " , " ___ (_*_)"};
      const vector<char> NOSE_STR{',' , '.' , '_' , ' '};
      const vector<char> EYES_STR{'.' , 'o' , 'O' , '-'};
      const vector<string> LEFT_ARM_STR{" <" ,"\\ "," /", "  "};
      const vector<string> RIGHT_ARM_STR{" >","/ "," \\", "  "};
      const vector<string> TORSO_STR{" : " , "] [", "> <" , "   "};
      const vector<string> BASE_STR {" : " , "\" \"", "___" , "   "};


      ////////functions//////

      string snowman(int num);
      string int_to_str(int num);
      bool valid_number(int num);
      vector<vector<char>> init_matrix();
      void hat(vector<vector<char>> &mat,string &input);
      void nose(vector<vector<char>> &mat,string &input);
      void eyes(vector<vector<char>> &mat,string &input);
      void left_arm(vector<vector<char>> &mat,string &input);
      void right_arm(vector<vector<char>> &mat,string &input);
      void torso(vector<vector<char>> &mat,string &input);
      void body(vector<vector<char>> &mat,string &input);
      string mat_to_string(const vector<vector<char>> &mat);
};
