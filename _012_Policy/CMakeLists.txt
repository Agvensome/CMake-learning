# 3.22
cmake_minimum_required(VERSION 3.15)
cmake_policy(VERSION 3.7...3.17)

cmake_policy(PUSH)
cmake_policy(SET CMP0095 OLD)
cmake_policy(GET CMP0095 CMP0095)   # 3.16
message(STATUS "CMP0095 = ${CMP0095}")
cmake_policy(POP)

cmake_policy(SET CMP0150 NEW)       # 3.27 invalid

cmake_policy(GET CMP0081 CMP0081)   # 3.13
cmake_policy(GET CMP0095 CMP0095)   # 3.16
cmake_policy(GET CMP0102 CMP0102)   # 3.17
cmake_policy(GET CMP0150 CMP0150)   # 3.27

message(STATUS "CMP0081 = ${CMP0081}")
message(STATUS "CMP0095 = ${CMP0095}")
message(STATUS "CMP0102 = ${CMP0102}")
message(STATUS "CMP0150 = ${CMP0150}")

project(Policy)