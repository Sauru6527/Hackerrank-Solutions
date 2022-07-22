/*
"""
HACKERRANK :
NAME  : AHER SAURABH SANTOSH
BATCH : C++
GUIDE BY : YOU TUBE
DATE : 22/7/2022 (8:20 AM)
Level : EASY
TYPE: ARRAY  
"""
*/

/*
Given an unsorted array A of size N that contains only non negative integers find a continuous sub array which adds to given numbers

In case of multiple subarrays return the subarray which comes first on moving from left to right

Example 1:
	INPUT: 
	N=5,S=12
	A[] = {1,2,3,7,5}
	output: 2 4
	Explanation: The Sum Of Elements From 2nd Position to 4 th position is 12.
	
	
EXAMPLE 2:
        INPUT: 
		N=10,S=15
		A[]={1,2,3,4,5,6,7,8,9,10}
EXPLANATION:THE SUM OF ELEMENTS FROM 1st positions is 15
*/			




/*
Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

In case of multiple subarrays, return the subarray which comes first on moving from left to right.


Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.


Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.





Your Task:
You don't need to read input or print anything. The task is to complete the function subarraySum() which takes arr, N and S as input parameters and returns an arraylist containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the array should be according to 1-based indexing. If no such subarray is found, return an array consisting only one element that is -1.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 

Constraints:
1 <= N <= 105
1 <= Ai <= 109
*/

#include<iostream>
using namespace std;
class Eg {
	public:
		int num = 0;
		int sum = 0;
		int start =0;
		int track = 0;
		int arr[5] = {1,8,3,5,4};


		/*inputs() {

			std::cout<<"ENTER THE VALUE OF SUM = ";
			std::cin>>sum;


		}*/

		solution()
		 {
			for(int i=start; i<5; i++)
			 {
                if(sum==12)
                {
                	
//                	std::cout<<"NOW SUM IS = "<<sum;
                	track=i;
                	break;
				}
				sum=sum+arr[i];
				
			}
			
//			cout<<"BREAKEDD LLOPPEF ATT "<<endl;
//				printf("YOUR SUM IS = "<<sum[i]<<endl;

		}

		display()
		 {

		
         	std::cout<<"YOUR SUM IS = "<<sum<<endl;
         	std::cout<<"TRACK INDEX = "<<track<<endl;


		}
};


//                       ________________MAIN FUNCTION_____________________

int main() {
	std::cout<<"I AM IN MAIN FUNCTION"<<std::endl;
	Eg obj;
//	obj.inputs();
    obj.solution();
	obj.display();


	return 0;

}
