/*
 * Copyright (C) 2010 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <SLES/OpenSLES.h>

char __aeabi_unwind_cpp_pr0[0]; //** kis: This prevents C++ exception run-time being linked to this pure C code
char __aeabi_unwind_cpp_pr1[0]; //** kis: This prevents C++ exception run-time being linked to this pure C code
char __aeabi_unwind_cpp_pr2[0]; //** kis: This prevents C++ exception run-time being linked to this pure C code

/** \brief slCreateEngine Function */

SL_API SLresult SLAPIENTRY slCreateEngine(SLObjectItf *pEngine, SLuint32 numOptions,
    const SLEngineOption *pEngineOptions, SLuint32 numInterfaces,
    const SLInterfaceID *pInterfaceIds, const SLboolean *pInterfaceRequired)
{
    return SL_RESULT_PARAMETER_INVALID;
}

/** \brief slQueryNumSupportedEngineInterfaces Function */

SL_API SLresult SLAPIENTRY slQueryNumSupportedEngineInterfaces(SLuint32 *pNumSupportedInterfaces)
{
    return SL_RESULT_PARAMETER_INVALID;
}

/** \brief slQuerySupportedEngineInterfaces Function */

SL_API SLresult SLAPIENTRY slQuerySupportedEngineInterfaces(SLuint32 index,
        SLInterfaceID *pInterfaceId)
{
    return SL_RESULT_PARAMETER_INVALID;
}
