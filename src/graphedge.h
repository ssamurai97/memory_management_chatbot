#ifndef GRAPHEDGE_H_
#define GRAPHEDGE_H_

#include <vector>
#include <string>

class GraphNode; // forward declaration

class GraphEdge
{
private:
    // data handles (not owned)
    GraphNode *_childNode;
    GraphNode *_parentNode;

    // proprietary members
    int _id;
    std::vector<std::string> _keywords; // list of topics associated with this edge
    

public:
    // constructor / desctructor
    GraphEdge(int id);

    GraphEdge(const GraphEdge& )            = default;
    GraphEdge(GraphEdge&& )                 = default;
    GraphEdge& operator=(const GraphEdge& ) = default;
    GraphEdge& operator=(GraphEdge&& )      = default;
    // getter / setter
    int GetID() { return _id; }
    void SetChildNode(GraphNode *childNode);
    void SetParentNode(GraphNode *parentNode);
    GraphNode *GetChildNode() { return _childNode; }
    std::vector<std::string> GetKeywords() { return _keywords; }

    // proprietary functions
    void AddToken(std::string token);
};

#endif /* GRAPHEDGE_H_ */