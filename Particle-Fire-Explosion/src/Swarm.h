/*
 * Swarm.h
 *
 *  Created on: 03-May-2020
 *      Author: saurov
 */

#ifndef SWARM_H_
#define SWARM_H_
#include "Particle.h"

class Swarm {
public:
const static int NPARTICLE=5000;


private:
	Particle *m_pParticle;

	int LastTime;

public:
	Swarm();
	virtual ~Swarm();
    Particle const  *getparticle(){return m_pParticle;}
    void update(int elapsed);
};

#endif /* SWARM_H_ */
