#include <iostream> 

int main()
{
std::string input; 
int start=0;
while (std::getline(std::cin, input, '\n')) {
std::string output; 
for (std::string::iterator x = input.begin(); x != input.end(); ++x) {
 if ((*x) == '"' && !(start%2)) { output.push_back('`'); output.push_back('`'); ++start; }
 else if ((*x) == '"' && (start%2)) { output.push_back('\''); output.push_back('\'');++start; }
 else output.push_back(*x) ; 
}
std::cout << output << std::endl;
}
}
