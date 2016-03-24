#pragma once

#include <SOP/SOP_API.h>
#include <SOP/SOP_Node.h>

class SOP_API SOP_VoxelCenterPoints : public SOP_Node
{
    public:

        static OP_Node* myConstructor(OP_Network* network, const char* name, OP_Operator* op);

        static PRM_Template myTemplateList[];

    protected:

        SOP_VoxelCenterPoints(OP_Network* network, const char* name, OP_Operator* op);
        virtual ~SOP_VoxelCenterPoints();

    protected:

        virtual const char* inputLabel(unsigned int idx) const;
        virtual OP_ERROR cookMySop(OP_Context& context);
};