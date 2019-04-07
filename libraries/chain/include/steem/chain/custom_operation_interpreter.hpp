
#pragma once

#include <memory>

#include <steem/protocol/types.hpp>

namespace steem { namespace schema {
   struct abstract_schema;
} }

namespace steem { namespace protocol {
   struct custom_json_operation;
} }

namespace steem { namespace chain {

class custom_operation_interpreter
{
   public:
      virtual void apply( const protocol::custom_json_operation& op ) = 0;
      virtual void apply( const protocol::custom_binary_operation & op ) = 0;
      virtual steem::protocol::custom_id_type get_custom_id() = 0;
      virtual std::shared_ptr< steem::schema::abstract_schema > get_operation_schema() = 0;
};

} } // steem::chain
