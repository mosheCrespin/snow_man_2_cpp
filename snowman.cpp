#include "snowman.hpp"

namespace ariel{
    //this function check if the input is valid
    bool valid_number(int num)
    {
        int temp=LEN;
        while(num>0)
        {
            if((num%TEN<MIN)||(num%TEN>MAX)){
                break;
            }
            num=num/TEN;
            temp--;
        }
        return temp==0;
    }
      //this function return an initialized matrix of our snow-man    
      vector<vector<char>> init_matrix()
      {

        vector<vector<char>> mat =
        { 
          //  0   1   2   3   4    5    6     7
            {' ',' ',' ',' ',' ', ' ' ,' ' ,'\n'},
            {' ',' ',' ',' ',' ', ' ' ,' ' ,'\n'},
            {' ','(',' ',' ',' ', ')' ,' ' ,'\n'},
            {' ','(',' ',' ',' ', ')' ,' ' ,'\n'},
            {' ','(',' ',' ',' ', ')' ,' ' ,'\n'},
        };
        return mat;
      }
     //this function fills the HAT places of the snow-man matrix
      void hat(vector<vector<char>> &mat,string &input)
      {
          int index=input[HAT]-'0' -1;//take the index
          int p=0;
          for(int i=0;i<HAT_MIN_RANGE;i++)
          {
              for(int j=1;j<HAT_MAX_RANGE;j++)
              {
                  mat[i][j]=HAT_STR[index][p];
                  p++;
              }
          }

      }
     //this function fills the NOSE places of the snow-man matrix
      void nose(vector<vector<char>> &mat,string &input)
      {
          int index=input[NOSE] -'0' -1;
          mat[NOSE_Y_CORDINATE][NOSE_X_CORDINATE]=NOSE_STR[index];
      }

        //this function fills the EYES places of the snow-man matrix
      void eyes(vector<vector<char>> &mat,string &input){//fill the eyes data
          int l_index=input[LEFT_EYE] -'0' -1;
          int r_index=input[RIGHT_EYE] -'0' -1;
          mat[L_EYE_Y_CORDINATE][L_EYE_X_CORDINATE]=EYES_STR[l_index];
          mat[R_EYE_Y_CORDINATE][R_EYE_X_CORDINATE]=EYES_STR[r_index];
      }
 
      //this function fills the LEFT-ARM places of the snow-man matrix
      void left_arm(vector<vector<char>> &mat,string &input)
      {
            int index=input[LEFT_ARM] -'0' -1;
            mat[ARMS_MIN_RANGE][LEFT_ARM_X_CORDINATE]=LEFT_ARM_STR[index][0];
            mat[ARMS_MAX_RANGE][LEFT_ARM_X_CORDINATE]=LEFT_ARM_STR[index][1];
      }
      //this function fills the RIGHT-ARM places of the snow-man matrix
      void right_arm(vector<vector<char>> &mat,string &input)

      {
            int index=input[RIGHT_ARM] -'0' -1;
            mat[ARMS_MIN_RANGE][RIGHT_ARM_X_CORDINATE]=RIGHT_ARM_STR[index][0];
            mat[ARMS_MAX_RANGE][RIGHT_ARM_X_CORDINATE]=RIGHT_ARM_STR[index][1];


      }
      //this function fills the TORSO places of the snow-man matrix
      void torso(vector<vector<char>> &mat,string &input)
      {
          int index=input[TORSO] -'0' -1;
          int j=TORSO_X_MIN;
          for(int i=0;i<TORSO_STR[index].size();i++)
          {
              mat[TORSO_Y][j]=TORSO_STR[index][i];
              j++;
          }

      }
    //this function fills the BASE places of the snow-man matrix
      void base(vector<vector<char>> &mat,string &input)
      {
          int index=input[BASE] -'0' -1;
          int j=BASE_X_MIN;
          for(int i=0;i<BASE_STR[index].size();i++)
          {
              mat[BASE_Y][j]=BASE_STR[index][i];
              j++;
          }        
 
          
      }
      //this function convert the snow-man matrix into a string
      string mat_to_string(const vector<vector<char>> &mat){
          string ans;
          for(int i=0;i<ROWS;i++)
          {
              for(int j=0;j<COL;j++)
              {
                  ans+=mat[i][j];
              }
          }
      return ans;
      }




    string snowman(int num)
    {
        ///check valid number////
        if(!valid_number(num))
        {
            string msg="Invalid code '" + to_string(num) + "'";
            throw invalid_argument(msg);
        }
        /////int to string////
        string input=to_string(num);
        
        //construct snowman's matrix
        vector<vector<char>> mat=init_matrix();

        /////fill the matrix///////
        hat(mat,input);
        nose(mat,input);
        eyes(mat,input);
        left_arm(mat,input);
        right_arm(mat,input);
        torso(mat,input);
        base(mat,input);

        ////return she snow-man//////
        return mat_to_string(mat);


    }

}
