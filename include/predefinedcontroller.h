#ifndef PREDEFINEDCONTROLLER_H
#define PREDEFINEDCONTROLLER_H
#include <string>
#include "automatedcontroller.h"


class PredefinedController : public AutomatedController
{
    public:
        PredefinedController(std::string);
        virtual ~PredefinedController();
        void doControls();
    protected:
    private:
};

#endif // PREDEFINEDCONTROLLER_H
