
#include "tg_path_params.hpp"
TG_PathParams::TG_PathParams()
{
    uv_scale = godot::Vector2( 1.f, 1.f );
}
TG_PathParams::~TG_PathParams()
{
}
void TG_PathParams::_bind_methods()
{
    /*godot::register_property( "length", &TG_PathParams::length, 15.f );

    // TODO The class name could be automatically determined, but it's not!
    // It uses the default value, because get_class() is an instance method, but the default
    // value is null...
    godot::register_property(
        "length_curve_along_parent", &TG_PathParams::length_curve_along_parent,
        godot::Ref<godot::Curve>(), GODOT_METHOD_RPC_MODE_DISABLED,
        GODOT_PROPERTY_USAGE_DEFAULT, GODOT_PROPERTY_HINT_RESOURCE_TYPE, "Curve" );

    godot::register_property( "length_randomness", &TG_PathParams::length_randomness, 0.f );
    godot::register_property( "min_radius", &TG_PathParams::min_radius, 0.3f );
    godot::register_property( "max_radius", &TG_PathParams::max_radius, 1.0f );

    godot::register_property( "radius_curve", &TG_PathParams::radius_curve,
                              godot::Ref<godot::Curve>(), GODOT_METHOD_RPC_MODE_DISABLED,
                              GODOT_PROPERTY_USAGE_DEFAULT, GODOT_PROPERTY_HINT_RESOURCE_TYPE,
                              "Curve" );

    godot::register_property(
        "radius_curve_along_parent", &TG_PathParams::radius_curve_along_parent,
        godot::Ref<godot::Curve>(), GODOT_METHOD_RPC_MODE_DISABLED,
        GODOT_PROPERTY_USAGE_DEFAULT, GODOT_PROPERTY_HINT_RESOURCE_TYPE, "Curve" );

    godot::register_property( "noise_period", &TG_PathParams::noise_period, 16.f );
    godot::register_property( "noise_octaves", &TG_PathParams::noise_octaves, 3 );
    godot::register_property( "noise_amplitude", &TG_PathParams::noise_amplitude, 0.f );
    godot::register_property( "noise_curve", &TG_PathParams::noise_curve, 1.f );

    godot::register_property( "end_cap_flat", &TG_PathParams::end_cap_flat, true );

    godot::register_property( "seek_sun", &TG_PathParams::seek_sun, 0.f );

    godot::register_property( "main_material_index", &TG_PathParams::main_material_index, 0 );
    godot::register_property( "cap_material_index", &TG_PathParams::cap_material_index, 0 );
    godot::register_property( "uv_scale", &TG_PathParams::uv_scale,
                              godot::Vector2( 1.f, 1.f ) );*/
}