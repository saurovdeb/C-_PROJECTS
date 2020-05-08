/*
 * Swarm.cpp
 *
 *  Created on: 03-May-2020
 *      Author: saurov
 */

#include "Swarm.h"

Swarm::Swarm() {

	m_pParticle=new Particle[NPARTICLE];
    LastTime=0;
}

Swarm::~Swarm() {
	delete[] m_pParticle;
}
void Swarm::update(int elapsed){
	int interval=elapsed-LastTime;

	for (int i = 0; i < Swarm::NPARTICLE; i++) {
		m_pParticle[i].update(interval);
	}

	LastTime=elapsed;
}
