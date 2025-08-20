#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 
#include <unistd.h>  

typedef struct{

  float x;
  float y;

} Vec2;

typedef struct {

  float mass;
  Vec2 force;    
  Vec2 vel;
  Vec2 pos;

} Particle;

typedef struct {

  int a, b;
  float damping;     
  float k;    // spring constant 
  float rest_len;   // rest length l0 

} Spring;

typedef struct {

  int mass;
  int num_particles; 
  int num_springs;
  Particle *particles;
  Spring *springs;
} SoftBall;

int main()
{



}

// add functions for vector math, subtract add, length, normalize, etc.
