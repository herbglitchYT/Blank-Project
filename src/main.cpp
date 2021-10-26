#include <ge.hpp>

class Temp : public ge::Object {
public:
    Temp(){}
    ~Temp(){}

    void update(){}
    void render(){}
};

GE_MAIN(Temp, 1920, 1080, "Blank Proj");