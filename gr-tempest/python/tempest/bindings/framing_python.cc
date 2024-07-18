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
/* BINDTOOL_HEADER_FILE(framing.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(9330070e50893441cc96aa6e82cc03fc)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <tempest/framing.h>
// pydoc.h is automatically generated in the build directory
#include <framing_pydoc.h>

void bind_framing(py::module& m)
{

    using framing    = ::gr::tempest::framing;


    py::class_<framing, gr::block, gr::basic_block,
        std::shared_ptr<framing>>(m, "framing", D(framing))

        .def(py::init(&framing::make),
           py::arg("Htotal"),
           py::arg("Vtotal"),
           py::arg("Hdisplay"),
           py::arg("Vdisplay"),
           D(framing,make)
        )
        




        
        .def("set_Htotal_and_Vtotal",&framing::set_Htotal_and_Vtotal,       
            py::arg("Htotal"),
            py::arg("Vtotal"),
            D(framing,set_Htotal_and_Vtotal)
        )

        ;




}








