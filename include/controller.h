#ifndef CONTROLLER_H
#define CONTROLLER_H


class Controller
{
    public:
        Controller();
        virtual ~Controller();
        virtual void getControls() const = 0;
        virtual void doControls() = 0;
    private:
};

#endif // CONTROLLER_H
