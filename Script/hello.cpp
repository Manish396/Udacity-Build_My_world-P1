#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginManix : public WorldPlugin
  {
    public: WorldPluginManix() : WorldPlugin()
    {
      printf("Welcome to ManixWorld!\n");
    }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
    {
    }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginManix)
}
