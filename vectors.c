#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 

void sub_Vec(Vec2 *minuen, Vec2 subtra)
{

  &minuen->x -= (subtra->x);
  &minuen->y -= (subtra->y);

}

void add_Vec(Vec2 *intial, Vec2 addend)
{

  &initial->x += (addend->x);
  &initial->y += (addend->y);

}

void norm_Vec(Vec2 v, Vec2 *norm)
{

  float magnitude = magnitude_Vec(&v);

  &norm->x = &(v->x) / magnitude;
  &norm->y = &(v->y) / magnitude;

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

float magnitude_Vec(Vec2 a)
{

  float sum = 0.0;
  sum += (a->x)^2;
  sum += (a->y)^2;
  sum = sqrt(sum);

}

// add functions for vector math, subtract add, length, normalize, etc.



