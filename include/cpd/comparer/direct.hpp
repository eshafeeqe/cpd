// cpd - Coherent Point Drift
// Copyright (C) 2016 Pete Gadomski <pete.gadomski@gmail.com>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

/// \file
/// Compute correpondence proabilities using the direct method.

#pragma once

#include <cpd/comparer/base.hpp>
#include <cpd/matrix.hpp>
#include <cpd/probabilities.hpp>

namespace cpd {

/// Use Myronenko's slow direct method to calculate probabilities.
class DirectComparer : public Comparer {
public:
    Probabilities compute(const Matrix& fixed, const Matrix& moving,
                          double sigma2, double outliers) const;
};
}
