#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>

using namespace std;

#define   MAX_NUM_OF_EQUATION 100 
#define   MAX_NUM_OF_COFF     10000 

typedef enum
{
  quit,
  num_vars,
  equation_i,
  column_xi,
  add_2_equations,
  subtract_2_equations,
  substitute, 
  CramersCoeffMatrix,
  CramersCoeffMatrixOfCoulmni,
  CramersCoeffMatrixDet,
  Solve
}commandType_t;

//main app
commandType_t getCommandvalue(string command);

//getParameter();-> create struct for arr , row , coulmn insted of passing each time pass the struct
// create array of function at every command call function differunt to get diff parameter 
//string reverse (string eq);

/********************************************************************************************************************
Print the number of variables in the equations
*********************************************************************************************************************/
int CMD_inum_vars (unsigned int u32column);

/********************************************************************************************************************
Print equation of the equation number i
*********************************************************************************************************************/
void CMD_equation_i(float **arr, float * constArr, unsigned int u32row ,unsigned int u32column, string comand);

/****************************************************************************************************************************************************************************************************************************************
Print the vector of coefficients of the given variable name.
 (x2 can be replaced by any variable name)
*********************************************************************************************************************/
void CMD_column_xi (float **arr, unsigned int u32row ,unsigned int u32column,string strx,float *fcolumnResult);

/********************************************************************************************************************
Print the result equation from adding equation 1 and equation 3.
 (1 and 3 can be any integer numbers from 1 to n).
*********************************************************************************************************************/
string CMD_add(float **arr, unsigned int u32row ,unsigned int u32column,int eq1,int eq2);

/********************************************************************************************************************
Print the result equation from subtracting equation 1 and equation 3. 
(1 and 3 can be any integer numbers from 1 to n).
*********************************************************************************************************************/
string CMD_subtract(float **arr, unsigned int u32row ,unsigned int u32column,int eq1,int eq2);

/********************************************************************************************************************
Remove the variable x2 from equation 1 by substituting it with
equation 3 and print the result equation
*********************************************************************************************************************/
string CMD_substitute(float **arr, unsigned int u32row ,unsigned int u32column,int iVarX,int eq1,int eq2);

/********************************************************************************************************************
Prints the Cramer’s coefficients matrix.
*********************************************************************************************************************/
void CMD_CramersCoeffMatrix(float **arr, unsigned int u32row ,unsigned int u32column,float ** aresultarr);

/********************************************************************************************************************
Prints the Cramer’s coefficients matrix with answer-column values in x1 columns values
*********************************************************************************************************************/
void CMD_CramersCoeffMatrixOfCoulmni(float **arr, unsigned int u32row ,unsigned int u32column,int iVarX,float ** aresultarr);
/********************************************************************************************************************
Prints the value of the determinant of the Coefficient matrix.
*********************************************************************************************************************/
void CMD_CramersCoeffMatrixDet(float **arr, unsigned int u32row ,unsigned int u32column,float ** aresultarr);
/********************************************************************************************************************
Prints the value of each variable that solves the solution I no solution, the program
should print “No Solution”
*********************************************************************************************************************/
void CMD_Solve(float **arr, unsigned int u32row ,unsigned int u32column,float * aresultarr);



#endif
/* end if for COMMANDS_H */