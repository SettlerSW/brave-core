/* Copyright (c) 2019 The Brave Software Team. Distributed under the MPL2
 * license. This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/third_party/blink/brave_page_graph/graph_item/edge/request/edge_request_frame.h"
#include "brave/third_party/blink/brave_page_graph/graphml.h"
#include "brave/third_party/blink/brave_page_graph/graph_item/node/node.h"
#include "brave/third_party/blink/brave_page_graph/page_graph.h"
#include "brave/third_party/blink/brave_page_graph/types.h"

using ::std::to_string;

namespace brave_page_graph {

EdgeRequestFrame::EdgeRequestFrame(PageGraph* const graph,
    Node* const out_node, Node* const in_node)
    : Edge(graph, out_node, in_node) {}

EdgeRequestFrame::~EdgeRequestFrame() {}

ItemName EdgeRequestFrame::GetItemName() const {
  return "frame request #" + to_string(id_);
}

RequestUrl EdgeRequestFrame::GetRequestUrl() const {
  return RequestUrl();
}

GraphMLXMLList EdgeRequestFrame::GraphMLAttributes() const {
  return GraphMLXMLList({
    GraphMLAttrDefForType(kGraphMLAttrDefEdgeType)
      ->ToValue("frame request")
  });
}

}  // namespace brave_page_graph