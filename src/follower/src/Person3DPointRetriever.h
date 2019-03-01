/******************************************************************************
 *                                                                            *
 * Copyright (C) 2019 Fondazione Istituto Italiano di Tecnologia (IIT)        *
 * All Rights Reserved.                                                       *
 *                                                                            *
 ******************************************************************************/
/**
 * @file Person3DPointRetriver.h
 * @authors: Valentina Gaggero <valentina.gaggero@iit.it>
 */
#ifndef PERSON3DPOINTRESTRIVER_H
#define PERSON3DPOINTRESTRIVER_H

#include "TargetRetriever.h"

#include "AssistiveRehab/skeleton.h"

namespace FollowerTarget
{
    class Person3DPointRetriever : public TargetRetriever
    {
    public:
        Target_t getTarget(void);
    private:
        assistive_rehab::SkeletonWaist m_sk_target;
    };
}

#endif

