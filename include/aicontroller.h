#ifndef AICONTROLLER_H
#define AICONTROLLER_H

#include "../include/controller.h"


class AIController : public Controller
{
    public:
        AIController();
        virtual ~AIController();
        void getControls() const;
        void doControls();
    private:
};

#endif // AICONTROLLER_H
