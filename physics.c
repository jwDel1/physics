#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include "vectors.h"       // for vector math file I made


typedef struct
{

  float mass;
  Vec2 force;
  Vec2 position;
  Vec2 velocity;

} Particle; 

typedef struct
{
  
  float damping;
  float restLength;
  float springConst;
  Particle *particles;

} Spring;

typedef struct
{

  int num_particles; 
  int num_springs;
  Spring *springs;

} Soft_Mass;


int main() 
{



}




