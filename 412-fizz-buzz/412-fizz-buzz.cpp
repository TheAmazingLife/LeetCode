#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        int num;
        vector<string> answer;
        for (int i = 0; i < n; i++)
        {
            num = i + 1;
            if (num % 5 == 0 && num % 3 == 0)
            {
                answer.push_back("FizzBuzz");
            }
            else if (num % 3 == 0)
            {
                answer.push_back("Fizz");
            }
            else if (num % 5 == 0)
            {
                answer.push_back("Buzz");
            }
            else
            {
                answer.push_back(to_string(i + 1));
            }
        }
        return answer;
    }
};