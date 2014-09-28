#ifndef MANUALCONTROLLER_H
#define MANUALCONTROLLER_H

#include "../include/controller.h"


class ManualController : public Controller
{
    public:
        ManualController();
        virtual ~ManualController();
        void getControls() const;
        void doControls();
    private:
};

#endif // MANUALCONTROLLER_H
