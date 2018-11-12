#include <RayTracing/TRay.h>

using namespace RayTracing;
using namespace glm;

TRay::TRay(const vec3 & origin, const vec3 & dir, float time)
	: Ray(origin, dir), time(time) { }

float TRay::GetTime() const {
	return time;
}

void TRay::SetTime(float time) {
	this->time = time;
}
