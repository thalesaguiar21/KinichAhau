#include "Ray.h"

namespace utils {

  Ray::Ray( void ) {
    origin = Point3(0, 0, 0);
    terminal = Point3(0, 0, 0);
  }

  Ray::Ray(Point3 origin_, Point3 terminal_) {
    origin = origin_;
    terminal = terminal_;
    dir = terminal - origin;
  }

  void Ray::setDir( Vector3 dir_ ) {
    dir = dir_;
  }

  inline Vector3 Ray::Direction() {
    return dir;
  }

  inline Point3 Ray::PointAt(float t) {
    return origin + t*Direction();
  }

} // namespace utils
