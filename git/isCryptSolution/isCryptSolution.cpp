#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>
using namespace std;
bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
    
     double count[3] = {0};
  
for(int i = 0; i<crypt.size(); ++i)
{
   
    for(int k = 0; k<crypt[i].size();++k)
    {
        
        
    for(int j = 0; j<solution.size();++j)
    {
        if(crypt[i][k] == solution[j][0])
        {
              count[i]+=(int)(solution[j][1]-48)*pow((double)10,(double)(crypt[i].size()-k-1));
            break;
            
        }
    }
    }
}
 for(int i = 0; i<= 2; i++)
       {
	int k = (int)(count[i] / pow((double)10,(double)(crypt[i].size()-1)));
		   std::cout<<k;
           if((int)(k==0) && (crypt[i].size()-1)>0)
           {
               return false;
           }
       }
    for(int i=0; i< 3; ++i)
    {
        std::cout<<count[i] << " ";
    }
        if(count[0]+count[1] != count[2])
        {
            return false;
        }
    if(count[0]>count[2] || count[1]>count[2])
    {
        return false;
    }
    
    return true;
}


int main() {

	std::vector<std::string> arr(3);
	arr[0] ="WASD";
	arr[1] = "IJKL";
	arr[2] = "AOPAS";
		std::vector<std::vector<char>>myMat(10, std::vector<char>(2, 0));
		myMat[0][1] = '2';
		myMat[1][1] = '0';
		myMat[2][1] = '4';
		myMat[3][1] = '1';
		myMat[4][1] = '5';
		myMat[5][1] = '8';
		myMat[6][1] = '6';
		myMat[7][1] = '3';
		myMat[8][1] = '7';
		myMat[9][1] = '9';
		
		myMat[0][0]= 'W';
		myMat[1][0] = 'A';
		myMat[2][0] = 'S';
		myMat[3][0]= 'D';
		myMat[4][0] = 'I';
		myMat[5][0] = 'J';
		myMat[6][0]= 'K';
		myMat[7][0] = 'L';
		myMat[8][0] = 'O';
		myMat[9][0]= 'P';
		isCryptSolution(arr,myMat);
		return 0;
}