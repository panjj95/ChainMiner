// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MesaSurfaceBuilderNoises {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MESASURFACEBUILDERNOISES
public:
    class MesaSurfaceBuilderNoises& operator=(class MesaSurfaceBuilderNoises const &) = delete;
    MesaSurfaceBuilderNoises(class MesaSurfaceBuilderNoises const &) = delete;
    MesaSurfaceBuilderNoises() = delete;
#endif

public:
    MCAPI ~MesaSurfaceBuilderNoises();
    MCAPI static class MesaSurfaceBuilderNoises make(class XoroshiroPositionalRandomFactory const &);

protected:

private:
    MCAPI MesaSurfaceBuilderNoises(class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>, class NormalNoiseImpl<0, class MultiOctaveNoiseImpl<0, class ParityImprovedNoiseImpl<0>>>);

};