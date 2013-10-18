/*
 * PongHelper.h
 *
 *  Created on: Oct 15, 2013
 *      Author: C15Derek.Titus
 */

#ifndef PONGHELPER_H_
#define PONGHELPER_H_

#define SCREEN_WIDTH 640
#define SCREEN_LENGTH 480


typedef struct
{
	int x; //initializes an x segment
	int y; //initializes a y segment
} vector2d_t; //every time I type vector2d_t, it'll use this struct

typedef struct
{
	vector2d_t position; //uses vector2d_t struct to create position x and y values
	vector2d_t velocity; //uses vector2d_t struct to create velocity x and y values
	char radius; // creates radius
} ball_t; //every time it sees ball_t, uses this struct


ball_t creation(int xposition, int yposition, int xvelocity, int yvelocity, char radius);

ball_t movement(ball_t ballmovement);

#endif /* PONGHELPER_H_ */
