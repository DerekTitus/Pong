/*
 * PongHelper.c
 *
 *  Created on: Oct 15, 2013
 *      Author: C15Derek.Titus
 */
#include "PongHelper.h"

ball_t creation(int xposition, int yposition, int xvelocity, int yvelocity, char radius){
	ball_t ballin;
	ballin.position.x = xposition;
	ballin.position.y = yposition;
	ballin.velocity.x = xvelocity;
	ballin.velocity.y = yvelocity;
	ballin.radius = radius;
	return (ballin);
}

ball_t movement(ball_t ballmovement){
	ballmovement.position.x = ballmovement.position.x + ballmovement.velocity.x;
	ballmovement.position.y = ballmovement.position.y + ballmovement.velocity.y;


		if (ballmovement.position.x + ballmovement.radius >= SCREEN_WIDTH)
	{
		ballmovement.velocity.x = - ballmovement.velocity.x;
	}

	if (ballmovement.position.x - ballmovement.radius <= 0 )
	{
		ballmovement.velocity.x = - ballmovement.velocity.x;
	}

	if (ballmovement.position.y + ballmovement.radius >= SCREEN_LENGTH)
	{
		ballmovement.velocity.y = - ballmovement.velocity.y;
	}

	if (ballmovement.position.y - ballmovement.radius <= 0 )
	{
		ballmovement.velocity.y = - ballmovement.velocity.y;
	}




	return (ballmovement);




}



