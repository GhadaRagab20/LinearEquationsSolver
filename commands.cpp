#include "commands.h"
#include <iostream>

commandType_t getCommandvalue(string command)
{

}

//TODo:
//getParameter();-> create struct for arr , row , coulmn insted of passing each time pass the struct
// create array of function at every command call function differunt to get diff parameter 
//string reverse (string eq);

/********************************************************************************************************************
Print the number of variables in the equations
*********************************************************************************************************************/
void CMD_inum_vars (unsigned int u32column)
{
    cout<<u32column<<endl;
}

/********************************************************************************************************************
Print equation of the equation number i
*********************************************************************************************************************/
void CMD_equation_i(float **arr,float * constArr, unsigned int u32row ,unsigned int u32column, string comand )
{
   unsigned int i =0;
   unsigned int index =0;
   unsigned int firstCoffFlag = 1;
   unsigned int charIndex = 0;
   string float2Str ;
   string  strequation_i ="";
   /* get number of i from command */
   comand =comand.substr(comand.find(' ')+1);
   i = atoi(comand.c_str());
   
   /*formlate equation from coff  array*/
   do
   {
    if(0.0 == arr[i-1][index])
    {
     /* don't add any variable for equation */
    }
    else if (0.0 > arr[i-1][index])
    {
     /* convert negative float number to string*/
     float2Str= to_string (arr[i-1][index]);
     /* to_string((int) i) -> convert coulmn nuber to string */
      strequation_i += float2Str +'X'+to_string((int) index) ;
    }
    else if ((1==firstCoffFlag)&&(0.0 < arr[i-1][index]) )
    {
        /* clear first coffetion flag */
     firstCoffFlag = 0;
     /* don't add '+' befor the number*/
     strequation_i += float2Str +'X'+to_string((int) index) ;
    }
    else
    {
      strequation_i += '+' + float2Str +'X'+to_string((int) index) ;
    }
    index++;
   }while(index < u32column);
  
   /* convert constant float number to string and concatenet to equation */
   float2Str= to_string (constArr[i-1]);
   strequation_i += '=' + float2Str; 
   cout << strequation_i << endl ;
}

/****************************************************************************************************************************************************************************************************************************************
Print the vector of coefficients of the given variable name.
 (x2 can be replaced by any variable name)
*********************************************************************************************************************/
void CMD_column_xi (float **arr, unsigned int u32row ,unsigned int u32column,string strx,float *fcolumnResult)
{

}

/********************************************************************************************************************
Print the result equation from adding equation 1 and equation 3.
 (1 and 3 can be any integer numbers from 1 to n).
*********************************************************************************************************************/
string CMD_add(float **arr, unsigned int u32row ,unsigned int u32column,int eq1,int eq2)
{

}

/********************************************************************************************************************
Print the result equation from subtracting equation 1 and equation 3. 
(1 and 3 can be any integer numbers from 1 to n).
*********************************************************************************************************************/
string CMD_subtract(float **arr, unsigned int u32row ,unsigned int u32column,int eq1,int eq2)
{

}

/********************************************************************************************************************
Remove the variable x2 from equation 1 by substituting it with
equation 3 and print the result equation
*********************************************************************************************************************/
string CMD_substitute(float **arr, unsigned int u32row ,unsigned int u32column,int iVarX,int eq1,int eq2)
{

}

/********************************************************************************************************************
Prints the Cramer’s coefficients matrix.
*********************************************************************************************************************/
void CMD_CramersCoeffMatrix(float **arr, unsigned int u32row ,unsigned int u32column,float ** aresultarr)
{

}

/********************************************************************************************************************
Prints the Cramer’s coefficients matrix with answer-column values in x1 columns values
*********************************************************************************************************************/
void CMD_CramersCoeffMatrixOfCoulmni(float **arr, unsigned int u32row ,unsigned int u32column,int iVarX,float ** aresultarr)
{

}
/********************************************************************************************************************
Prints the value of the determinant of the Coefficient matrix.
*********************************************************************************************************************/
void CMD_CramersCoeffMatrixDet(float **arr, unsigned int u32row ,unsigned int u32column,float ** aresultarr)
{

}
/********************************************************************************************************************
Prints the value of each variable that solves the solution I no solution, the program
should print “No Solution”
*********************************************************************************************************************/
void CMD_Solve(float **arr, unsigned int u32row ,unsigned int u32column,float * aresultarr)
{

}

