#include <string>

//	输出信息模板类
class CInfoTemplate
{
public:
	void ShowPlayerInfo()
	{
		cout << " The player info : " << endl;
		cout << " Name is : " << Name() << endl;
		cout << " Age is : " << Age() << endl;
		if ( HaveTeam() )
			cout << " Team is : " << Team() << endl;
		else
			cout << " No Team !" << endl; 
	}

public:
	virtual string Name() = 0;
	virtual int Age() = 0;
	virtual string Team() = 0;

	//	通过该函数，在子类决定是否使用拥有队伍
	virtual bool HaveTeam(){ return true; }
};

//	具体运动员信息A
class CPlayer_A : public CInfoTemplate
{
	string Name() { return " Kobe "; }
	int Age() {	return 38; }
	string Team() { return " Laker "; }
};

//	具体运动员信息B
class CPlayer_B : public CInfoTemplate
{
	string Name() { return " James "; }
	int Age() { return 33; }
	string Team() { return "Heat"; }
};

class CPlayer_C : public CInfoTemplate
{
	string Name() { return "T-MAC"; }
	int Age() { return 37; }
	bool HaveTeam() { return false; }	//	该运动员暂未有队伍
	string Team() { return ""; }
};