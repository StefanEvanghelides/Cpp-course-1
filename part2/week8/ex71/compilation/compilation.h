#pragma once

#include <chrono>
#include <future>
#include <string>

struct Result
{
    bool d_success;
    std::string d_outfile;
};

Result compile(std::string const &infile);

typedef std::future<Result> FutureResult;
typedef std::packaged_task<Result (std::string const &)> CompileTask;