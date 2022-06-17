// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DyeColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DYECOLORUTIL
public:
    class DyeColorUtil& operator=(class DyeColorUtil const &) = delete;
    DyeColorUtil(class DyeColorUtil const &) = delete;
    DyeColorUtil() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DYECOLORUTIL
#endif
    MCAPI static class std::array<short, 16> const COLOR_TO_AUX;
    MCAPI static class std::array<short, 4> const DEPRECATED_DYE_AUX_VALUES;
    MCAPI static class std::array<short, 16> const DYE_AUX_VALUES;
    MCAPI static int getAuxValue(enum ItemColor);
    MCAPI static enum ItemColor getItemColor(int);
    MCAPI static enum ItemColor getRandomItemColor(class Random &);
    MCAPI static class std::array<enum ItemColor, 20> const mColorMap;



};