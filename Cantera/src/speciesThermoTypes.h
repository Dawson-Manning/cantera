/**
 *  @file speciesThermoTypes.h
 *
 * $Author$
 * $Revision$
 * $Date$
 */

// Copyright 2001  California Institute of Technology


#ifndef SPECIES_THERMO_TYPES_H
#define SPECIES_THERMO_TYPES_H

// Constant Cp
#define CONSTANT_CP 1

// Polynomial
#define POLYNOMIAL_4 2

// NASA Polynomials
#define NASA 4
#define NASA2 4

// Shomate Polynomials used in NIST database
#define SHOMATE 8
#define SHOMATE2 8

// Tiger Polynomials
#define TIGER 16

#define SIMPLE 32

#define MU0_INTERP 64

#define SHOMATE1 128

#define NASA1  256

#include "ct_defs.h"

#include "stringUtils.h"
#include "global.h"

namespace Cantera {

    struct UnknownThermoParam {
        UnknownThermoParam(int thermotype) {
            writelog(std::string("\n ### ERROR ### \n") + 
                "Unknown species thermo parameterization ("
                + int2str(thermotype) + ")\n\n");
        }
    };


    /// holds parameterization-dependent index information
    struct ThermoIndexData {
        int param;
        int nCoefficients;
        int Tmin_coeff;
        int Tmax_coeff;
        int Pref_coeff;
    };

}

#endif

                
