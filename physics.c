#include <stdlib.h>
#include <stdio.h> 
#include <math.h>
#include "vectors.h"       // for vector math file I made

#define ROOT_TWO_HALF 0.7071
#define GRAVITY 0.0098

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
  Particle* c0;
  Particle* c1;

} Spring;

typedef struct
{
  int radius;
  int num_particles; 
  Particle *particles
  Spring *springs;
  Vec2 center;

} Soft_Ball;


int main() 
{

  Soft_Ball ball;

  ball.num_particles = 9;
  ball.radius = 1;
  ball.center = {51.5, 51.5};

  ball.particles = (float *)malloc(sizeof(Particle * ball.num_particles));
  
  ball.particles[0].position = center;

  while(/* some condition true */)
  {
   
    float a1[];
    float a2[];
    float b1[];
    float b2[];

    for(/* p in particles */)
    {

        

    }

  }

}

// while some condition is true

  // for every particle in particles
    
    // vec->force->(x,y) = setForc(enviornment + collision + springs force)
    // accel = force(x,y)/(particle->mass)
      // b1 = v(t) + delta(t)/2 * accel
      // b2 = Force(
    // setVelocity = RK4 integration 
    

void set_Particles(Soft_Ball *b) 
{
  

  ball->particles[0]->position = ball.center;

    for(int j = 0; j < 4; j++)
    {
       
      Vec2 difference; 

      if(j<3){

        difference.x = 0 + (ROOT_TWO_HALF * j);

      } else {

        difference.x = 0 - ROOT_TWO_HALF ;      

      }

      difference.y = ball->radius - (ROOT_TWO_HALF * j)

      vec_Add(ball->particles[(j % 8) + 1]->position, difference);    
  
      vec_Sub(ball->particles[(j % 8) + 5]->position, difference); 
  
    }

}

void setForce(Soft_Mass *s)
{

  

}
