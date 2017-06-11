#include <string>

//	�����Ϣģ����
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

	//	ͨ���ú�������ʵ���Ƿ�ʹ�ù��ӣ�����������Ƿ�ʹ�ù���
	virtual bool HaveTeam(){ return true; }
};

//	�����˶�Ա��ϢA
class CPlayer_A : public CInfoTemplate
{
	string Name() { return " Kobe "; }
	int Age() {	return 38; }
	string Team() { return " Laker "; }
};

//	�����˶�Ա��ϢB
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
	bool HaveTeam() { return false; }	//	ʹ�ù��Ӻ�������ǣ����˶�Ա��δ�ж���
	string Team() { return ""; }
};