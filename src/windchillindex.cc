#include "math.h"
#include <cfloat>
namespace edu {
    namespace vcccd{
        namespace vc {
            namespace csv13 {
                double computeWindChillIndex(double temperature, double windVelocity){
                    if (temperature > 10.0) return FLT_MIN;

                    return 33.0 - ((10.0 * sqrt(windVelocity) - windVelocity) * (33.0 - temperature)) / 23.1;
                }
            }
        }
    }
}



