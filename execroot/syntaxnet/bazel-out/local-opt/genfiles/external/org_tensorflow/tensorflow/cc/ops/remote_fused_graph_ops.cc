// This file is MACHINE GENERATED! Do not edit.


#include "tensorflow/cc/ops/const_op.h"
#include "tensorflow/cc/ops/remote_fused_graph_ops.h"

namespace tensorflow {
namespace ops {

RemoteFusedGraphExecute::RemoteFusedGraphExecute(const ::tensorflow::Scope&
                                                 scope, ::tensorflow::InputList
                                                 values, int64 N, DataType U,
                                                 StringPiece
                                                 serialized_graph_transfer_info) {
  if (!scope.ok()) return;
  auto _values = ::tensorflow::ops::AsNodeOutList(scope, values);
  if (!scope.ok()) return;
  ::tensorflow::Node* ret;
  const auto unique_name = scope.GetUniqueNameForOp("RemoteFusedGraphExecute");
  auto builder = ::tensorflow::NodeBuilder(unique_name, "RemoteFusedGraphExecute")
                     .Input(_values)
                     .Attr("N", N)
                     .Attr("U", U)
                     .Attr("serialized_graph_transfer_info", serialized_graph_transfer_info)
  ;
  scope.UpdateBuilder(&builder);
  scope.UpdateStatus(builder.Finalize(scope.graph(), &ret));
  if (!scope.ok()) return;
  for (int64 i = 0; i < ret->num_outputs(); ++i)
    this->output.push_back(Output(ret, i));
}

/// @}

}  // namespace ops
}  // namespace tensorflow
