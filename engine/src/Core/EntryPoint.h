#pragma once

extern CO::Application* CO::CreateApplication();

int main(int argc, char** argv) {
    auto app = CO::CreateApplication();
    app->run();
    delete app;
}