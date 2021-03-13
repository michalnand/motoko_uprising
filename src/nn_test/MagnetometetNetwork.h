#ifndef _MagnetometetNetwork_H_
#define _MagnetometetNetwork_H_


#include <ModelInterface.h>

class MagnetometetNetwork : public ModelInterface
{
	public:
		 MagnetometetNetwork();
		 void forward();
};


#endif
