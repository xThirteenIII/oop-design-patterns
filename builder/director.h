#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

#include "builder.h"

/**
 * The Director is only responsible for executing the building steps in a
 * particular sequence. It is helpful when producing products according to a
 * specific order or configuration. Strictly speaking, the Director class is
 * optional, since the client can control builders directly.
 */
class Director{
    private:
        Builder* builder;
    public:
        void set_builder(Builder* builder);
    /**
     * The Director can construct several product variations using the same
     * building steps.
     */
        void BuildMinimalViableProduct();
        void BuildFullFeatureProduct();
};
#endif
