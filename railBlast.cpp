#include "railBlast.h"

RailBlast::RailBlast(int x, int y, int xdir, int ydir)
{
    image_.load(":img/railBlast.png");
    rect_ = image_.rect();
    x_ = x;
    y_ = y;
    rect_.translate(x_, y_);
    isDead_ = false;
    xdir_ = xdir; ydir_ = ydir;
    speed_ = 6;
    damage_ = 135;
    isEnemyProjectile_ = false;
    isExplosive_ = false;
    isInvincible_ = true;
    isHoming_ = false;
}
