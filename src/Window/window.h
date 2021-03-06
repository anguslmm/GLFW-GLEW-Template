//
// Created by angus on 7/27/18.
//

#ifndef GENGINE_WINDOW_H
#define GENGINE_WINDOW_H

#include <GLFW/glfw3.h>

namespace gengine { namespace graphics {

    class Window
    {
    private:
        const char* m_Title;
        int m_Width, m_Height;
        GLFWwindow* m_Window;
        bool m_Closed;
    public:
        Window(const char* title, int width, int height);
        ~Window();
        void update() const;
        bool closed() const;
    private:
        bool init();

    };

}}

#endif //GENGINE_WINDOW_H
