// PluginPluginWithTests.hpp
// Mads Kjeldgaard (mail@madskjeldgaard.dk)

#pragma once

#include "SC_PlugIn.hpp"

namespace PluginWithTests {

class PluginWithTests : public SCUnit {
public:
    PluginWithTests();

    // Destructor
    // ~PluginWithTests();

private:
    // Calc function
    void next(int nSamples);

    // Member variables
};

} // namespace PluginWithTests
