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
    static const GDExtensionInstanceBindingCallbacks &getGdeBindingCallbacks();
    int getAlongBaseAmount() const;
    void setAlongBaseAmount( int alongBaseAmount );
    float getAlongAmountPerUnit() const;
    void setAlongAmountPerUnit( float alongAmountPerUnit );
    float getAlongBeginRatio() const;
    void setAlongBeginRatio( float alongBeginRatio );
    float getAlongEndRatio() const;
    void setAlongEndRatio( float alongEndRatio );
    float getAlongJitter() const;
    void setAlongJitter( float alongJitter );
    float getSkipProbability() const;
    void setSkipProbability( float skipProbability );
    int getAroundAmount() const;
    void setAroundAmount( int aroundAmount );
    float getAroundJitter() const;
    void setAroundJitter( float aroundJitter );
    float getAroundOffset() const;
    void setAroundOffset( float aroundOffset );
    float getVerticalAngle() const;
    void setVerticalAngle( float verticalAngle );
    float getVerticalAngleJitter() const;
    void setVerticalAngleJitter( float verticalAngleJitter );

protected:
    static void _bind_methods();

private:
    // Base amount to spawn
    int along_base_amount;
    // How many to add per space unit
    float along_amount_per_unit;
    // From where to start spawning along the parent
    float along_begin_ratio;
    // From where to stop spawning along the parent
    float along_end_ratio;
    // Spawn randomness along parent
    float along_jitter;
    // Skip chance
    float skip_probability;

    // At how many angles to spawn around the parent
    int around_amount;
    // Randomness of the angle at which to spawn around the parent
    float around_jitter;
    // Angular offset from which the spawn angles are chosen
    float around_offset;

    // Vertical angle at which to orientate relative to the parent
    float vertical_angle;
    // Randomness added to the angle
    float vertical_angle_jitter;
};

#endif // TG_SPAWN_PARAMS_H
