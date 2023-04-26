#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "crane_interfaces/msg/motion_reference.hpp"  

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MotionReferencePublisher : public rclcpp::Node
{
public:
  MotionReferencePublisher()
  : Node("motion_reference_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<crane_interfaces::msg::MotionReference>("cyl_vel_ref", 10);
    timer_ = this->create_wall_timer(
      500ms, std::bind(&MotionReferencePublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = crane_interfaces::msg::MotionReference();
    message.cyl_vel_ref = this->count_++;
    RCLCPP_INFO(this->get_logger(), "Cylinder Velocity Reference: '%f'", message.cyl_vel_ref);
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<crane_interfaces::msg::MotionReference>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MotionReferencePublisher>());
  rclcpp::shutdown();
  return 0;
}
