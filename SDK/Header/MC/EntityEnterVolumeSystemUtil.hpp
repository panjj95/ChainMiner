// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace EntityEnterVolumeSystemUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI void _addActor(class Actor const &, class EntitiesEnteredVolumeComponent &, class EntitiesInsideVolumeComponent &);
    MCAPI bool _boundsContainsActor(class Actor const &, class VolumeBoundsComponent const &, class Dimension const &);
    MCAPI void _removeEmptyComponents(class EntityContext &, class EntitiesEnteredVolumeComponent &, class EntitiesInsideVolumeComponent &);

};