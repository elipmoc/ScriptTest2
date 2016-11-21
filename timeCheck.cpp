#include "stdafx.h"
#include "timeCheck.h"

//�v���J�n
void Time::Begin() {
	beforeTime = clock();
}
//�v���I��
void Time::End() {
	static int cont = -1;
	cont++;
	deltaTime = (double)((clock() - beforeTime) / 1000.0);
	deltaTimes[cont % 60] = deltaTime;
}

double Time::GetTime() { return deltaTime; }
double Time::GetFps() { return 1.0 / deltaTime; }
double Time::GetFpsAverage() {
	double total = 0;
	for (int i = 0; i < 60; i++) {
		total += deltaTimes[i];
		return 1.0 / total;
	}
}