#include <iostream>
#include <string>
using namespace std;

struct  tel
{
	string home;
	string mobile;
};

struct parent
{
	string name;
	int age;
	tel t;
};

struct StudentScore
{
	string name;
	double score;
	parent p;
	tel t;
};


int main()
{
	string s1, s2, s3;
	double score1, score2, score3;	

	s1 = "Alice";
	score1 = 85.5;

	s2 = "Bob";
	score2 = 92.0;

	s3 = "Charlie";
	score3 = 78.0;

	// arrary
	string names[3];
	double scores[3];
	names[0] = s1;
	scores[0] = score1;

	names[1] = s2;
	scores[1] = score2;

	names[2] = s3;
	scores[2] = score3;

	cout << "=== Student Scores ===" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "Name: " << names[i] << ", Score: " << scores[i] << endl;
	}

	StudentScore st1;
	st1.name = "David";
	st1.score = 88.0;

	st1.t.home = "03-9876543";
	st1.t.mobile = "082-1234567";

	st1.p.name = "Michael";
	st1.p.age = 45;
	st1.p.t.home = "02-1234567";
	st1.p.t.mobile = "081-7654321";

	cout << "Name: " << st1.name << ", Score: " << st1.score << endl;

	StudentScore st[3];
	st[0].name = "Eve";
	st[0].score = 91.5;
	st[1].name = "Frank";
	st[1].score = 76.0;
	st[2].name = "Grace";
	st[2].score = 89.0;
	for (int i = 0; i < 3; i++)
	{
		cout << "Name: " << st[i].name << ", Score: " << st[i].score << endl;
	}



	return 1;

}