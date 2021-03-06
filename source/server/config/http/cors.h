#pragma once

#include <string>

#include "envoy/server/filter_config.h"

#include "common/config/well_known_names.h"

#include "extensions/filters/http/common/empty_http_filter_config.h"

namespace Envoy {
namespace Server {
namespace Configuration {

/**
 * Config registration for the cors filter. @see NamedHttpFilterConfigFactory.
 */
class CorsFilterConfig : public Extensions::HttpFilters::Common::EmptyHttpFilterConfig {
public:
  HttpFilterFactoryCb createFilter(const std::string&, FactoryContext&) override;

  std::string name() override { return Config::HttpFilterNames::get().CORS; }
};

} // namespace Configuration
} // namespace Server
} // namespace Envoy
