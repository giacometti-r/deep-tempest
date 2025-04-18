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
/* BINDTOOL_HEADER_FILE(frame_drop.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(c6809a99a303e92d6d68228d053431c1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <tempest/frame_drop.h>
// pydoc.h is automatically generated in the build directory
#include <frame_drop_pydoc.h>

void bind_frame_drop(py::module& m)
{

    using frame_drop    = ::gr::tempest::frame_drop;


    py::class_<frame_drop, gr::block, gr::basic_block,
        std::shared_ptr<frame_drop>>(m, "frame_drop", D(frame_drop))

        .def(py::init(&frame_drop::make),
           py::arg("Htotal"),
           py::arg("Vtotal"),
           py::arg("correct_sampling"),
           py::arg("max_deviation"),
           py::arg("update_proba"),
           py::arg("actual_samp_rate"),
           D(frame_drop,make)
        )
        



        ;




}








