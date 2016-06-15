/*
 * EasyIO.h
 *
 * Created: 10.01.2013 23:19:13
 *  Author: Bjoern
 */ 

#ifndef EASYIO_H_
#define EASYIO_H_

#define JOIN3(a,b,c) a ## b ## c
#define JOIN(a,b)    a ## b
#define DPORT_(p,b)  JOIN(PORT, p)
#define DPIN_(p,b)   JOIN(PIN, p)
#define DDDR_(p,b)   JOIN(DDR, p)
#define DBIT_(p,b)   JOIN3(P, p, b)
#define DPORT(ex)    DPORT_(ex)
#define DPIN(ex)     DPIN_(ex)
#define DDDR(ex)     DDDR_(ex)
#define DBIT(ex)     DBIT_(ex)

#define SETPORT(ex)    DDDR_(ex) |= (1<<DBIT_(ex));
#define SETPIN(ex)     DDDR_(ex) &= ~(1<<DBIT_(ex));
#define SETON(ex)      DPORT_(ex) |= (1<<DBIT_(ex));
#define SETOFF(ex)     DPORT_(ex) &= ~(1<<DBIT_(ex));
#define TOGGLE(ex)     DPORT_(ex) ^= (1<<DBIT_(ex)); 
#define ISSET(ex)    DPIN_(ex) & (1<<DBIT_(ex))
#define ISNSET(ex)   !(DPIN_(ex) & (1<<DBIT_(ex)))

#endif /* EASYIO_H_ */
