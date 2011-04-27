/* automatically generated by genlutable.sh, do not edit directly */
#ifndef LOGTAG_NAMES_DEFINED
#define LOGTAG_NAMES_DEFINED


enum
{

  LOGTAG_CORE_ACCOUNTING=1,
  LOGTAG_CORE_AUTH=2,
  LOGTAG_CORE_DEBUG=3,
  LOGTAG_CORE_DUMP=4,
  LOGTAG_CORE_ERROR=5,
  LOGTAG_CORE_INFO=6,
  LOGTAG_CORE_LICENSE=7,
  LOGTAG_CORE_MESSAGE=8,
  LOGTAG_CORE_POLICY=9,
  LOGTAG_CORE_SESSION=10,
  LOGTAG_CORE_STDERR=11,
  LOGTAG_FINGER_DEBUG=12,
  LOGTAG_FINGER_ERROR=13,
  LOGTAG_FINGER_POLICY=14,
  LOGTAG_FINGER_REQUEST=15,
  LOGTAG_FINGER_VIOLATION=16,
  LOGTAG_FTP_DEBUG=17,
  LOGTAG_FTP_ERROR=18,
  LOGTAG_FTP_POLICY=19,
  LOGTAG_FTP_REPLY=20,
  LOGTAG_FTP_REQUEST=21,
  LOGTAG_FTP_SESSION=22,
  LOGTAG_FTP_VIOLATION=23,
  LOGTAG_HTTP_ACCOUNTING=24,
  LOGTAG_HTTP_DEBUG=25,
  LOGTAG_HTTP_ERROR=26,
  LOGTAG_HTTP_POLICY=27,
  LOGTAG_HTTP_REQUEST=28,
  LOGTAG_HTTP_RESPONSE=29,
  LOGTAG_HTTP_VIOLATION=30,
  LOGTAG_IMAP_DEBUG=31,
  LOGTAG_IMAP_ERROR=32,
  LOGTAG_IMAP_INFO=33,
  LOGTAG_IMAP_POLICY=34,
  LOGTAG_IMAP_REPLY=35,
  LOGTAG_IMAP_REQUEST=36,
  LOGTAG_IMAP_VIOLATION=37,
  LOGTAG_LDAP_DEBUG=38,
  LOGTAG_LDAP_ERROR=39,
  LOGTAG_LDAP_POLICY=40,
  LOGTAG_LDAP_REQUEST=41,
  LOGTAG_LDAP_RESPONSE=42,
  LOGTAG_LDAP_VIOLATION=43,
  LOGTAG_LP_DEBUG=44,
  LOGTAG_LP_ERROR=45,
  LOGTAG_LP_POLICY=46,
  LOGTAG_LP_REQUEST=47,
  LOGTAG_MIME_ERROR=48,
  LOGTAG_MIME_POLICY=49,
  LOGTAG_MIME_VIOLATION=50,
  LOGTAG_MSRPC_DEBUG=51,
  LOGTAG_MSRPC_ERROR=52,
  LOGTAG_MSRPC_INFO=53,
  LOGTAG_MSRPC_POLICY=54,
  LOGTAG_MSRPC_SESSION=55,
  LOGTAG_MSRPC_VIOLATION=56,
  LOGTAG_NNTP_DEBUG=57,
  LOGTAG_NNTP_POLICY=58,
  LOGTAG_NNTP_REPLY=59,
  LOGTAG_NNTP_REQUEST=60,
  LOGTAG_NNTP_TRACE=61,
  LOGTAG_PLUG_DEBUG=62,
  LOGTAG_PLUG_ERROR=63,
  LOGTAG_PLUG_POLICY=64,
  LOGTAG_PLUG_SESSION=65,
  LOGTAG_POP3_DEBUG=66,
  LOGTAG_POP3_ERROR=67,
  LOGTAG_POP3_POLICY=68,
  LOGTAG_POP3_REPLY=69,
  LOGTAG_POP3_REQUEST=70,
  LOGTAG_POP3_VIOLATION=71,
  LOGTAG_PSSL_DEBUG=72,
  LOGTAG_PSSL_ERROR=73,
  LOGTAG_PSSL_POLICY=74,
  LOGTAG_RADIUS_DEBUG=75,
  LOGTAG_RADIUS_ERROR=76,
  LOGTAG_RADIUS_POLICY=77,
  LOGTAG_RADIUS_REQUEST=78,
  LOGTAG_RADIUS_SESSION=79,
  LOGTAG_RADIUS_VIOLATION=80,
  LOGTAG_RDP_DEBUG=81,
  LOGTAG_RDP_ERROR=82,
  LOGTAG_RDP_INFO=83,
  LOGTAG_RDP_POLICY=84,
  LOGTAG_RDP_SESSION=85,
  LOGTAG_RDP_VIOLATION=86,
  LOGTAG_RSH_ACCOUNTING=87,
  LOGTAG_RSH_DEBUG=88,
  LOGTAG_RSH_ERROR=89,
  LOGTAG_RSH_POLICY=90,
  LOGTAG_RSH_VIOLATION=91,
  LOGTAG_SATYR_ERROR=92,
  LOGTAG_SIP_VIOLATION=93,
  LOGTAG_SIP_REQUEST=94,
  LOGTAG_SIP_RESPONSE=95,
  LOGTAG_SIP_POLICY=96,
  LOGTAG_SIP_DEBUG=97,
  LOGTAG_SIP_ERROR=98,
  LOGTAG_SIP_ACCOUNTING=99,
  LOGTAG_SMTP_ACCOUNTING=100,
  LOGTAG_SMTP_DEBUG=101,
  LOGTAG_SMTP_ERROR=102,
  LOGTAG_SMTP_INFO=103,
  LOGTAG_SMTP_POLICY=104,
  LOGTAG_SMTP_REQUEST=105,
  LOGTAG_SMTP_RESPONSE=106,
  LOGTAG_SMTP_VIOLATION=107,
  LOGTAG_SQLNET_ERROR=108,
  LOGTAG_SQLNET_REQUEST=109,
  LOGTAG_SQLNET_VIOLATION=110,
  LOGTAG_SSH_DEBUG=111,
  LOGTAG_SSH_ERROR=112,
  LOGTAG_SSH_POLICY=113,
  LOGTAG_SSH_VIOLATION=114,
  LOGTAG_SSH_ACCOUNTING=115,
  LOGTAG_SSH_INFO=116,
  LOGTAG_TELNET_DEBUG=117,
  LOGTAG_TELNET_ERROR=118,
  LOGTAG_TELNET_POLICY=119,
  LOGTAG_TELNET_VIOLATION=120,
  LOGTAG_TELNET_VIOLATIONS=121,
  LOGTAG_TFTP_DEBUG=122,
  LOGTAG_TFTP_ERROR=123,
  LOGTAG_TFTP_POLICY=124,
  LOGTAG_TFTP_REQUEST=125,
  LOGTAG_TFTP_VIOLATION=126,
  LOGTAG_VNC_DEBUG=127,
  LOGTAG_VNC_ERROR=128,
  LOGTAG_VNC_INFO=129,
  LOGTAG_VNC_POLICY=130,
  LOGTAG_VNC_SESSION=131,
  LOGTAG_VNC_VIOLATION=132,
  LOGTAG_WHOIS_DEBUG=133,
  LOGTAG_WHOIS_ERROR=134,
  LOGTAG_WHOIS_REQUEST=135,
  LOGTAG_X11_DEBUG=136,
  LOGTAG_X11_ERROR=137,
  LOGTAG_X11_INFO=138,
  LOGTAG_X11_POLICY=139,
  LOGTAG_X11_SESSION=140,
  LOGTAG_X11_VIOLATION=141,
  LOGTAG_MAX=142

};

#endif


