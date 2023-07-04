/*
 * This file is part of libflowdrop.
 *
 * For license and copyright information please follow this link:
 * https://github.com/noseam-env/libflowdrop/blob/master/LEGAL
 */

#ifndef LIBFLOWDROP_DISCOVERY_HPP
#define LIBFLOWDROP_DISCOVERY_HPP

void announce(const std::string &id, int port, std::atomic<bool>& stopFlag);

struct Address {
    std::string host;
    uint16_t port;
};

using resolveCallback = std::function<void(const Address &)>;

void resolve(const std::string &id, const resolveCallback &callback);

#endif //LIBFLOWDROP_DISCOVERY_HPP
