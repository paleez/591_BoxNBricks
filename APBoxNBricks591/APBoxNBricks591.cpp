// APBoxNBricks591.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main() {

	int numberOfStacks, heightOfStack[50];
	int numberOfSets = 0;
	std::cin >> numberOfStacks;

	while (numberOfStacks)
	{
		numberOfSets++;
		int heightAverage = 0;

		for (int i = 0; i < numberOfStacks; i++) 
		{
			std::cin >> heightOfStack[i];
			heightAverage += heightOfStack[i];
		}

		heightAverage /= numberOfStacks;

		int result = 0;

		for (int i = 0; i < numberOfStacks; i++) 
		{
			if (heightOfStack[i] > heightAverage)
			{
				result += heightOfStack[i] - heightAverage;
			}
		}

		std::cout << "Set #" << numberOfSets << std::endl;
		std::cout << "The minimum number of moves is " << result << "." << std::endl;
		std::cout << std::endl;
		std::cin >> numberOfStacks;
	}
}


