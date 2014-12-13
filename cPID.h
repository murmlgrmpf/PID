// cPID.h

#ifndef _CPID_h
#define _CPID_h

#include <PID_v1.h>

class cPID : public PID
{
	private:
	double _Is;
	double _Setpoint;

	public:
	double _Output;
	cPID(double _p,double _i ,double _d, int _mode);
	double run(double Setpoint, double Is);
	double run(void);
};


#endif

