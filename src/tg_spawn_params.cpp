
#include "tg_spawn_params.hpp"

using namespace godot;

TG_SpawnParams::TG_SpawnParams()
{
    along_base_amount = 10;
    along_amount_per_unit = 0.f;
    along_begin_ratio = 0.f;
    along_end_ratio = 1.f;
    along_jitter = 0.f;
    skip_probability = 0.f;
    around_amount = 3;
    around_jitter = 0.75f;
    around_offset = 0.f;
    vertical_angle = static_cast<float>( Math_PI ) / 3.f;
    vertical_angle_jitter = 0.f;
}
TG_SpawnParams::~TG_SpawnParams()
{
}

int TG_SpawnParams::getAlongBaseAmount() const
{
    return along_base_amount;
}
void TG_SpawnParams::setAlongBaseAmount( int alongBaseAmount )
{
    along_base_amount = alongBaseAmount;
}
float TG_SpawnParams::getAlongAmountPerUnit() const
{
    return along_amount_per_unit;
}
void TG_SpawnParams::setAlongAmountPerUnit( float alongAmountPerUnit )
{
    along_amount_per_unit = alongAmountPerUnit;
}
float TG_SpawnParams::getAlongBeginRatio() const
{
    return along_begin_ratio;
}
void TG_SpawnParams::setAlongBeginRatio( float alongBeginRatio )
{
    along_begin_ratio = alongBeginRatio;
}
float TG_SpawnParams::getAlongEndRatio() const
{
    return along_end_ratio;
}
void TG_SpawnParams::setAlongEndRatio( float alongEndRatio )
{
    along_end_ratio = alongEndRatio;
}
float TG_SpawnParams::getAlongJitter() const
{
    return along_jitter;
}
void TG_SpawnParams::setAlongJitter( float alongJitter )
{
    along_jitter = alongJitter;
}
float TG_SpawnParams::getSkipProbability() const
{
    return skip_probability;
}
void TG_SpawnParams::setSkipProbability( float skipProbability )
{
    skip_probability = skipProbability;
}
int TG_SpawnParams::getAroundAmount() const
{
    return around_amount;
}
void TG_SpawnParams::setAroundAmount( int aroundAmount )
{
    around_amount = aroundAmount;
}
float TG_SpawnParams::getAroundJitter() const
{
    return around_jitter;
}
void TG_SpawnParams::setAroundJitter( float aroundJitter )
{
    around_jitter = aroundJitter;
}
float TG_SpawnParams::getAroundOffset() const
{
    return around_offset;
}
void TG_SpawnParams::setAroundOffset( float aroundOffset )
{
    around_offset = aroundOffset;
}
float TG_SpawnParams::getVerticalAngle() const
{
    return vertical_angle;
}
void TG_SpawnParams::setVerticalAngle( float verticalAngle )
{
    vertical_angle = verticalAngle;
}
float TG_SpawnParams::getVerticalAngleJitter() const
{
    return vertical_angle_jitter;
}
void TG_SpawnParams::setVerticalAngleJitter( float verticalAngleJitter )
{
    vertical_angle_jitter = verticalAngleJitter;
}
void TG_SpawnParams::_bind_methods()
{
    ClassDB::bind_method( D_METHOD( "getAlongBaseAmount" ), &TG_SpawnParams::getAlongBaseAmount );
    ClassDB::bind_method( D_METHOD( "setAlongBaseAmount", "alongBaseAmount" ), &TG_SpawnParams::setAlongBaseAmount );
    ADD_PROPERTY( PropertyInfo( Variant::INT, "along_base_amount" ), "setAlongBaseAmount", "getAlongBaseAmount" );

    ClassDB::bind_method( D_METHOD( "getAlongAmountPerUnit" ), &TG_SpawnParams::getAlongAmountPerUnit );
    ClassDB::bind_method( D_METHOD( "setAlongAmountPerUnit", "alongAmountPerUnit" ), &TG_SpawnParams::setAlongAmountPerUnit );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "along_amount_per_unit" ), "setAlongAmountPerUnit", "getAlongAmountPerUnit" );

    ClassDB::bind_method( D_METHOD( "getAlongBeginRatio" ), &TG_SpawnParams::getAlongBeginRatio );
    ClassDB::bind_method( D_METHOD( "setAlongBeginRatio", "alongBeginRatio" ), &TG_SpawnParams::setAlongBeginRatio );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "along_begin_ratio" ), "setAlongBeginRatio", "getAlongBeginRatio" );

    ClassDB::bind_method( D_METHOD( "getAlongEndRatio" ), &TG_SpawnParams::getAlongEndRatio );
    ClassDB::bind_method( D_METHOD( "setAlongEndRatio", "alongEndRatio" ), &TG_SpawnParams::setAlongEndRatio );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "along_end_ratio" ), "setAlongEndRatio", "getAlongEndRatio" );

    ClassDB::bind_method( D_METHOD( "getAlongJitter" ), &TG_SpawnParams::getAlongJitter );
    ClassDB::bind_method( D_METHOD( "setAlongJitter", "alongJitter" ), &TG_SpawnParams::setAlongJitter );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "along_jitter" ), "setAlongJitter", "getAlongJitter" );

    ClassDB::bind_method( D_METHOD( "getSkipProbability" ), &TG_SpawnParams::getSkipProbability );
    ClassDB::bind_method( D_METHOD( "setSkipProbability", "skipProbability" ), &TG_SpawnParams::setSkipProbability );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "skip_probability" ), "setSkipProbability", "getSkipProbability" );

    ClassDB::bind_method( D_METHOD( "getAroundAmount" ), &TG_SpawnParams::getAroundAmount );
    ClassDB::bind_method( D_METHOD( "setAroundAmount", "aroundAmount" ), &TG_SpawnParams::setAroundAmount );
    ADD_PROPERTY( PropertyInfo( Variant::INT, "around_amount" ), "setAroundAmount", "getAroundAmount" );

    ClassDB::bind_method( D_METHOD( "getAroundJitter" ), &TG_SpawnParams::getAroundJitter );
    ClassDB::bind_method( D_METHOD( "setAroundJitter", "aroundJitter" ), &TG_SpawnParams::setAroundJitter );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "around_jitter" ), "setAroundJitter", "getAroundJitter" );

    ClassDB::bind_method( D_METHOD( "getAroundOffset" ), &TG_SpawnParams::getAroundOffset );
    ClassDB::bind_method( D_METHOD( "setAroundOffset", "aroundOffset" ), &TG_SpawnParams::setAroundOffset );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "around_offset" ), "setAroundOffset", "getAroundOffset" );

    ClassDB::bind_method( D_METHOD( "getVerticalAngle" ), &TG_SpawnParams::getVerticalAngle );
    ClassDB::bind_method( D_METHOD( "setVerticalAngle", "verticalAngle" ), &TG_SpawnParams::setVerticalAngle );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "vertical_angle" ), "setVerticalAngle", "getVerticalAngle" );

    ClassDB::bind_method( D_METHOD( "getVerticalAngleJitter" ), &TG_SpawnParams::getVerticalAngleJitter );
    ClassDB::bind_method( D_METHOD( "setVerticalAngleJitter", "verticalAngleJitter" ), &TG_SpawnParams::setVerticalAngleJitter );
    ADD_PROPERTY( PropertyInfo( Variant::FLOAT, "vertical_angle_jitter" ), "setVerticalAngleJitter", "getVerticalAngleJitter" );
}