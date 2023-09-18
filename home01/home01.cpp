#include <iostream>
#include <fstream>



int main()
{
	std::ifstream in("in.txt"); 
	int N, M;
	if (in.is_open()) {
		in >> N;

		int* mass = new int[N];

		for (int i = 0; i < N; i++)
		{
			int num;
			in >> num;
			mass[i] = num;
		}

		in >> M;
		int* mass2 = new int[M];

		for (int i = 0; i < M; i++)
		{
			int num;
			in >> num;
			mass2[i] = num;
		}

		in.close();

		std::ofstream out("out.txt");

		out << M << "\n";

		out << mass2[M - 1] << " ";

		for (int i = 0; i < M-1; i++)
		{
			out << mass2[i] << " ";
		}
		out << "\n";
		out << N << "\n";

		

		for (int i = 1; i < N; i++)
		{
			out << mass[i] << " ";
		}

		out << mass[0];

		delete [] mass;
		delete [] mass2;
	}
	else
	{
		std::cout << "file is not open";
	}
	return 0;
	}


