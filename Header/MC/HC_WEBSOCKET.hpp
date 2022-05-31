// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct HC_WEBSOCKET {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HC_WEBSOCKET
public:
    struct HC_WEBSOCKET& operator=(struct HC_WEBSOCKET const &) = delete;
    HC_WEBSOCKET(struct HC_WEBSOCKET const &) = delete;
    HC_WEBSOCKET() = delete;
#endif

public:
    MCAPI void AddRef();
    MCAPI long Connect(char const *, char const *, struct XAsyncBlock *);
    MCAPI void DecRef();
    MCAPI long Disconnect();
    MCAPI class std::map<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>, struct http_header_compare, class http_stl_allocator<struct std::pair<class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>>>>> const & Headers() const;
    MCAPI bool const ProxyDecryptsHttps() const;
    MCAPI class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const & ProxyUri() const;
    MCAPI long Send(char const *, struct XAsyncBlock *);

protected:

private:

};