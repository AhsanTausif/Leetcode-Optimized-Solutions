#include <iostream>
#include <vector>

class Solution {
public:
    double average(vector<int>& salary) {
        int maxSalary = INT_MIN;
        int minSalary = INT_MAX;
        int totalSum = 0;

        for(auto ele: salary){
            if(ele > maxSalary){
                maxSalary = ele;
            }
            if(ele < minSalary){
                minSalary = ele;
            }
            totalSum += ele;
        }
        int avg_salary = totalSum - (maxSalary + minSalary);
        return (double)avg_salary/(salary.size() - 2);
    }
};