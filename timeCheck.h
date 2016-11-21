#pragma once
#include <time.h>
const int average = 60;
class Time {
	clock_t beforeTime;
	double deltaTime;
	double deltaTimes[average];
public:
	void Begin();
	void End();
	double GetFps();
	double GetTime();
	double GetFpsAverage();
};