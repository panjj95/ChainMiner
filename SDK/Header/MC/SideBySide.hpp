// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

namespace SideBySide {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    MCAPI void _collectVehiclesAndPassengersNotInView(class StrictEntityContext const &, struct SideBySideValidationExceptionComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct UsesSideBySideComparisonComponent>, struct SideBySideValidationExceptionComponent const> const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct PassengerComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct VehicleComponent const>, std::vector<struct std::pair<class StrictEntityContext, struct SideBySideValidationExceptionComponent>> &);

};