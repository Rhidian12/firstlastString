#pragma once

#include <string>
#include <string_view>

namespace stdproposal
{
    // 1, should be part of std::basic_string
    std::string first(const std::string& source, size_t count)
    {
        if (count >= source.size())
        {
            count = source.size();
        }

        return std::string(source.data(), count);
    }

    // 2, should be a part of std::basic_string
    std::string last(const std::string& source, size_t count)
    {
        if (count >= source.size())
        {
            count = source.size();
        }

        return std::string(source.data() + (source.size() - count), count);
    }

    // 3, should be part of std::basic_string_view
    std::string_view first(const std::string_view source, size_t count)
    {
        if (count >= source.size())
        {
            count = source.size();
        }

        return std::string_view(source.data(), count);
    }

    // 4, should be a part of std::basic_string_view
    std::string_view last(const std::string_view source, size_t count)
    {
        if (count >= source.size())
        {
            count = source.size();
        }

        return std::string_view(source.data() + (source.size() - count), count);
    }
}