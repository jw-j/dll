//=======================================================================
// Copyright (c) 2014-2016 Baptiste Wicht
// Distributed under the terms of the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#pragma once

#include "pooling_layer_desc.hpp"

namespace dll {

template <typename... Parameters>
struct dyn_avgp_layer_3d_desc : dyn_pooling_layer_3d_desc<Parameters...> {
    using parameters = cpp::type_list<Parameters...>;

    /*! The layer type */
    using layer_t = dyn_avgp_layer_3d<dyn_avgp_layer_3d_desc<Parameters...>>;
};

} //end of dll namespace