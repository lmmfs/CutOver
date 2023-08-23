#include <CutOver.h>

class Sandbox : public CO::Application {

public:
    Sandbox(/* args */) {
    }

    ~Sandbox() {
    }

};

CO::Application* CO::CreateApplication(){
    return new Sandbox();
}
