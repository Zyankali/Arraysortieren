#include <iostream>

int Zahlenreihe[] = 
{ 
	9, 14, 2, 5, 10, 7, 4, 16, 6, 3, 15, 1, 8, 12, 11, 13, 17, 19, 18
};

bool situation = false;

int main()
{
	std::cout << "Unsortierte Zahlenreihe: " << std::endl;
	int zahlengroesse = sizeof(Zahlenreihe) / sizeof(int);
	for (int i = 0; i <= zahlengroesse - 1; i++)
	{
		std::cout << Zahlenreihe[i] << " ";
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	int i = 0;
	int ii = 1;
	int a, b;

	while (!situation)
	{
		if (Zahlenreihe[i] > Zahlenreihe[ii])
		{
			b = Zahlenreihe[i];
			a = Zahlenreihe[ii];
			Zahlenreihe[ii] = b;
			Zahlenreihe[i] = a;
			
			if (i != 0 || i != 1)
			{

				i = i - 2;
				situation = false;

			}	
		}
		else if (Zahlenreihe[i] < Zahlenreihe[ii])
		{
			i = i + 1;
			ii = i + 1;
			if (ii == sizeof(Zahlenreihe) / sizeof(int))
			{

				situation = true;

			}
		}
	}

	std::cout << "Sortierte Zahlenreihe: " << std::endl;
	for (int i = 0; i <= zahlengroesse - 1; i++)
	{

		std::cout << Zahlenreihe[i] << " ";

	}
	std::string x;
	std::cin >> x;
	return 0;
}