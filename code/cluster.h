#ifndef SWOOSH_CLUSTER_H_
#define SWOOSH_CLUSTER_H_

#include <bitset>
#include "cluster.h"
#include "param.h"
#include <unordered_map>
#include <unordered_set>
#include <vector>

namespace std {

void hash_bands(uint32_t gid, const bitset<L>& sketch,
                vector<unordered_map<bitset<R>,vector<uint32_t>>>& hash_tables);
bool is_isolated(const bitset<L>& sketch,
                 const vector<unordered_map<bitset<R>,vector<uint32_t>>>&
                    hash_tables);
void get_shared_bucket_graphs(const bitset<L>& sketch,
                              const vector<unordered_map<bitset<R>,
                                                   vector<uint32_t>>>& hash_tables,
                              unordered_set<uint32_t>& shared_bucket_graphs);

}

#endif
