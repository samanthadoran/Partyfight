#ifndef AICONTROLLER_H
#define AICONTROLLER_H
#include <stdlib.h>
#include <ctime>
#include "../include/automatedcontroller.h"


class AIController : public AutomatedController
{
    public:
        AIController();
        virtual ~AIController();
        void doControls();
    private:
};

#endif // AICONTROLLER_H
