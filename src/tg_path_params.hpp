#ifndef TG_PATH_PARAMS_H
#define TG_PATH_PARAMS_H

/*#include <gen/Curve.hpp>
#include <gen/Reference.hpp>*/
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/ref_counted.hpp>

using namespace godot;

class TG_PathParams : public RefCounted
{
    GDCLASS( TG_PathParams, RefCounted )
public:
    TG_PathParams();
    ~TG_PathParams() override;
    float getLength() const;
    void setLength( float length );
    float getLengthRandomness() const;
    void setLengthRandomness( float lengthRandomness );
    float getMinRadius() const;
    void setMinRadius( float minRadius );
    float getMaxRadius() const;
    void setMaxRadius( float maxRadius );
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
    const Vector2 &getUvScale() const;
    void setUvScale( const Vector2 &uvScale );
    const Ref<Curve> &getLengthCurveAlongParent() const;
    void setLengthCurveAlongParent( const Ref<Curve> &lengthCurveAlongParent );
    const Ref<Curve> &getRadiusCurve() const;
    void setRadiusCurve( const Ref<Curve> &radiusCurve );
    const Ref<Curve> &getRadiusCurveAlongParent() const;
    void setRadiusCurveAlongParent( const Ref<Curve> &radiusCurveAlongParent );

protected:
    static void _bind_methods();

private:
    // Base length of the branch in space units
    float length;
    // Modulates the length depending on where the branch spawns on the parent.
    Ref<Curve> length_curve_along_parent;
    float length_randomness;

    // Radius at the beginning at the branch
    float min_radius;
    // Radius at the end of the branch
    float max_radius;
    // How radius progresses between its start and end value.
    Ref<Curve> radius_curve;
    // Modulates the radii depending on where the branch spawns on the parent
    Ref<Curve> radius_curve_along_parent;

    // Distort the path. Acts as modifier.
    float noise_period;
    int noise_octaves;
    float noise_amplitude;
    // Modulates noise amplitude along path.
    // This is calculated as `pow(offset / length, noise_curve)`
    float noise_curve;

    // User-defined curve for the branch.
    // If set, will serve as a base for positional data.
    // Modifiers will still apply on top of it.
    // var authored_curve : Curve

    bool end_cap_flat;

    // Modifier to the growth angle to make the branch tend upward.
    // Negative values makes branches tend downward.
    float seek_sun;

    int main_material_index;
    int cap_material_index;
    Vector2 uv_scale;

    Ref<Curve> _b_getLengthCurveAlongParent() const;
    Ref<Curve> _b_getRadiusCurve() const;

};

#endif // TG_PATH_PARAMS_H
