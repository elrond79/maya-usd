//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
////////////////////////////////////////////////////////////////////////
// This file is generated by a script.  Do not edit directly.  Edit the
// wrapRange.template.cpp file to make changes.

#include "pxr/pxr.h"
#include "pxr/base/gf/range1f.h"
#include "pxr/base/gf/range1d.h"

#include "pxr/base/tf/pyUtils.h"
#include "pxr/base/tf/wrapTypeHelpers.h"
#include "pxr/base/tf/pyContainerConversions.h"

#include <boost/python/class.hpp>
#include <boost/python/copy_const_reference.hpp>
#include <boost/python/operators.hpp>
#include <boost/python/return_arg.hpp>

#include <string>

using namespace boost::python;

using std::string;

PXR_NAMESPACE_USING_DIRECTIVE

namespace {

static const int _dimension = 1;

static string _Repr(GfRange1f const &self) {
    return TF_PY_REPR_PREFIX + "Range1f(" +
        TfPyRepr(self.GetMin()) + ", " + TfPyRepr(self.GetMax()) + ")";
}

static size_t __hash__(GfRange1f const &r) { return hash_value(r); }

} // anonymous namespace 

void wrapRange1f()
{    
    object getMin = make_function(&GfRange1f::GetMin,
                                  return_value_policy<return_by_value>());

    object getMax = make_function(&GfRange1f::GetMax,
                                  return_value_policy<return_by_value>());

    class_<GfRange1f>("Range1f", init<>())
        .def(init<GfRange1f>())
        .def(init<float , float >())
        
        .def(TfTypePythonClass())

        .def_readonly("dimension", _dimension)
        
        .add_property("min", getMin, &GfRange1f::SetMin)
        .add_property("max", getMax, &GfRange1f::SetMax)

        .def("GetMin", getMin)
        .def("GetMax", getMax)

        .def("GetSize", &GfRange1f::GetSize)
        .def("GetMidpoint", &GfRange1f::GetMidpoint)
    
        .def("SetMin", &GfRange1f::SetMin)
        .def("SetMax", &GfRange1f::SetMax)
    
        .def("IsEmpty", &GfRange1f::IsEmpty)
    
        .def("SetEmpty", &GfRange1f::SetEmpty)

        .def("Contains", (bool (GfRange1f::*)(float ) const)
             &GfRange1f::Contains)
        .def("Contains", (bool (GfRange1f::*)(const GfRange1f &) const)
             &GfRange1f::Contains)
    
        .def("GetUnion", &GfRange1f::GetUnion)
        .staticmethod("GetUnion")
    
        .def("UnionWith", (const GfRange1f & (GfRange1f::*)(float ))
             &GfRange1f::UnionWith, return_self<>())
        .def("UnionWith", (const GfRange1f & (GfRange1f::*)(const GfRange1f &))
             &GfRange1f::UnionWith, return_self<>())
    
        .def("GetIntersection", &GfRange1f::GetIntersection)
        .staticmethod("GetIntersection")
    
        .def("IntersectWith", (const GfRange1f & (GfRange1f::*)(const GfRange1f &))
             &GfRange1f::IntersectWith, return_self<>())
    
        .def("GetDistanceSquared", &GfRange1f::GetDistanceSquared)
    
        .def(str(self))
        .def(self += self)
        .def(self -= self)
        .def(self *= double())
        .def(self /= double())
        .def(self + self)
        .def(self - self)
        .def(double() * self)
        .def(self * double())
        .def(self / double())
        .def(self == GfRange1d())
        .def(self != GfRange1d())
        .def(self == self)
        .def(self != self)
    
        .def("__repr__", _Repr)
        .def("__hash__", __hash__)

        
        ;
    to_python_converter<std::vector<GfRange1f>,
        TfPySequenceToPython<std::vector<GfRange1f> > >();
    
}