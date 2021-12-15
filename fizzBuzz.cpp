class Solution {
public:
    vector<string> fizzBuzz(int n) {
    std::vector<string> listVector;
        int num=n;
      for(int i=1; i<=num ;i++)
      {
          if(i%3==0 && i%5==0)
          {    listVector.push_back("FizzBuzz"); }
          else if(i%3==0)
          {     listVector.push_back("Fizz"); }
          else if(i%5==0)
          {     listVector.push_back("Buzz"); }
           else 
          {     listVector.push_back(std::to_string(i)); }
          
      }
        return listVector;
    }
};
