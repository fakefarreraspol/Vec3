// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "vector3.h"
int main()
{
	Vec3<int> vector01;
	Vec3<int> vector02 (1, 2, 3);
	Vec3<int> vector03(vector01);
	Vec3<int> vector04(3, 2, 1);
	Vec3<int> vector05;
	cout << "Vector01 values "<<  vector01.x << " " << vector01.y << " " << vector01.z;
	cout << "\nVector02 values " << vector02.x << " " << vector02.y << " " << vector02.z;
	cout << "\nVector03 values " << vector03.x << " " << vector03.y << " " << vector03.z;
	cout << "\nVector04 values " << vector04.x << " " << vector04.y << " " << vector04.z;
	cout << "\nVector05 values " << vector05.x << " " << vector05.y << " " << vector05.z;
	cout << "\n\n\nSumming ";
	vector02 += vector04;
	cout << "\nVector02+=Vector04 values " << vector02.x << " " << vector02.y << " " << vector02.z;
	vector01 = vector01.operator+(vector04);
	cout << "\nvector01 = vector01.operator+(vector04) " << vector01.x << " " << vector01.y << " " << vector01.z;
	cout << "\n\n\nSubtracting ";
	vector05 -= vector04;
	cout << "\nVector05-=Vector04 values " << vector05.x << " " << vector05.y << " " << vector05.z;
	vector05 = vector05.operator-(vector04);
	cout << "\nVector05=vector05.operator-(vector04) values " << vector05.x << " " << vector05.y << " " << vector05.z;
	cout << "\n\n\nEqual "; //Does not work
	
	vector01 = vector01.operator==(vector02);
	cout << "\nVector01==Vector02 values " << vector01.x << " " << vector01.y << " " << vector01.z;

	cout << "\n\n\nFunctions\n ";

	vector05.SetToZero();
	cout << "\nSetToZero ";
	cout << "\nVector05 values " << vector05.x << " " << vector05.y << " " << vector05.z;
	cout << "\nIsZero ";
	cout << "\nIs vector04 zero? ";
	if (vector04.IsZero()) cout << " -Yes ";
	else cout << " -No ";
	cout << "\nIs vector05 zero? ";
	if (vector05.IsZero()) cout << " -Yes ";
	else cout << " -No ";
	cout << "\nNormalize ";
	vector05.Normalize();
	cout << "\nVector05 Normalized: " << vector05.x << " " << vector05.y << " " << vector05.z;
	cout << "\nDistanceTo ";
	cout << "\nDistance between vector01 and vector02: " << vector01.DistanceTo(vector02);;
}

