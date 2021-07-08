#pragma once
#ifndef ACTION_H_
#define ACTION_H_

#include <string>

//component class being decorated 

class Action
{
public:
	Action()
	{
		Name = "";
		MPCost = 0;
	}
	
	virtual std::string ActionName()
	{
		return Name;
	}

	virtual int32 Damage(int32 power)
	{
		return power;
		
	}

	virtual int32 getMPCost()
	{
		return MPCost;
	}


private:
	std::string Name;
	int32 MPCost;

};




#endif // !1
