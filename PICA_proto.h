//коды сообщений протокола и структура сообщения

#ifndef PICA_PROTO_H
#define PICA_PROTO_H


#define PICA_PROTO_VER_HIGH 0
#define PICA_PROTO_VER_LOW 3

#define PICA_PROTO_INITREQ 0xCA
#define PICA_PROTO_INITRESPOK 0x01
#define PICA_PROTO_VERDIFFER 0x02

#define PICA_PROTO_CONNREQOUTG 0x03
#define PICA_PROTO_CONNREQINC 0x04
#define PICA_PROTO_NOTFOUND 0x05
#define PICA_PROTO_CONNALLOW 0x06
#define PICA_PROTO_FOUND 0x07
#define PICA_PROTO_CONNDENY 0x08
#define PICA_PROTO_CLNODELISTREQ 0x09
#define PICA_PROTO_CLNODELIST 0x0A

#define PICA_PROTO_CONNID 0x20

#define PICA_PROTO_MSGUTF8 0x30
#define PICA_PROTO_MSGOK 0x40

#define PICA_PROTO_PINGREQ 0x68
#define PICA_PROTO_PINGREP 0x69

#define PICA_PROTO_NODECONNREQ 0xCB

#define PICA_PROTO_NEWNODE_IPV4 0xA0
#define PICA_PROTO_NEWNODE_IPV6 0xA1
#define PICA_PROTO_NEWNODE_DNS 0xA2

#define PICA_PROTO_NODELIST 0xA4
#define PICA_PROTO_NODELISTREQ 0x90

#define PICA_PROTO_SEARCH 0xA5
#define PICA_PROTO_N2NFOUND 0xA8
#define PICA_PROTO_N2NFOUNDCACHE 0xA9
#define PICA_PROTO_N2NCONNREQOUTG 0xAA
#define PICA_PROTO_N2NALLOW 0xAB
#define PICA_PROTO_N2NNOTFOUND 0xB8
#define PICA_PROTO_N2NMSG 0xD0


//size
#define PICA_PROTO_INITREQ_SIZE 4
#define PICA_PROTO_INITRESPOK_SIZE 4
#define PICA_PROTO_VERDIFFER_SIZE 4

#define PICA_PROTO_CONNREQOUTG_SIZE 6
#define PICA_PROTO_CONNREQINC_SIZE 6
#define PICA_PROTO_NOTFOUND_SIZE 6
#define PICA_PROTO_CONNALLOW_SIZE 6
#define PICA_PROTO_FOUND_SIZE 6
#define PICA_PROTO_CONNDENY_SIZE 6
#define PICA_PROTO_CLNODELISTREQ_SIZE 4

#define PICA_PROTO_CONNID_SIZE 10

#define PICA_PROTO_MSGOK_SIZE 4

#define PICA_PROTO_PINGREQ_SIZE 4
#define PICA_PROTO_PINGREP_SIZE 4

#define PICA_PROTO_NODECONNREQ_SIZE 4

#define PICA_PROTO_NEWNODE_IPV4_SIZE 8
#define PICA_PROTO_NEWNODE_IPV6_SIZE 20

#define PICA_PROTO_NODELIST_ITEM_IPV4_SIZE 7
#define PICA_PROTO_NODELIST_ITEM_IPV6_SIZE 19


#define PICA_PROTO_NODELISTREQ_SIZE 4

#define PICA_PROTO_SEARCH_SIZE 6
#define PICA_PROTO_N2NFOUND_SIZE 6
#define PICA_PROTO_N2NCONNREQOUTG_SIZE 10
#define PICA_PROTO_N2NALLOW_SIZE 10
#define PICA_PROTO_N2NNOTFOUND_SIZE 10

#define PICA_PROTO_N2NMSG_MAXDATASIZE 65524
#define PICA_PROTO_C2CMSG_MAXDATASIZE 65532


struct PICA_proto_msg
{
unsigned char head[2];
unsigned char tail[0];
};




#endif

