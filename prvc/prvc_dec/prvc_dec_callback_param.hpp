/*
 * Copyright 2018 Yamana Laboratory, Waseda University
 * Supported by JST CREST Grant Number JPMJCR1503, Japan.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE‐2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef PRVC_DEC_CALLBACK_PARAM_HPP
#define PRVC_DEC_CALLBACK_PARAM_HPP

#include <memory>
#include <vector>
#include <prvc_share/prvc_decparam.hpp>
#include <prvc_dec/prvc_dec_result.hpp>

namespace prvc_share
{
    class SecureKeyFileManager;
    class Context;
}

namespace prvc_dec
{

/**
 * @brief This class is used to hold the callback parameters for Decryptor.
 */
struct CallbackParam
{
    CallbackParam(void);
    ~CallbackParam(void) = default;

    std::shared_ptr<prvc_share::SecureKeyFileManager> skm_ptr;
    std::shared_ptr<prvc_share::Context> context_ptr;
    prvc_share::DecParam param;
};

/**
 * @brief This class is used to hold the callback parameters for Decryptor
 * This parameter to shared on all connections.
 */
struct CommonCallbackParam
{
    std::vector<DecResult> vresult;
};

} /* namespace prvc_dec */

#endif /* PRVC_DEC_CALLBACK_PARAM_HPP */
