#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

enum FILLER {
    NONE,
    CHOCOLATE,
    BANANA,
    PISTACHIO
};

enum TOPING {
    T_NONE,
    T_CHOCOLATE,
    T_BANANA,
    T_CHERRY,
    T_PISTACHIO
};

enum WAFER {
    W_NONE,
    W_CHOCOLATE,
    W_BELGIAN,
    W_MILK,
    W_SIMPLE,
};

class IceCreamSphere {
    FILLER filler;
public:
    IceCreamSphere(FILLER filler) : filler(filler) {
    }

    string toString()
    {
        switch (filler) {
            case FILLER::CHOCOLATE: return "CHOCOLATE";
            case FILLER::BANANA: return "BANANA";
            case FILLER::PISTACHIO: return "PISTACHIO";
        }

        throw std::logic_error("err");
    }
};

class IceCream {
    vector<IceCreamSphere *> items;
    TOPING toping;
    WAFER wafer;

    friend class BelgianIceCreateBuilder;
    friend class LowCostBuilder;

public:
    string toString()
    {
        string s = "";

        switch (wafer) {
            case WAFER::W_BELGIAN: s += "BELGIAN"; break;
            case WAFER::W_CHOCOLATE: s += "CHOCOLATE"; break;
            case WAFER::W_MILK: s += "MILK"; break;
            case WAFER::W_SIMPLE: s += "SIMPLE"; break;
        }

        for (auto & item : items) {
            s += ", " + item->toString();
        }

        switch (toping) {
            case TOPING::T_BANANA: s += ", BANANA"; break;
            case TOPING::T_CHERRY: s += ", CHERRY"; break;
            case TOPING::T_CHOCOLATE: s += ", CHOCOLATE"; break;
            case TOPING::T_PISTACHIO: s += ", PISTACHIO"; break;
        }

        return s;
    }
};

class IceCreamBuilder {
protected:
    vector<FILLER> fillers;
    TOPING toping;

public:
    void addSphere(FILLER filler) {
        fillers.push_back(filler);
    }

    void setToping(TOPING toping) {
        this->toping = toping;
    }

    virtual IceCream* build() = 0;
};

class BelgianIceCreateBuilder: public IceCreamBuilder {
public:
    virtual IceCream* build() {
        IceCream* iceCream = new IceCream();
        for (auto & f : fillers) {
            iceCream->items.push_back(new IceCreamSphere(f));
        }
        iceCream->toping = toping;
        iceCream->wafer = WAFER::W_BELGIAN;
        return iceCream;
    }
};

class LowCostBuilder: public IceCreamBuilder {
public:
    virtual IceCream* build() {
        IceCream* iceCream = new IceCream();
        iceCream->wafer = WAFER::W_SIMPLE;
        return iceCream;
    }
};

void userGUI(IceCreamBuilder &builder) {
    builder.addSphere(FILLER::PISTACHIO);
    builder.addSphere(FILLER::CHOCOLATE);
    builder.addSphere(FILLER::CHOCOLATE);
    builder.setToping(TOPING::T_CHERRY);

    IceCream *iceCream = builder.build();

    cout << "It's your's icecream: " << iceCream->toString() << endl;
}

int main() {
    BelgianIceCreateBuilder builder1;
    LowCostBuilder builder2;

    userGUI(builder1);
    userGUI(builder2);
}