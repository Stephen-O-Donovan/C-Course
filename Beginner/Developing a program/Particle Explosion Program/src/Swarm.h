/*
 * Swarm.h
 *
 *  Created on: 17 Nov 2022
 *      Author: Homs
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"
namespace sod {

class Swarm {
public:
	const static int NPARTICLES = 5000;
private:
	Particle *m_pParticles;
	int lastTime;
public:
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);

	const Particle * const getParticles() { return m_pParticles; };
};

} /* namespace sod */

#endif /* SWARM_H_ */
