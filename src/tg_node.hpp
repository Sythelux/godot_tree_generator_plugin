#ifndef TG_NODE_H
#define TG_NODE_H

#include "tg_leaf_params.hpp"
#include "tg_path_params.hpp"
#include "tg_spawn_params.hpp"

#include <godot_cpp/classes/ref_counted.hpp>
#include <vector>

class TG_Node : public godot::RefCounted
{
    GDCLASS( TG_Node, godot::RefCounted )
public:
    enum Type
    {
        TYPE_BRANCH = 0,
        TYPE_LEAF = 1,
        TYPE_COUNT
    };

    TG_Node();
    ~TG_Node() override;
    Type get_type() const;
    void set_type( Type type );
    int get_local_seed() const;
    void set_local_seed( int p_local_seed );
    bool is_active() const;
    void set_active( bool active );
    int get_child_count() const;
    void add_child( godot::Ref<TG_Node> node );
    void clear_children();

    // Internal

    const TG_SpawnParams &get_spawn_params() const;
    const TG_PathParams &get_path_params() const;
    const TG_LeafParams &get_leaf_params() const;
    const TG_Node &get_child_internal( int i ) const;

protected:
    static void _bind_methods();

private:
    godot::Ref<TG_SpawnParams> _b_get_spawn_params();
    godot::Ref<TG_PathParams> _b_get_path_params();
    godot::Ref<TG_LeafParams> _b_get_leaf_params();
    godot::Ref<TG_Node> _b_get_child( int i );
    // TODO enums in bindings?
    void _b_set_type( int type );

    godot::Ref<TG_SpawnParams> _spawn_params;
    godot::Ref<TG_PathParams> _path_params;
    godot::Ref<TG_LeafParams> _leaf_params;
    int _local_seed = 0;
    bool _active = true;
    Type _type = TYPE_BRANCH;
    std::vector<godot::Ref<TG_Node>> _children;
};

#endif // TG_NODE_H
