#include <iostream>
#include <vector>
#include <string>



  int main() {
  std::string input = "turpentine and turtles";
  std::vector<char> vowels = { 'a', 'e', 'i', 'o' ,'u'};
  std::vector<char> result;
  
  for( int i = 0; i < input.size(); i++) {
    for( int v = 0; v < vowels.size(); v++)
    {
      if(input[i] == vowels[v]){
        result.push_back(input[i]);
  
      if(input[i] == 'e' || input[i] == 'u')
        { result.push_back(input[i]);
}
}
    }
  }
  for(int r = 0; r<result.size();r++){
      std::cout<< result[r];
  }
std::cout<<"\n";
  }




