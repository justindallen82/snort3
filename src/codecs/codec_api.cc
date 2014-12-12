/*
** Copyright (C) 2014 Cisco and/or its affiliates. All rights reserved.
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License Version 2 as
** published by the Free Software Foundation.  You may not use, modify or
** distribute this program under any other version of the GNU General
** Public License.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
// codec_api.cc author Josh Rosenbaum <jrosenba@cisco.com>

#include "codec_api.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "framework/codec.h"

// root codecs


// ip codecs
extern const BaseApi* cd_ipv4; // static due to dependence on fpdetect
extern const BaseApi* cd_tcp;  // static because only file that specific functions
                               //     (symbols will be removed from final executabel)

// link codecs

#ifdef STATIC_CODECS
extern const BaseApi* cd_ah;
extern const BaseApi* cd_arp;
extern const BaseApi* cd_dstopts;
extern const BaseApi* cd_erspan2;
extern const BaseApi* cd_erspan3;
extern const BaseApi* cd_esp;
extern const BaseApi* cd_frag; 
extern const BaseApi* cd_gre;
extern const BaseApi* cd_gtp;
extern const BaseApi* cd_hopopts;
extern const BaseApi* cd_icmp4;
extern const BaseApi* cd_icmp4_ip;
extern const BaseApi* cd_icmp6;
extern const BaseApi* cd_icmp6_ip;
extern const BaseApi* cd_ipv6;
extern const BaseApi* cd_igmp;
extern const BaseApi* cd_llc;
extern const BaseApi* cd_mobility;
extern const BaseApi* cd_mpls;
extern const BaseApi* cd_no_next;
extern const BaseApi* cd_pgm;
extern const BaseApi* cd_pppencap;
extern const BaseApi* cd_pppoepkt_disc;
extern const BaseApi* cd_pppoepkt_sess;
extern const BaseApi* cd_routing;
extern const BaseApi* cd_sun_nd;
extern const BaseApi* cd_swipe;
extern const BaseApi* cd_teredo;
extern const BaseApi* cd_transbridge;
extern const BaseApi* cd_udp;
extern const BaseApi* cd_vlan;


//  Root codecs
extern const BaseApi* cd_eapol;
extern const BaseApi* cd_eth;
extern const BaseApi* cd_i4l_rawip;
extern const BaseApi* cd_linux_sll;
extern const BaseApi* cd_null;
extern const BaseApi* cd_pflog;
extern const BaseApi* cd_ppp;
extern const BaseApi* cd_raw4;
extern const BaseApi* cd_raw6;
extern const BaseApi* cd_wlan;

#endif


const BaseApi* codecs[] =
{
    // non root codecs
    cd_ipv4,
    cd_tcp,

#ifdef STATIC_CODECS
    cd_ah,
    cd_arp,
    cd_dstopts,
    cd_erspan2,
    cd_erspan3,
    cd_esp,
    cd_frag,
    cd_gre,
    cd_gtp,
    cd_hopopts,
    cd_icmp4,
    cd_icmp4_ip,
    cd_icmp6,
    cd_icmp6_ip,
    cd_ipv6,
    cd_igmp,
    cd_llc,
    cd_mobility,
    cd_mpls,
    cd_no_next,
    cd_pgm,
    cd_pppencap,
    cd_pppoepkt_disc,
    cd_pppoepkt_sess,
    cd_routing,
    cd_sun_nd,
    cd_swipe,
    cd_teredo,
    cd_transbridge,
    cd_udp,
    cd_vlan,

    /* root codecs */
    cd_eapol,
    cd_eth,
    cd_i4l_rawip,
    cd_linux_sll,
    cd_null,
    cd_pflog,
    cd_ppp,
    cd_raw4,
    cd_raw6,
    cd_wlan,
#endif

    nullptr
};

