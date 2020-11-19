#ifndef _OSCILLATOR_H_
#define _OSCILLATOR_H_

#include "output.h"

enum oscillator_type {
	SQUARE,
	SAW_DOWN,
	SAW_UP,
};

void init_oscillator();
void set_oscillator_frequency(float new_frequency);
void run_oscillator(sound_output *sound);

#endif
