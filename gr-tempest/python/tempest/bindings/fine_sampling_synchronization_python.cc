/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(fine_sampling_synchronization.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(f25bd194ecd7e5a443ec0f8bae79c4ab)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <tempest/fine_sampling_synchronization.h>
// pydoc.h is automatically generated in the build directory
#include <fine_sampling_synchronization_pydoc.h>

void bind_fine_sampling_synchronization(py::module& m)
{

    using fine_sampling_synchronization    = ::gr::tempest::fine_sampling_synchronization;


    py::class_<fine_sampling_synchronization, gr::block, gr::basic_block,
        std::shared_ptr<fine_sampling_synchronization>>(m, "fine_sampling_synchronization", D(fine_sampling_synchronization))

        .def(py::init(&fine_sampling_synchronization::make),
           py::arg("Htotal"),
           py::arg("Vtotal"),
           py::arg("correct_sampling"),
           py::arg("max_deviation"),
           py::arg("update_proba"),
           D(fine_sampling_synchronization,make)
        )
        




        
        .def("set_Htotal_Vtotal",&fine_sampling_synchronization::set_Htotal_Vtotal,       
            py::arg("Htotal"),
            py::arg("Vtotal"),
            D(fine_sampling_synchronization,set_Htotal_Vtotal)
        )

        ;




}








