#include "tg_leaf_params.hpp"
using namespace godot;

void TG_LeafParams::_bind_methods()
{
    ClassDB::bind_method( D_METHOD( "getMaterialIndex" ), &TG_LeafParams::getMaterialIndex );
    ClassDB::bind_method( D_METHOD( "setMaterialIndex", "idx" ), &TG_LeafParams::setMaterialIndex );
    ADD_PROPERTY(PropertyInfo( Variant::INT, "material_index" ), "setMaterialIndex", "getMaterialIndex" );

    ClassDB::bind_method( D_METHOD( "getScale" ), &TG_LeafParams::getScale );
    ClassDB::bind_method( D_METHOD( "setScale", "scale" ), &TG_LeafParams::setScale );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "scale" ), "setScale", "getScale" );

    ClassDB::bind_method( D_METHOD( "getScaleJitter" ), &TG_LeafParams::getScaleJitter );
    ClassDB::bind_method( D_METHOD( "setScaleJitter", "idx" ), &TG_LeafParams::setScaleJitter );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "scale_jitter" ), "setScaleJitter", "getScaleJitter" );

    /*
    godot::register_property("material_index", &TG_LeafParams::material_index, 0);
    godot::register_property("scale", &TG_LeafParams::scale, 1.f);
    godot::register_property("scale_jitter", &TG_LeafParams::scale_jitter, 0.f);
     */

    // godot::register_property("mesh", &TG_LeafParams::mesh, godot::Ref<godot::Mesh>(), GODOT_METHOD_RPC_MODE_DISABLED,  GODOT_PROPERTY_USAGE_DEFAULT, GODOT_PROPERTY_HINT_RESOURCE_TYPE, "Mesh");
}
TG_LeafParams::TG_LeafParams()
{
}
TG_LeafParams::~TG_LeafParams()
{
}
int TG_LeafParams::getMaterialIndex() const
{
    return material_index;
}
void TG_LeafParams::setMaterialIndex( int materialIndex )
{
    material_index = materialIndex;
}
float TG_LeafParams::getScale() const
{
    return scale;
}
void TG_LeafParams::setScale( float sc )
{
    TG_LeafParams::scale = sc;
}
float TG_LeafParams::getScaleJitter() const
{
    return scale_jitter;
}
void TG_LeafParams::setScaleJitter( float scaleJitter )
{
    scale_jitter = scaleJitter;
}
