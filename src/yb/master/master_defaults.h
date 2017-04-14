// Copyright (c) YugaByte, Inc.

#ifndef YB_MASTER_MASTER_DEFAULTS_H
#define YB_MASTER_MASTER_DEFAULTS_H

#include <set>
#include <string>
#include <utility>

namespace yb {
namespace master {

static const char* const kDefaultNamespaceName = "$$$_DEFAULT";
static const char* const kDefaultNamespaceId = "00000000000000000000000000000000";

static const char* const kSystemNamespaceName = "system";
static const char* const kSystemNamespaceId = "00000000000000000000000000000001";

static const char* const kSystemSchemaNamespaceName = "system_schema";
static const char* const kSystemSchemaNamespaceId = "00000000000000000000000000000002";

static const char* const kSystemAuthNamespaceName = "system_auth";
static const char* const kSystemDistributedNamespaceName = "system_distributed";
static const char* const kSystemTracesNamespaceName = "system_traces";

static const char* const kSystemPeersTableName = "peers";
static const char* const kSystemSchemaAggregatesTableName = "aggregates";
static const char* const kSystemSchemaColumnsTableName = "columns";
static const char* const kSystemSchemaFunctionsTableName = "functions";
static const char* const kSystemSchemaIndexesTableName = "indexes";

// Needs to be updated each time we add a new system namespace.
static constexpr int kNumSystemNamespaces = 2;

// Needs to be updated each time we add a new system table. Currently, this is only used for unit
// tests which don't have access to the master object (for ex: unit tests which use ExternalMaster).
static constexpr int kNumSystemTables = 5;

} // namespace master
} // namespace yb

#endif // YB_MASTER_MASTER_DEFAULTS_H
