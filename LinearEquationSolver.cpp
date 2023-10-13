#include <iostream>
#include<cstdlib>
#include<sstream>
#include "commands.h"

using namespace std;
/** Local function */
void CreateCoffArray(string * aEquations,int u32noE,float **arr , float * constArr, unsigned int * u32row ,unsigned int * u32column);


int main(){

		/*variable init*/
		string strNof;
		int noOfEquations = 0 ;
		string aEquations[MAX_NUM_OF_EQUATION];
		string com;
		string equation ="";
		float afcoff[MAX_NUM_OF_EQUATION][MAX_NUM_OF_COFF]={{0}};
		float afconstant[MAX_NUM_OF_EQUATION]={0};
		unsigned int rowNum = 0;
		unsigned int coulmnNum=0;
		commandType_t enuCommandVal = quit;
		int index =0 ;

        /* get number of equation as string value  */
		getline(cin,strNof);
		/*convert string to integer  */
		noOfEquations=atoi(strNof.c_str());
		/* Fill equations array with input */
		 for (index =0 ; index < noOfEquations; index++)
		 {
			 getline(cin,aEquations[index]);                  			 	
		 }
        /* if enter quit as first comand */
		 getline(cin,com);
		 enuCommandVal = getCommandvalue(com);

		/* struct coffietions 2D array*/
        CreateCoffArray(aEquations,noOfEquations,afcoff,afconstant,&rowNum,&coulmnNum);
		 while(enuCommandVal == quit)
		 {
		 
		 switch (enuCommandVal)
		 {
			case num_vars :
			{
			  CMD_inum_vars(coulmnNum);			 
			}
			break;
			case equation_i :
			{
			 CMD_equation_i(afcoff,afconstant,rowNum,coulmnNum,com);
			}
			break;
			case column_xi :
			{
              
			}
			break;
			case add_2_equations :
			{

			}
			break;
			case subtract_2_equations :
			{

			}
			break;
			case substitute :
			{

			}
			break;
			case CramersCoeffMatrix :
			{

			}
			break;
			case CramersCoeffMatrixOfCoulmni :
			{

			}
			break;
			case CramersCoeffMatrixDet :
			{

			}
			break;
			case Solve :
			{

			}
			break;
		    default :
			{
             cout<< "error please enter correct command"<<endl;
			}
			break;

		 }
		 getline(cin,com);
		 enuCommandVal = getCommandvalue(com);
         }
		 
		//  if (com=="num vars")
		//  {int numVar=num_vars (eq);
		//  cout << numVar<<endl;
		//  }
		
		//  else if (com.substr(0,com.find(' '))=="equation")
		//  {
		//  int i=atoi(com.substr((com.find(' ')+1)).c_str());
		//   equation_i(eq , i);
		//   cout <<endl;
		//  }

		 /* else if (com.substr(0,com.find(' '))=="column")
		 {
			// float  x =atof(com.substr(com.find('x')+1).c_str());
			 string x =reverse(com.substr(8));
			 vector <int> column_x;
			 column (eq, x, column_x);
			 cout << endl;
		 }

		 else if (com.substr(0,com.find(' '))=="add")
		  { 
			  int eq1=atoi(com.substr(5,com.find(' ',5)).c_str());
			  int eq2=atoi(com.substr(com.find(' ',5)+1).c_str());
			  string result=add(eq1,eq1,eq);
			  cout << result<< endl;
		  }
		   else if (com.substr(0,com.find(' '))=="subtract")
		  { 
			  int eq1=atoi(com.substr(5,com.find(' ',5)).c_str());
			  int eq2=atoi(com.substr(com.find(' ',5)+1).c_str());
			  string result=subtract(eq1,eq1,eq);
			  cout << result<< endl;
		  }*/



		 
		  

	return 0;
}

 void CreateCoffArray(string * aEquations,int u32noE,float **arr ,float * constArr, unsigned int * u32row ,unsigned int * u32column)
 {
  *(u32row) = u32noE;

 }
// int num_vars (vector<string>&eq)
// {
// 	 	vector <int> nv;
// 	    vector <int>nvineq; 
// 	     int i=0;
// 	   for(i=0;i<eq.size();i++)
// 	{
		
// 		for(int j=0;j<eq[i].length();j++)
// 		{
// 			if (eq[i][j]=='x')
// 			{
// 			int n =atoi(eq[i].substr(j+1,(eq[i].find(('+'||'-'||'='),j)-j-1)).c_str());
// 	        nvineq.push_back(n);
// 			}
// 		}
// 			int max = nvineq[0];
// 	    for(int k=1;k<nvineq.size();k++)
// 	    {
// 		if (nvineq[k]>max){	max=nvineq[k];}
// 	     }
// 		nv.push_back(max);
// 		nvineq.clear();
// 	}
	
// 	int maxofmax = nv[0];
// 	for(int k=1;k<nv.size();k++)
// 	{
// 		if (nv[k]>maxofmax){maxofmax=nv[k];}
// 	}
// 	return maxofmax;
// }
// void equation_i(vector<string>&eq , int i)
// {
// cout << eq[i-1];
// }
// string  reverse (string eq)
// {
// 	string rev_eq="";
// int n=eq.length();
// for (int i = n-1;i>=0;i--)
// {
// 	rev_eq +=eq[i];
// }
// return rev_eq;
// }
// /*void  column (vector <string>&eq,string x,vector <int>& column)
// {
// 	int flag =0;
// 	int c;
// 	for (int i = 0; i < eq.size(); i++)
// 	{
// 		string eq_rev =reverse(eq[i]);

// 		for (int j = 0; j < eq_rev.length(); j++)
// 		{
// 		  int e =eq_rev[j]+eq_rev[j+1];
//           ostringstream ss;
// 		  string rev=ss.str();
// 			if (rev==x)
// 			{
// 			c=atoi(eq_rev. substr(j+2,eq_rev.find(('+'||'-'),j)-j-2).c_str());
// 			flag =1;
			
// 			if (flag==1)
// 			{if (c==NULL){c=1;}
// 			 if(eq_rev.find('-',j))
// 			 {c=-c;}
// 			}
// 			else
// 			{c=0;}
// 			}
// 		}
// 		column.push_back(c);
// 	}
// 	for (int r = 0; r < column.size(); r++)
// 	{
// 		cout << column[r]<<endl;
// 	}
// }
// string add(int eq1,int eq2,vector <string>&eq)
// {
// 	string first=eq[eq1-1];
// 	string second=eq[eq2-1];


// }
// string subtract(int eq1,int eq2,vector <string>&)
// {
// string first=eq[eq1-1];
// 	string second=eq[eq2-1];
// }*/