#include <stdlib.h>
#include <stdio.h> 
#include <math.h> 
#include <unistd.h>  

#define GRAVITY -9.8

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
  float k;          // spring constant 
  float rest_len;   // rest length l0 

} Spring;

typedef struct {

  int num_particles; 
  int num_springs;
  Particle *particles;
  Spring *springs;
  
} SoftBall;


int main()
{
  int theta;            // makes easier for users to input something than asking i and j vector 
  float init_magnitude; // magnitude of the starting velocity vector

  Softball ball;
  ball.num_particles = 8;
  ball.num_springs = 12;

  ball.particles = malloc(ball.num_particles * sizeof(Particle));
  ball.springs = malloc(ball.num_springs * sizeof(Spring)); 

  while()
  {
    for(int i = 0; i < num_particles; i++)                  // for each particle in particles
    {
      int j = (i+1)%(num_particles);
      int k = (i-1 + num_particles)%(num_particles);
      int l = (i+4)%(num_particles);
      
      set_force(particles[i], particles[j], particles[k], particles[l]);        // setForce (add collision detection within)
      set_velocity();                                       // set velocity
      set_position();                                       // set position
     
    }
    if(i >= 33)
    {
      i = 0                                                 // check if we need to update the screen
      updateScreen();
    } else {
      i++;
    }
                                                            // if not increment some counter for every time step
                                                            // have some conditional end to break 

  }
  free(ball.particles);
  free(ball.springs);
  return 0;

}

float env_force(Particle *p0)
{

   

}

float spring_force(Particle *p0, Particle *p1, Spring *s0)
{
  
   
  // should just return the net force on p0 or the net force of each spring?

}

void sub_Vec(Vec2 *minuen, Vec2 *subtra)
{

  minuen->x -= (subtra->x);
  minuen->y -= (subtra->y);

}


void add_Vec(Vec2 *minuen, Vec2 *subtra)
{

  minuen->x += (subtra->x);
  minuen->y += (subtra->y);

}

void norm_Vec(Vec2 *v)
{

  float magnitude = (v->x)^2 + (v->y)^2;
  magnitude = sqrt(magnitude);

  v->x = (v->x) / magnitude;
  v->y = (v->y) / magnitude;

}



// add functions for vector math, subtract add, length, normalize, etc.


// calculate forces function
//  


