/*
 * Particle.h
 *
 *  Created on: 17 Nov 2022
 *      Author: Homs
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_


namespace sod {

struct Particle {
	double m_x;
	double m_y;
private:
	double m_speed;
	double m_direction;
private:
	void init();
public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace sod */

#endif /* PARTICLE_H_ */
