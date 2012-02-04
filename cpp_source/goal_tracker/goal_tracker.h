/**
 * @author Maarten
 *
 * This file was generated by Aldebaran Robotics ModuleGenerator
 */

#ifndef GOAL_TRACKER_GOAL_TRACKER_H
#define GOAL_TRACKER_GOAL_TRACKER_H

#include <boost/shared_ptr.hpp>
#include <alcommon/almodule.h>

#include <string>
#include <vector>
#include <map>
#include <algorithm>

#include <cv.h>
#include <highgui.h>
#include <math.h>

using namespace std;
using namespace AL;

namespace AL
{
  class ALBroker;
}

typedef struct tuple {
    double first;
    double second;
} tuple;

class goal_tracker : public AL::ALModule
{
  public:

     goal_tracker(boost::shared_ptr<AL::ALBroker> broker, const std::string& name);

    virtual ~goal_tracker();

    /**
     * echo: simply returns the paramter given as first arguemtn
     * The AL::ALValue is an union type which can be a std::string, an int, a float,
     * a vector of floats, and so on.
     */
    AL::ALValue echo(const AL::ALValue& foo);
    IplImage* markGoalCV(IplImage* im, string color);
    double calcXangle(int xcoord);
    tuple run(IplImage* image, double yawHead, string color);
    AL::ALValue track(const string& im_string, const int& size_x, const int& size_y,
            const double& yawHead, const string& color);
};

#endif  // GOAL_TRACKER_GOAL_TRACKER_H
