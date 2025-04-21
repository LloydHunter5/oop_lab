#ifndef _LOT_H
#define _LOT_H

namespace lot{
    class Lot{
        private:
            double latitude;
            double longitude;
            double width;
            double length;

        protected:
            double land_area();

        public:
            Lot(double, double, double, double);
            virtual ~Lot(){};

            virtual double value();

            double get_latitude();
            double get_longitude();
    };
};
#endif