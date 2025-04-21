#ifndef _DEVELOPED_LOT_H
#define _DEVELOPED_LOT_H
#include "lot.hpp"

namespace developed_lot{
    class DevelopedLot : public lot::Lot{
    private:
        double floor_area;
        int floors;
    protected:
        double floor_area_ratio();
    public:
        DevelopedLot(double, double, double, double, double, int);

        virtual ~DevelopedLot(){};

        double value();
    };
};

#endif