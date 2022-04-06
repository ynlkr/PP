#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
	char buffer[] = { '0','0' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0' ,'0' };
	int a = 30;
	char bukva1;
	char bukva2;
	char bukva3;
	int mass1[] = { 1,3,2,3,1,2,2 };
	bool perev = true;
	char mass[7][10] = { { 'A','0','0','1','0','1','0','0','0','1' },
	{ 'B','0','1','1','0','0','1','1','0','0' },
	{ 'C','0','1','1','1','0','0','0','0','1' },
	{ 'D','1','0','0','1','1','0','0','1','1' },
	{ 'E','0','0','0','0','1','1','0','1','0' },
	{ 'F','1','1','0','1','0','1','0','0','0' },
	{ 'G','1','0','0','0','0','0','1','1','0' } };
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 10; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << mass1[i];
		cout << endl;
	}
	for (int i = 0; i < 7; i++){
		for (int j = 0; j < 7; j++)
		{
			if (i != j && i<j)
			{
				for (int k = 1; k < 10; k++)
				{
					if (mass[i][k] == '1' || mass[j][k] == '1')
						buffer[k] = '1';
				}
				for (int k = 1; k < 10; k++)
				{
					if (buffer[k] != '1')
					{
						perev = false;
						break;
					}
				}
				if (perev == true)
				{
					cout << mass[i][0] << mass[j][0] << "+" << mass1[i] + mass1[j] << endl;
				}
				else
				{
					cout << mass[i][0] << mass[j][0] << "-" << endl;
					perev = true;
				}
			}
			for (int k = 1; k < 10; k++)
				buffer[k] = '0';
		}
	}
	//////////////////////////////////////////
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			for (int l = 0; l < 7; l++)
			{
				if (i != j && i < j&&j<l)				{
					for (int k = 1; k < 10; k++)					{
						if (mass[i][k] == '1' || mass[j][k] == '1' || mass[l][k] == '1')
							buffer[k] = '1';
					}
					for (int k = 1; k < 10; k++)
					{
						if (buffer[k] != '1')
						{
							perev = false;
							break;
						}
					}
					if (perev == true)
					{
						cout << mass[i][0] << mass[j][0] << mass[l][0] << "+" << mass1[i] + mass1[j] + mass1[l] << endl;
						if (mass1[i] + mass1[j] + mass1[l]<a)
						{
							a = mass1[i] + mass1[j] + mass1[l];
							bukva1 = mass[i][0];
							bukva2 = mass[j][0];
							bukva3 = mass[l][0];
						}
					}
					else
					{
						cout << mass[i][0] << mass[j][0] << mass[l][0] << "-" << endl;
						perev = true;
					}
				}
				for (int k = 1; k < 10; k++)
					buffer[k] = '0';
			}
		}
	}
	/////////////////////////////
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			for (int l = 0; l < 7; l++)
			{
				for (int h = 0; h < 7; h++)
				{
					if (i != j && i < j&&j < l&&l<h)
					{
						for (int k = 1; k < 10; k++)
						{
							if (mass[i][k] == '1' || mass[j][k] == '1' || mass[l][k] == '1' || mass[h][k] == '1')
								buffer[k] = '1';
						}
						for (int k = 1; k < 10; k++)
						{
							if (buffer[k] != '1')
							{
								perev = false;
								break;
							}
						}
						if (perev == true)
						{
							cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << "+" << mass1[i] + mass1[j] + mass1[l] + mass1[h] << endl;
						}
						else
						{
							cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << "-" << endl;
							perev = true;
						}
					}
					for (int k = 1; k < 10; k++)
						buffer[k] = '0';
				}
			}
		}
	}
	/////////////////
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			for (int l = 0; l < 7; l++)
			{
				for (int h = 0; h < 7; h++)
				{
					for (int g = 0; g < 7; g++)
					{
						if (i != j && i < j&&j < l&&l < h&&h<g)
						{
							for (int k = 1; k < 10; k++)
							{
								if (mass[i][k] == '1' || mass[j][k] == '1' || mass[l][k] == '1' || mass[h][k] == '1' || mass[g][k] == '1')
									buffer[k] = '1';
							}
							for (int k = 1; k < 10; k++)
							{
								if (buffer[k] != '1')
								{
									perev = false;
									break;
								}
							}
							if (perev == true)
							{
								cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << mass[g][0] << "+" << mass1[i] + mass1[j] + mass1[l] + mass1[h] + mass1[g] << endl;
							}
							else
							{
								cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << mass[g][0] << "-" << endl;
								perev = true;
							}
						}
						for (int k = 1; k < 10; k++)
							buffer[k] = '0';
					}
				}
			}
		}
	}
	//////////////
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			for (int l = 0; l < 7; l++)
			{
				for (int h = 0; h < 7; h++)
				{
					for (int g = 0; g < 7; g++)
					{
						for (int f = 0; f < 7; f++)
						{
							if (i != j && i < j&&j < l&&l < h&&h < g&&g<f)
							{
								for (int k = 1; k < 10; k++)
								{
									if (mass[i][k] == '1' || mass[f][k] == '1' || mass[j][k] == '1' || mass[l][k] == '1' || mass[h][k] == '1' || mass[g][k] == '1')
										buffer[k] = '1';
								}
								for (int k = 1; k < 10; k++)
								{
									if (buffer[k] != '1')
									{
										perev = false;
										break;
									}
								}
								if (perev == true)
								{
									cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << mass[g][0] << mass[f][0] << "+" << mass1[f] + mass1[i] + mass1[j] + mass1[l] + mass1[h] + mass1[g] << endl;
								}
								else
								{
									cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << mass[g][0] << mass[f][0] << "-" << endl;
									perev = true;
								}
							}
							for (int k = 1; k < 10; k++)
								buffer[k] = '0';
						}
					}
				}
			}
		}
	}
	/////////////
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			for (int l = 0; l < 7; l++)
			{
				for (int h = 0; h < 7; h++)
				{
					for (int g = 0; g < 7; g++)
					{
						for (int f = 0; f < 7; f++)
						{
							for (int d = 0; d < 7; d++)
							{
								if (i != j && i < j&&j < l&&l < h&&h < g&&g < f&&f<d)
								{
									for (int k = 1; k < 10; k++)
									{
										if (mass[d][k] == '1' || mass[i][k] == '1' || mass[f][k] == '1' || mass[j][k] == '1' || mass[l][k] == '1' || mass[h][k] == '1' || mass[g][k] == '1')
											buffer[k] = '1';
									}
									for (int k = 1; k < 10; k++)
									{
										if (buffer[k] != '1')
										{
											perev = false;
											break;
										}
									}
									if (perev == true)
									{
										cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << mass[g][0] << mass[f][0] << mass[d][0] << "+" << mass1[f] + mass1[i] + mass1[j] + mass1[l] + mass1[h] + mass1[g] + mass1[d] << endl;
									}
									else
									{
										cout << mass[i][0] << mass[j][0] << mass[l][0] << mass[h][0] << mass[g][0] << mass[f][0] << mass[d][0] << "-" << endl;
										perev = true;
									}
								}
								for (int k = 1; k < 10; k++)
									buffer[k] = '0';
							}
						}
					}
				}
			}
		}
	}
cout << "Найдешевше покриття мiстить - BD "<< endl;
	return 0;
}
