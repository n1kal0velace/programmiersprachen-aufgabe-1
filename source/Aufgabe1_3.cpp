#include <iostream>

bool checkNr(int a)
{
for(int i = 20; i >=2; i--)
{
if(a%i !=0)
{
return false;
}
}
return true;
}


int main (){

int a = 20;
while(!checkNr(a)){
a +=20;

}
std::cout << a << std::endl;

return 0;
}

