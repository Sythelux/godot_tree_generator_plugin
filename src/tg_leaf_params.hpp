#ifndef TG_LEAF_PARAMS_H
#define TG_LEAF_PARAMS_H
#include "godot_cpp/classes/control.hpp"
#include "godot_cpp/classes/global_constants.hpp"
#include "godot_cpp/classes/viewport.hpp"
#include "godot_cpp/core/binder_common.hpp"
class TG_LeafParams : public godot::RefCounted
{
    GDCLASS( TG_LeafParams, RefCounted )
public:
    TG_LeafParams();
    ~TG_LeafParams() override;

    int getMaterialIndex() const;
    void setMaterialIndex( int materialIndex );
    float getScale() const;
    void setScale( float scale );
    float getScaleJitter() const;
    void setScaleJitter( float scaleJitter );

protected:
    static void _bind_methods();
    // godot::Ref<godot::Mesh> mesh;
private:
    int material_index = 0;
    float scale = 1.f;
    float scale_jitter = 0.f;
};

#endif // TG_LEAF_PARAMS_H
