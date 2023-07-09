#ifndef TG_SPAWN_PARAMS_H
#define TG_SPAWN_PARAMS_H

#include "godot_cpp/classes/control.hpp"
#include "godot_cpp/classes/global_constants.hpp"
#include "godot_cpp/classes/viewport.hpp"
#include "godot_cpp/core/binder_common.hpp"

class TG_SpawnParams : public godot::RefCounted
{
    GDCLASS( TG_SpawnParams, godot::RefCounted )
public:
    TG_SpawnParams();
    ~TG_SpawnParams() override;

    // Base amount to spawn
    int along_base_amount = 10;
    // How many to add per space unit
    float along_amount_per_unit = 0.f;
    // From where to start spawning along the parent
    float along_begin_ratio = 0.f;
    // From where to stop spawning along the parent
    float along_end_ratio = 1.f;
    // Spawn randomness along parent
    float along_jitter = 0.f;
    // Skip chance
    float skip_probability = 0.f;

    // At how many angles to spawn around the parent
    int around_amount = 3;
    // Randomness of the angle at which to spawn around the parent
    float around_jitter = 0.75f;
    // Angular offset from which the spawn angles are chosen
    float around_offset = 0.f;

    // Vertical angle at which to orientate relative to the parent
    float vertical_angle = static_cast<float>( Math_PI ) / 3.f;
    // Randomness added to the angle
    float vertical_angle_jitter = 0.f;

protected:
    static void _bind_methods();
};

#endif // TG_SPAWN_PARAMS_H
