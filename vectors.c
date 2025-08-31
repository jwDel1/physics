#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 

void sub_Vec(Vec2 *minuen, Vec2 *subtra)
{

  &minuen->x -= (subtra->x);
  &minuen->y -= (subtra->y);

}


void add_Vec(Vec2 *minuen, Vec2 *subtra)
{

  &minuen->x += (subtra->x);
  &minuen->y += (subtra->y);

}

void norm_Vec(Vec2 *v)
{

  float magnitude = (v->x)^2;
  magnitude += (v->y)^2; 
  magnitude = sqrt(magnitude);

  &v->x = (v->x) / magnitude;
  &v->y = (v->y) / magnitude;

}

float dot_Prod(Vec2 a, Vec2 b)
{

  float sum;
  
  sum = (a->x) * (b->x);
  sum += (a->y) * (b->y); 
  
  return sum;

}

void cross_Prod(Vec2 a, Vec2 b, Vec2 *c)
{
  
  &c->x = (a->x) * (b->y);

  &c->y = (a->y) * (b->x);
  &c->y = (c->y) * -1.0;

}



// add functions for vector math, subtract add, length, normalize, etc.



