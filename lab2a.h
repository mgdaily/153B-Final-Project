/*****************************************************************************
* lab2a.h for Lab2A of ECE 153a at UCSB
* Date of the Last Update:  October 23,2014
*****************************************************************************/

#ifndef lab2a_h
#define lab2a_h

enum Lab2ASignals {
	NEXT_ROUND = Q_USER_SIG,
	END_GAME,
	ENCODER_CLICK
};


extern struct Lab2ATag AO_Lab2A;


void Lab2A_ctor(void);
void GpioHandler(void *CallbackRef);
void TwistHandler(void *CallbackRef);

#endif
