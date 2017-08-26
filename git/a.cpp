#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <math.h>
#include <algorithm>
using namespace std;
bool isCryptSolution(std::vector<std::string> crypt, std::vector<std::vector<char>> solution) {
	unsigned int count[3]={0};
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
 for(int i = 0; i< 2; i++)
       {
	int k = (int)(count[i] / pow((double)10,(double)(crypt[i].size()-1)));
		   std::cout<<k;
           if((int)(k==0))
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
    
    return true;
}


int main() {

	std::vector<std::string> arr(3);
	arr[0] ="AAAAAAAAAAAAAA";
	arr[1] = "BBBBBBBBBBBBBB";
	arr[2] = "CCCCCCCCCCCCCC";
		std::vector<std::vector<char>>myMat(5, std::vector<char>(2, 0));
		myMat[0][1] = '1';
		myMat[1][1] = '2';
		myMat[2][1] = '3';
		myMat[0][0]= 'A';
		myMat[1][0] = 'B';
		myMat[2][0] = 'C';
		isCryptSolution(arr,myMat);
		return 0;
}