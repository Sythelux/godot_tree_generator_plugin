#ifndef TG_PATH_PARAMS_H
#define TG_PATH_PARAMS_H

/*#include <gen/Curve.hpp>
#include <gen/Reference.hpp>*/
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

class TG_PathParams : public godot::RefCounted
{
    GDCLASS( TG_PathParams, RefCounted )
public:
    TG_PathParams();
    ~TG_PathParams() override;
    float getLength() const;
    void setLength( float length );
    const godot::Ref<godot::Curve> &getLengthCurveAlongParent() const;
    void setLengthCurveAlongParent( const godot::Ref<godot::Curve> &lengthCurveAlongParent );
    float getLengthRandomness() const;
    void setLengthRandomness( float lengthRandomness );
    float getMinRadius() const;
    void setMinRadius( float minRadius );
    float getMaxRadius() const;
    void setMaxRadius( float maxRadius );
    const godot::Ref<godot::Curve> &getRadiusCurve() const;
    void setRadiusCurve( const godot::Ref<godot::Curve> &radiusCurve );
    const godot::Ref<godot::Curve> &getRadiusCurveAlongParent() const;
    void setRadiusCurveAlongParent( const godot::Ref<godot::Curve> &radiusCurveAlongParent );
    float getNoisePeriod() const;
    void setNoisePeriod( float noisePeriod );
    int getNoiseOctaves() const;
    void setNoiseOctaves( int noiseOctaves );
    float getNoiseAmplitude() const;
    void setNoiseAmplitude( float noiseAmplitude );
    float getNoiseCurve() const;
    void setNoiseCurve( float noiseCurve );
    bool isEndCapFlat() const;
    void setEndCapFlat( bool endCapFlat );
    float getSeekSun() const;
    void setSeekSun( float seekSun );
    int getMainMaterialIndex() const;
    void setMainMaterialIndex( int mainMaterialIndex );
    int getCapMaterialIndex() const;
    void setCapMaterialIndex( int capMaterialIndex );
    const godot::Vector2 &getUvScale() const;
    void setUvScale( const godot::Vector2 &uvScale );

protected:
    static void _bind_methods();

private:
    // Base length of the branch in space units
    float length = 15.f;
    // Modulates the length depending on where the branch spawns on the parent.
    godot::Ref<godot::Curve> length_curve_along_parent;
    float length_randomness = 0.f;

    // Radius at the beginning at the branch
    float min_radius = 0.3f;
    // Radius at the end of the branch
    float max_radius = 1.0f;
    // How radius progresses between its start and end value.
    godot::Ref<godot::Curve> radius_curve;
    // Modulates the radii depending on where the branch spawns on the parent
    godot::Ref<godot::Curve> radius_curve_along_parent;

    // Distort the path. Acts as modifier.
    float noise_period = 16.f;
    int noise_octaves = 3;
    float noise_amplitude = 0.f;
    // Modulates noise amplitude along path.
    // This is calculated as `pow(offset / length, noise_curve)`
    float noise_curve = 1.f;

    // User-defined curve for the branch.
    // If set, will serve as a base for positional data.
    // Modifiers will still apply on top of it.
    // var authored_curve : Curve

    bool end_cap_flat = true;

    // Modifier to the growth angle to make the branch tend upward.
    // Negative values makes branches tend downward.
    float seek_sun = 0.f;

    int main_material_index = 0;
    int cap_material_index = 0;
    godot::Vector2 uv_scale;
};

#endif // TG_PATH_PARAMS_H
