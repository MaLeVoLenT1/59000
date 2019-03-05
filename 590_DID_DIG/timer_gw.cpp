/*
 * timer_gw.cpp
 *
 *  Created on: Jul 30, 2013
 *      Author: emac1
 */

/**
 * @file timer.c
 *
 * Simple software timer example.
 *
 * @author EMAC, Inc. <support@emacinc.com>
 */
/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#include <ctime>
#include <math.h>
#include "timer_gw.h"
// struct itimerval tout_val;//static
// struct timeval tv;//static

/**
 * function to calculate the number of milliseconds elapsed
 * between two timevals
 * @param start the first value
 * @param end the second value
 * @return the number of milliseconds elapsed between start and end
 */
static inline int time_elapsed_ms(struct timeval *start, struct timeval *end)
{

	return (int)(((end->tv_sec * 1000) + (end->tv_usec / 1000)) -
			((start->tv_sec	* 1000) + (start->tv_usec / 1000)));
}

/**
 * signal handler for SIGALARM. calculates elapsed time and
 * resets the signal
 * @param sig the signal number, unused
 */
void alarm_wakeup(int sig)
{
	static struct timeval new_tv;

	gettimeofday(&new_tv, NULL);
	signal(SIGALRM, alarm_wakeup);

	/*
	 * Note: remove printf from signal handler for production
	 * applications.
	 */
//	printf("delay : %d  ms \n", time_elapsed_ms(&tv, &new_tv));
//	tv = new_tv;
}

/**
 * signal handler to cause program exit
 */
void exit_func(int sig)
{
	signal(SIGINT, exit_func);
	exit(EXIT_SUCCESS);
}

void timetest(int argc, char *argv[])

{
	int freq;
	int interval_sec;
	int interval_usec;

	if (argc < 2) {
		fprintf(stderr, "Usage: timer HZ\n");
		exit(EXIT_FAILURE);
	}
	if ((freq = atoi(argv[1])) == 0) {
		fprintf(stderr, "Invalid frequency value\n");
		exit(EXIT_FAILURE);
	}

	if (freq == 1) {
		interval_sec = 1;
		interval_usec = 0;
	} else {
		interval_sec = 0;
		interval_usec = (1e6 / freq);
	}
	printf("Starting timer at %d HZ\n", freq);

	/*
	 * this application sets up a recurring periodic timer
	 * so the "next" value and "current" value are set the same
	 */
//	tout_val.it_interval.tv_sec = interval_sec; /* Next Value in seconds */
//	tout_val.it_interval.tv_usec = interval_usec; /* Next Value in microseconds */
//	tout_val.it_value.tv_sec = interval_sec; /* Current Value in seconds */
//	tout_val.it_value.tv_usec = interval_usec; /* Current Value in microseconds */
	/* start timer */
//	setitimer(ITIMER_REAL, &tout_val, 0);
//	gettimeofday(&tv, NULL);
	/* set up signal handlers */
	signal(SIGALRM, alarm_wakeup);
	signal(SIGINT, exit_func);

	while (1) {
		/* wait for signals */
		pause();
	}
	exit(EXIT_SUCCESS);
}
/*
 *
 * #include <ctime>
// ...

clock_t start = clock();
// ...
// Code you want to measure
// ...
clock_t finish = clock();

To get the time consumed by the code between the two clock() calls, you do:

(finish - start) / CLOCKS_PER_SEC*
/
 */
