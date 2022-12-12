#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void saveXRange(int saveXRange)
    {
        XRange= saveXRange;
    }

    void saveYRange(int saveYRange)
    {
        YRange= saveYRange;
    }

    int getXRange()
    {
        return XRange;
    }

    int getYRange()
    {
        return YRange;
    }
protected:
    ModelListener* modelListener;
    int XRange{100};
    int YRange{195};
};

#endif // MODEL_HPP
