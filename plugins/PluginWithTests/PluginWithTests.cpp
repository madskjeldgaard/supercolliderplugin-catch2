// PluginPluginWithTests.cpp
// Mads Kjeldgaard (mail@madskjeldgaard.dk)

#include "SC_PlugIn.hpp"
#include "PluginWithTests.hpp"

static InterfaceTable* ft;

namespace PluginWithTests {

PluginWithTests::PluginWithTests() {
    mCalcFunc = make_calc_function<PluginWithTests, &PluginWithTests::next>();
    next(1);
}

void PluginWithTests::next(int nSamples) {
    const float* input = in(0);
    const float* gain = in(1);
    float* outbuf = out(0);

    // simple gain function
    for (int i = 0; i < nSamples; ++i) {
        outbuf[i] = input[i] * gain[i];
    }
}

} // namespace PluginWithTests

PluginLoad(PluginWithTestsUGens) {
    // Plugin magic
    ft = inTable;
    registerUnit<PluginWithTests::PluginWithTests>(ft, "PluginWithTests", false);
}
