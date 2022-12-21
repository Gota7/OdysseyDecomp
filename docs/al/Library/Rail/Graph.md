# Graph.o
| Symbol | Meaning 
| ------------- | ------------- 
| :x: | Function has not yet been started or is not matching. 
| :white_check_mark: | Function is completed. 


# Graph.o
| Symbol (Mangled) | Symbol (Demangled) | Decompiled? |
| ------------- |  ------------- | ------------- |
| `_ZN2al5GraphC1Eii` | `al::Graph::Graph(int,int)` | :white_check_mark: |
| `_ZN2al5Graph12appendVertexEi` | `al::Graph::appendVertex(int)` | :white_check_mark: |
| `_ZN2al5Graph12appendVertexEPNS0_6VertexE` | `al::Graph::appendVertex(al::Graph::Vertex *)` | :white_check_mark: |
| `_ZN2al5Graph12removeVertexEPKNS0_6VertexE` | `al::Graph::removeVertex(al::Graph::Vertex const*)` | :white_check_mark: |
| `_ZN2al5Graph10removeEdgeEPKNS0_4EdgeE` | `al::Graph::removeEdge(al::Graph::Edge const*)` | :white_check_mark: |
| `_ZNK2al5Graph11tryFindEdgeEii` | `al::Graph::tryFindEdge(int,int)const` | :white_check_mark: |
| `_ZN2al5Graph10appendEdgeEPNS0_4EdgeE` | `al::Graph::appendEdge(al::Graph::Edge *)` | :white_check_mark: |
| `_ZN2al5Graph13tryAppendEdgeEPNS0_4EdgeE` | `al::Graph::tryAppendEdge(al::Graph::Edge *)` | :white_check_mark: |
| `_ZN2al5Graph10appendEdgeEiif` | `al::Graph::appendEdge(int,int,float)` | :white_check_mark: |
| `_ZN2al5Graph13tryAppendEdgeEiif` | `al::Graph::tryAppendEdge(int,int,float)` | :white_check_mark: |
| `_ZNK2al5Graph4Edge9getWeightEv` | `al::Graph::Edge::getWeight(void)const` | :white_check_mark: |
| `_ZN2al16calcShortestPathEPN4sead8ObjArrayINS_5Graph10VertexInfoEEEPKS2_ii` | `al::calcShortestPath(sead::ObjArray<al::Graph::VertexInfo> *,al::Graph const*,int,int)` | :white_check_mark: |
| `_ZN2al25calcDistanceAndNearestPosEPN4sead7Vector3IfEEPKNS_5Graph7PosEdgeERKS2_` | `al::calcDistanceAndNearestPos(sead::Vector3<float> *,al::Graph::PosEdge const*,sead::Vector3<float> const&)` | :white_check_mark: |
| `_ZN2al21findEdgeMinimumWeightEPKNS_5GraphE` | `al::findEdgeMinimumWeight(al::Graph const*)` | :white_check_mark: |
| `_ZN2al21findEdgeMinimumWeightEPKNS_5Graph6VertexE` | `al::findEdgeMinimumWeight(al::Graph::Vertex const*)` | :white_check_mark: |
| `_ZN2al21findEdgeMinimumWeightEPPKNS_5Graph4EdgeERKN4sead13ConstPtrArrayIS1_EE` | `al::findEdgeMinimumWeight(al::Graph::Edge const**,sead::ConstPtrArray<al::Graph::Edge> const&)` | :white_check_mark: |
| `_ZN2al22tryFindEdgeStartVertexEPKNS_5Graph6VertexES3_` | `al::tryFindEdgeStartVertex(al::Graph::Vertex const*,al::Graph::Vertex const*)` | :white_check_mark: |
| `_ZN2al20tryFindEdgeEndVertexEPKNS_5Graph6VertexES3_` | `al::tryFindEdgeEndVertex(al::Graph::Vertex const*,al::Graph::Vertex const*)` | :white_check_mark: |
| `_ZN2al20findNearestPosVertexEPKNS_5GraphERKN4sead7Vector3IfEEf` | `al::findNearestPosVertex(al::Graph const*,sead::Vector3<float> const&,float)` | :white_check_mark: |
| `_ZN2al21findFarthestPosVertexEPKNS_5GraphERKN4sead7Vector3IfEEf` | `al::findFarthestPosVertex(al::Graph const*,sead::Vector3<float> const&,float)` | :white_check_mark: |
| `_ZN2al30findPosEdgeByVertexPosUndirectEPKNS_5GraphERKN4sead7Vector3IfEES7_` | `al::findPosEdgeByVertexPosUndirect(al::Graph const*,sead::Vector3<float> const&,sead::Vector3<float> const&)` | :white_check_mark: |
| `_ZN2al22findPosEdgeByVertexPosEPKNS_5GraphERKN4sead7Vector3IfEES7_` | `al::findPosEdgeByVertexPos(al::Graph const*,sead::Vector3<float> const&,sead::Vector3<float> const&)` | :white_check_mark: |
| `_ZN2al19isDestinationVertexEPKNS_5Graph9PosVertexES3_` | `al::isDestinationVertex(al::Graph::PosVertex const*,al::Graph::PosVertex const*)` | :white_check_mark: |
| `_ZN2al23tryRemoveEdgeFromVertexEPNS_5Graph6VertexEPNS0_4EdgeE` | `al::tryRemoveEdgeFromVertex(al::Graph::Vertex *,al::Graph::Edge *)` | :white_check_mark: |
| `_ZN2al13isExistVertexEPKNS_5GraphEPKNS0_6VertexE` | `al::isExistVertex(al::Graph const*,al::Graph::Vertex const*)` | :white_check_mark: |
| `_ZN2al14isSpanningTreeEPKNS_5GraphE` | `al::isSpanningTree(al::Graph const*)` | :white_check_mark: |
| `_ZN2al14isSpanningTreeERKN4sead13ConstPtrArrayINS_5Graph4EdgeEEE` | `al::isSpanningTree(sead::ConstPtrArray<al::Graph::Edge> const&)` | :white_check_mark: |
| `_ZN2al6isWalkERKN4sead13ConstPtrArrayINS_5Graph4EdgeEEE` | `al::isWalk(sead::ConstPtrArray<al::Graph::Edge> const&)` | :white_check_mark: |
| `_ZN2al7isTrailERKN4sead13ConstPtrArrayINS_5Graph4EdgeEEE` | `al::isTrail(sead::ConstPtrArray<al::Graph::Edge> const&)` | :white_check_mark: |
| `_ZN2al9isCircuitERKN4sead13ConstPtrArrayINS_5Graph4EdgeEEE` | `al::isCircuit(sead::ConstPtrArray<al::Graph::Edge> const&)` | :white_check_mark: |
| `_ZN2al6isPathERKN4sead13ConstPtrArrayINS_5Graph4EdgeEEE` | `al::isPath(sead::ConstPtrArray<al::Graph::Edge> const&)` | :white_check_mark: |
| `_ZN2al7isCycleERKN4sead13ConstPtrArrayINS_5Graph4EdgeEEE` | `al::isCycle(sead::ConstPtrArray<al::Graph::Edge> const&)` | :white_check_mark: |
| `_ZN2al23calcMinimumSpanningTreeEPN4sead13ConstPtrArrayINS_5Graph4EdgeEEEPKS2_` | `al::calcMinimumSpanningTree(sead::ConstPtrArray<al::Graph::Edge> *,al::Graph const*)` | :white_check_mark: |
| `_ZN4sead8ObjArrayIN2al5Graph10VertexInfoEE8compareTEPKS3_S6_` | `sead::ObjArray<al::Graph::VertexInfo>::compareT(al::Graph::VertexInfo const*,al::Graph::VertexInfo const*)` | :white_check_mark: |
