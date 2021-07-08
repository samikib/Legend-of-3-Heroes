#pragma once
#ifndef ACTIONDECORATOR_H_
#define ACTIONDECORATOR_H_

#include "action.h"

// decorator
class ActionDecorator : public Action
{
public:
	ActionDecorator(Action* act)
	{
		action = act;
	}

	virtual std::string ActionName()
	{
		return action->ActionName();
	}

	virtual int32 Damage(int32 power)
	{
		return action->Damage(power);
	}

	virtual int32 getMPCost()
	{
		return action->getMPCost();
	}

protected:
	Action* action;

};

//concrete decorators

class Attack : public ActionDecorator
{
public:
	Attack(Action* act) : ActionDecorator(act) {};

	virtual std::string ActionName()
	{
		return "Attack " + action->ActionName();
	}

	virtual int32 Damage(int32 power)
	{
		return action->Damage(power) + 1;
	}

	virtual int32 getMPCost()
	{
		return action->getMPCost();
	}

};

class Stream : public ActionDecorator
{
public:
	Stream(Action* act) : ActionDecorator(act) {};

	virtual std::string ActionName()
	{
		return "Stream " + action->ActionName();
	}

	virtual int32 Damage(int32 power)
	{
		return action->Damage(power) + 1;
	}

	virtual int32 getMPCost()
	{
		return action->getMPCost() + 1;
	}

};

class Fire : public ActionDecorator
{
public:
	Fire(Action* act) : ActionDecorator(act) {};

	virtual std::string ActionName()
	{
		return "Fire " + action->ActionName();
	}

	virtual int32 Damage(int32 power)
	{
		return action->Damage(power) + 3;
	}

	virtual int32 getMPCost()
	{
		return action->getMPCost() + 3;
	}

};

class Lightning : public ActionDecorator
{
public:
	Lightning(Action* act) : ActionDecorator(act) {};

	virtual std::string ActionName()
	{
		return "Lightning " + action->ActionName();
	}

	virtual int32 Damage(int32 power)
	{
		return action->Damage(power) + 5;
	}

	virtual int32 getMPCost()
	{
		return action->getMPCost() + 5;
	}

};


#endif // !ACTIONDECORATOR_H_
