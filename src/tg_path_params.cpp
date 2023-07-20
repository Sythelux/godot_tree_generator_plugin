
#include "tg_path_params.hpp"

using namespace godot;

TG_PathParams::TG_PathParams()
{
    uv_scale = Vector2( 1.f, 1.f );
}
TG_PathParams::~TG_PathParams()
{
}
void TG_PathParams::_bind_methods()
{
    //TODO: please please please tell me someone, when there is a better way for this. I can't believe there is no code generator for bindings
    ClassDB::bind_method( D_METHOD( "get_length" ), &TG_PathParams::getLength );
    ClassDB::bind_method( D_METHOD( "set_length", "length" ), &TG_PathParams::setLength );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "length" ), "set_length", "get_length" );

    //    ClassDB::bind_method(D_METHOD("get_length_curve_along_parent"), &TG_PathParams::getLengthCurveAlongParent);
    //    ClassDB::bind_method(D_METHOD("set_length_curve_along_parent", "length"), &TG_PathParams::setLengthCurveAlongParent);
    ADD_PROPERTY( PropertyInfo( Variant::INT, "length" ), "set_length_curve_along_parent", "get_length_curve_along_parent" );

    ClassDB::bind_method( D_METHOD( "getLengthRandomness" ), &TG_PathParams::getLengthRandomness );
    ClassDB::bind_method( D_METHOD( "setLengthRandomness", "length" ), &TG_PathParams::setLengthRandomness );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "length_randomness" ), "setLengthRandomness", "getLengthRandomness" );

    ClassDB::bind_method( D_METHOD( "getMinRadius" ), &TG_PathParams::getMinRadius );
    ClassDB::bind_method( D_METHOD( "setMinRadius", "rad" ), &TG_PathParams::setMinRadius );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "min_radius" ), "setMinRadius", "getMinRadius" );

    ClassDB::bind_method( D_METHOD( "getMaxRadius" ), &TG_PathParams::getMaxRadius );
    ClassDB::bind_method( D_METHOD( "setMaxRadius", "rad" ), &TG_PathParams::setMaxRadius );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "max_radius" ), "setMaxRadius", "getMaxRadius" );

    //    ClassDB::bind_method(D_METHOD("getRadiusCurve"), &TG_PathParams::getRadiusCurve);
    //    ClassDB::bind_method(D_METHOD("setRadiusCurve", "p_speed"), &TG_PathParams::setRadiusCurve);
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "radius_curve" ), "setRadiusCurve", "getRadiusCurve" );

    //    ClassDB::bind_method(D_METHOD("getMaxRadius"), &TG_PathParams::getMaxRadius);
    //    ClassDB::bind_method(D_METHOD("setMaxRadius", "rad"), &TG_PathParams::setMaxRadius);
    //    ClassDB::add_property("TG_PathParams", PropertyInfo(Variant::FLOAT, "radius_curve_along_parent"), "setMaxRadius", "getMaxRadius");

    ClassDB::bind_method( D_METHOD( "getNoisePeriod" ), &TG_PathParams::getNoisePeriod );
    ClassDB::bind_method( D_METHOD( "setNoisePeriod", "per" ), &TG_PathParams::setNoisePeriod );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "noise_period" ), "setNoisePeriod", "getNoisePeriod" );

    ClassDB::bind_method( D_METHOD( "getNoiseOctaves" ), &TG_PathParams::getNoiseOctaves );
    ClassDB::bind_method( D_METHOD( "setNoiseOctaves", "oct" ), &TG_PathParams::setNoiseOctaves );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "noise_octaves" ), "setNoiseOctaves", "getNoiseOctaves" );

    ClassDB::bind_method( D_METHOD( "getNoiseAmplitude" ), &TG_PathParams::getNoiseAmplitude );
    ClassDB::bind_method( D_METHOD( "setNoiseAmplitude", "amp" ), &TG_PathParams::setNoiseAmplitude );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "noise_amplitude" ), "setNoiseAmplitude", "getNoiseAmplitude" );

    ClassDB::bind_method( D_METHOD( "getNoiseCurve" ), &TG_PathParams::getNoiseCurve );
    ClassDB::bind_method( D_METHOD( "setNoiseOctaves", "cur" ), &TG_PathParams::setNoiseOctaves );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "noise_curve" ), "setNoiseOctaves", "getNoiseCurve" );

    ClassDB::bind_method( D_METHOD( "isEndCapFlat" ), &TG_PathParams::isEndCapFlat );
    ClassDB::bind_method( D_METHOD( "setEndCapFlat", "cap" ), &TG_PathParams::setEndCapFlat );
    ADD_PROPERTY( PropertyInfo( Variant::BOOL, "end_cap_flat" ), "setEndCapFlat", "isEndCapFlat" );

    ClassDB::bind_method( D_METHOD( "getSeekSun" ), &TG_PathParams::getSeekSun );
    ClassDB::bind_method( D_METHOD( "setSeekSun", "sun" ), &TG_PathParams::setSeekSun );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "seek_sun" ), "setSeekSun", "getSeekSun" );

    ClassDB::bind_method( D_METHOD( "getMainMaterialIndex" ), &TG_PathParams::getMainMaterialIndex );
    ClassDB::bind_method( D_METHOD( "setMainMaterialIndex", "idx" ), &TG_PathParams::setMainMaterialIndex );
    ADD_PROPERTY( PropertyInfo( Variant::INT, "main_material_index" ), "setMainMaterialIndex", "getMainMaterialIndex" );

    ClassDB::bind_method( D_METHOD( "getCapMaterialIndex" ), &TG_PathParams::getCapMaterialIndex );
    ClassDB::bind_method( D_METHOD( "setCapMaterialIndex", "cap" ), &TG_PathParams::setCapMaterialIndex );
    ADD_PROPERTY( PropertyInfo( Variant::INT, "cap_material_index" ), "setCapMaterialIndex", "getCapMaterialIndex" );

    ClassDB::bind_method( D_METHOD( "getUvScale" ), &TG_PathParams::getUvScale );
    ClassDB::bind_method( D_METHOD( "setUvScale", "cap" ), &TG_PathParams::setUvScale );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "uv_scale" ), "setUvScale", "getUvScale" );

    /*register_property( "length", &TG_PathParams::length, 15.f );

    // TODO The class name could be automatically determined, but it's not!
    // It uses the default value, because get_class() is an instance method, but the default
    // value is null...
    register_property(
        "length_curve_along_parent", &TG_PathParams::length_curve_along_parent,
        Ref<Curve>(), GODOT_METHOD_RPC_MODE_DISABLED,
        GODOT_PROPERTY_USAGE_DEFAULT, GODOT_PROPERTY_HINT_RESOURCE_TYPE, "Curve" );

    register_property( "length_randomness", &TG_PathParams::length_randomness, 0.f );
    register_property( "min_radius", &TG_PathParams::min_radius, 0.3f );
    register_property( "max_radius", &TG_PathParams::max_radius, 1.0f );

    register_property( "radius_curve", &TG_PathParams::radius_curve,
                              Ref<Curve>(), GODOT_METHOD_RPC_MODE_DISABLED,
                              GODOT_PROPERTY_USAGE_DEFAULT, GODOT_PROPERTY_HINT_RESOURCE_TYPE,
                              "Curve" );

    register_property(
        "radius_curve_along_parent", &TG_PathParams::radius_curve_along_parent,
        Ref<Curve>(), GODOT_METHOD_RPC_MODE_DISABLED,
        GODOT_PROPERTY_USAGE_DEFAULT, GODOT_PROPERTY_HINT_RESOURCE_TYPE, "Curve" );

    register_property( "noise_period", &TG_PathParams::noise_period, 16.f );
    register_property( "noise_octaves", &TG_PathParams::noise_octaves, 3 );
    register_property( "noise_amplitude", &TG_PathParams::noise_amplitude, 0.f );
    register_property( "noise_curve", &TG_PathParams::noise_curve, 1.f );

    register_property( "end_cap_flat", &TG_PathParams::end_cap_flat, true );

    register_property( "seek_sun", &TG_PathParams::seek_sun, 0.f );

    register_property( "main_material_index", &TG_PathParams::main_material_index, 0 );
    register_property( "cap_material_index", &TG_PathParams::cap_material_index, 0 );
    register_property( "uv_scale", &TG_PathParams::uv_scale,
                              Vector2( 1.f, 1.f ) );*/
}
float TG_PathParams::getLength() const
{
    return length;
}
void TG_PathParams::setLength( float len )
{
    TG_PathParams::length = len;
}
const Ref<Curve> &TG_PathParams::getLengthCurveAlongParent() const
{
    return length_curve_along_parent;
}
void TG_PathParams::setLengthCurveAlongParent( const Ref<Curve> &lengthCurveAlongParent )
{
    length_curve_along_parent = lengthCurveAlongParent;
}
float TG_PathParams::getLengthRandomness() const
{
    return length_randomness;
}
void TG_PathParams::setLengthRandomness( float lengthRandomness )
{
    length_randomness = lengthRandomness;
}
float TG_PathParams::getMinRadius() const
{
    return min_radius;
}
void TG_PathParams::setMinRadius( float minRadius )
{
    min_radius = minRadius;
}
float TG_PathParams::getMaxRadius() const
{
    return max_radius;
}
void TG_PathParams::setMaxRadius( float maxRadius )
{
    max_radius = maxRadius;
}
const Ref<Curve> &TG_PathParams::getRadiusCurve() const
{
    return radius_curve;
}
void TG_PathParams::setRadiusCurve( const Ref<Curve> &radiusCurve )
{
    radius_curve = radiusCurve;
}
const Ref<Curve> &TG_PathParams::getRadiusCurveAlongParent() const
{
    return radius_curve_along_parent;
}
void TG_PathParams::setRadiusCurveAlongParent( const Ref<Curve> &radiusCurveAlongParent )
{
    radius_curve_along_parent = radiusCurveAlongParent;
}
float TG_PathParams::getNoisePeriod() const
{
    return noise_period;
}
void TG_PathParams::setNoisePeriod( float noisePeriod )
{
    noise_period = noisePeriod;
}
int TG_PathParams::getNoiseOctaves() const
{
    return noise_octaves;
}
void TG_PathParams::setNoiseOctaves( int noiseOctaves )
{
    noise_octaves = noiseOctaves;
}
float TG_PathParams::getNoiseAmplitude() const
{
    return noise_amplitude;
}
void TG_PathParams::setNoiseAmplitude( float noiseAmplitude )
{
    noise_amplitude = noiseAmplitude;
}
float TG_PathParams::getNoiseCurve() const
{
    return noise_curve;
}
void TG_PathParams::setNoiseCurve( float noiseCurve )
{
    noise_curve = noiseCurve;
}
bool TG_PathParams::isEndCapFlat() const
{
    return end_cap_flat;
}
void TG_PathParams::setEndCapFlat( bool endCapFlat )
{
    end_cap_flat = endCapFlat;
}
float TG_PathParams::getSeekSun() const
{
    return seek_sun;
}
void TG_PathParams::setSeekSun( float seekSun )
{
    seek_sun = seekSun;
}
int TG_PathParams::getMainMaterialIndex() const
{
    return main_material_index;
}
void TG_PathParams::setMainMaterialIndex( int mainMaterialIndex )
{
    main_material_index = mainMaterialIndex;
}
int TG_PathParams::getCapMaterialIndex() const
{
    return cap_material_index;
}
void TG_PathParams::setCapMaterialIndex( int capMaterialIndex )
{
    cap_material_index = capMaterialIndex;
}
const Vector2 &TG_PathParams::getUvScale() const
{
    return uv_scale;
}
void TG_PathParams::setUvScale( const Vector2 &uvScale )
{
    uv_scale = uvScale;
}
