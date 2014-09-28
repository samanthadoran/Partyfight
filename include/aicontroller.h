#ifndef AICONTROLLER_H
#define AICONTROLLER_H
#include <stdlib.h>
#include <ctime>
#include "../include/controller.h"


class AIController : public Controller
{
    public:
        AIController();
        virtual ~AIController();
        void doControls();
    private:
};

#endif // AICONTROLLER_H
