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
namespace office{
class Office : public developed_lot::DevelopedLot {
	private:
		int num_offices
	public:
		Office(double, double, double, double, double, int, int);

	virtual ~Office(){};

	double value();
};
};
#endif
