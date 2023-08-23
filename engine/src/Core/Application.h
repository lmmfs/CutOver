#pragma once

#include "Core.h"

namespace CO {

    class CO_API Application {
    private:
        /* data */
    public:
        Application(/* args */);
        virtual ~Application();
        void run();
    };

    Application* CreateApplication();

}