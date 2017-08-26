// Example program
#include <iostream>
#include <string>
#include <vector>
int sumInRange(std::vector<int> nums, std::vector<std::vector<int>> queries) {
    int sum = 0; 
    for(int i = 0; i<queries.size();++i)
    {
        if(queries[i][0] == queries[i][1] && nums[queries[i][1]] <0)
        {
            sum +=nums[i];
            queries.erase(queries.begin()+i);
            i--;
        }
    }
        for(int i = 0;i<queries.size();++i)
{
            for(int j = queries[i][0]; j<=queries[i][1];++j)
            {
               
                sum += nums[j];
            }
                    
}
        
    return sum;
}


int main()
{
	std::vector<int> arr(1);
	arr[0] = -1000;
		std::vector<std::vector<int> >myMat(1, std::vector<int>(2, 0));
  sumInRange(arr,myMat);
}
