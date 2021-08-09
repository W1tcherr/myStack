#include <iostream>
#include "myStack.h"

int main()
{
    myStack<int> a(10);
    
   
	for (int i = 0; i < 11; i++)
	{
		try
		{
			a.push(i+1);
		}
		catch(const std::runtime_error& ex)
		{
			std::cout<< ex.what() << std::endl;
		}
	}

	for (int i = 0; i < 11; i++)
	{
		try
		{
			std::cout << a.pop() << std::endl;
		}
		catch(const std::runtime_error& ex)
		{
			std::cout<< ex.what() << std::endl;
		}	
	}

    return 0;
}