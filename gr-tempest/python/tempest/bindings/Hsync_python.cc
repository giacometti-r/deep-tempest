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
/* BINDTOOL_HEADER_FILE(Hsync.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(49da037e5a06d7c558527ec53b03f8c4)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <tempest/Hsync.h>
// pydoc.h is automatically generated in the build directory
#include <Hsync_pydoc.h>

void bind_Hsync(py::module& m)
{

    using Hsync    = ::gr::tempest::Hsync;


    py::class_<Hsync, gr::block, gr::basic_block,
        std::shared_ptr<Hsync>>(m, "Hsync", D(Hsync))

        .def(py::init(&Hsync::make),
           py::arg("Htotal"),
           py::arg("delay"),
           D(Hsync,make)
        )
        




        
        .def("set_Htotal_and_delay",&Hsync::set_Htotal_and_delay,       
            py::arg("Htotal"),
            py::arg("delay"),
            D(Hsync,set_Htotal_and_delay)
        )

        ;




}








