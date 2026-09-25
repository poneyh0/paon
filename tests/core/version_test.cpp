#include "paon/core/version.hpp"

#include <gtest/gtest.h>

#include <regex>
#include <string>

TEST(Version, IsSemver) {
    const std::string version{paon::core::version()};
    EXPECT_TRUE(std::regex_match(version, std::regex{R"(\d+\.\d+\.\d+)"}))
        << "version() = \"" << version << "\" is not MAJOR.MINOR.PATCH";
}
