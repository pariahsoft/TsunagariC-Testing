#include "../../TsunagariC/src/data/data-area.h"

#include "../clouds.h"

class grove04 : public DataArea
{
	Clouds clouds;

public:
	grove04() {
		clouds.setZ(10.0);
	}

	void onLoad() {
		clouds.createRandomCloud(*this);

		const int second = 1000;
		clouds.createCloudsRegularly(*this, 20 * second, 30 * second);
	}
};
