#define VENDOR_Microsoft 311
#define VENDOR_Accel_PPP 55999

#define Accel_VRF_Name 1

#define User_Name 1
#define User_Password 2
#define CHAP_Password 3
#define NAS_IP_Address 4
#define NAS_Port 5
#define Service_Type 6
#define Framed_Protocol 7
#define Framed_IP_Address 8
#define Framed_IP_Netmask 9
#define Framed_Routing 10
#define Filter_Id 11
#define Framed_MTU 12
#define Framed_Compression 13
#define Login_IP_Host 14
#define Login_Service 15
#define Login_TCP_Port 16
#define Reply_Message 18
#define Callback_Number 19
#define Callback_Id 20
#define Framed_Route 22
#define Framed_IPX_Network 23
#define State 24
#define Class 25
#define Vendor_Specific 26
#define Session_Timeout 27
#define Idle_Timeout 28
#define Termination_Action 29
#define Called_Station_Id 30
#define Calling_Station_Id 31
#define NAS_Identifier 32
#define Proxy_State 33
#define Login_LAT_Service 34
#define Login_LAT_Node 35
#define Login_LAT_Group 36
#define Framed_AppleTalk_Link 37
#define Framed_AppleTalk_Network 38
#define Framed_AppleTalk_Zone 39
#define Acct_Status_Type 40
#define Acct_Delay_Time 41
#define Acct_Input_Octets 42
#define Acct_Output_Octets 43
#define Acct_Session_Id 44
#define Acct_Authentic 45
#define Acct_Session_Time 46
#define Acct_Input_Packets 47
#define Acct_Output_Packets 48
#define Acct_Terminate_Cause 49
#define Acct_Multi_Session_Id 50
#define Acct_Link_Count 51
#define Acct_Input_Gigawords 52
#define Acct_Output_Gigawords 53
#define Event_Timestamp 55
#define CHAP_Challenge 60
#define NAS_Port_Type 61
#define Port_Limit 62
#define Login_LAT_Port 63
#define Tunnel_Type 64
#define Tunnel_Medium_Type 65
#define Tunnel_Client_Endpoint 66
#define Tunnel_Server_Endpoint 67
#define Acct_Tunnel_Connection 68
#define Tunnel_Password 69
#define ARAP_Password 70
#define ARAP_Features 71
#define ARAP_Zone_Access 72
#define ARAP_Security 73
#define ARAP_Security_Data 74
#define Password_Retry 75
#define Prompt 76
#define Connect_Info 77
#define Configuration_Token 78
#define EAP_Message 79
#define Message_Authenticator 80
#define Tunnel_Private_Group_Id 81
#define Tunnel_Assignment_Id 82
#define Tunnel_Preference 83
#define ARAP_Challenge_Response 84
#define Acct_Interim_Interval 85
#define Acct_Tunnel_Packets_Lost 86
#define NAS_Port_Id 87
#define Framed_Pool 88
#define Chargeable_User_Identity 89
#define Tunnel_Client_Auth_Id 90
#define Tunnel_Server_Auth_Id 91
#define NAS_IPv6_Address 95
#define Framed_Interface_Id 96
#define Framed_IPv6_Prefix 97
#define Login_IPv6_Host 98
#define Framed_IPv6_Route 99
#define Framed_IPv6_Pool 100
#define Error_Cause 101
#define EAP_Key_Name 102
#define Delegated_IPv6_Prefix 123
#define Framed_IPv6_Address 168
#define DNS_Server_IPv6_Address 169
#define Route_IPv6_Information 170
#define Delegated_IPv6_Prefix_Pool 171
#define Stateful_IPv6_Address_Pool 172
#define Traffic_Shape_in 231

#define Service_Type_Login_User 1
#define Service_Type_Framed_User 2
#define Service_Type_Callback_Login_User 3
#define Service_Type_Callback_Framed_User 4
#define Service_Type_Outbound_User 5
#define Service_Type_Administrative_User 6
#define Service_Type_NAS_Prompt_User 7
#define Service_Type_Authenticate_Only 8
#define Service_Type_Callback_NAS_Prompt 9
#define Service_Type_Call_Check 10
#define Service_Type_Callback_Administrative 11
#define Service_Type_Authorize_Only 17

#define Framed_Protocol_PPP 1
#define Framed_Protocol_SLIP 2
#define Framed_Protocol_ARAP 3
#define Framed_Protocol_Gandalf_SLML 4
#define Framed_Protocol_Xylogics_IPX_SLIP 5
#define Framed_Protocol_X_75_Synchronous 6

#define Framed_Routing_None 0
#define Framed_Routing_Broadcast 1
#define Framed_Routing_Listen 2
#define Framed_Routing_Broadcast_Listen 3

#define Framed_Compression_None 0
#define Framed_Compression_Van_Jacobson_TCP_IP 1
#define Framed_Compression_IPX_Header_Compression 2
#define Framed_Compression_Stac_LZS 3

#define Login_Service_Telnet 0
#define Login_Service_Rlogin 1
#define Login_Service_TCP_Clear 2
#define Login_Service_PortMaster 3
#define Login_Service_LAT 4
#define Login_Service_X25_PAD 5
#define Login_Service_X25_T3POS 6
#define Login_Service_TCP_Clear_Quiet 8
#define Login_TCP_Port_Telnet 23
#define Login_TCP_Port_Rlogin 513
#define Login_TCP_Port_Rsh 514

#define Termination_Action_Default 0
#define Termination_Action_RADIUS_Request 1

#define NAS_Port_Type_Async 0
#define NAS_Port_Type_Sync 1
#define NAS_Port_Type_ISDN 2
#define NAS_Port_Type_ISDN_V120 3
#define NAS_Port_Type_ISDN_V110 4
#define NAS_Port_Type_Virtual 5
#define NAS_Port_Type_PIAFS 6
#define NAS_Port_Type_HDLC_Clear_Channel 7
#define NAS_Port_Type_X_25 8
#define NAS_Port_Type_X_75 9
#define NAS_Port_Type_G_3_Fax 10
#define NAS_Port_Type_SDSL 11
#define NAS_Port_Type_ADSL_CAP 12
#define NAS_Port_Type_ADSL_DMT 13
#define NAS_Port_Type_IDSL 14
#define NAS_Port_Type_Ethernet 15
#define NAS_Port_Type_xDSL 16
#define NAS_Port_Type_Cable 17
#define NAS_Port_Type_Wireless_Other 18
#define NAS_Port_Type_Wireless_802_11 19
#define NAS_Port_Type_Token_Ring 20
#define NAS_Port_Type_FDDI 21

#define Acct_Status_Type_Start 1
#define Acct_Status_Type_Stop 2
#define Acct_Status_Type_Alive 3
#define Acct_Status_Type_Interim_Update 3
#define Acct_Status_Type_Accounting_On 7
#define Acct_Status_Type_Accounting_Off 8
#define Acct_Status_Type_Tunnel_Start 9
#define Acct_Status_Type_Tunnel_Stop 10
#define Acct_Status_Type_Tunnel_Reject 11
#define Acct_Status_Type_Tunnel_Link_Start 12
#define Acct_Status_Type_Tunnel_Link_Stop 13
#define Acct_Status_Type_Tunnel_Link_Reject 14
#define Acct_Status_Type_Failed 15

#define Acct_Authentic_RADIUS 1
#define Acct_Authentic_Local 2
#define Acct_Authentic_Remote 3
#define Acct_Authentic_Diameter 4

#define Acct_Terminate_Cause_User_Request 1
#define Acct_Terminate_Cause_Lost_Carrier 2
#define Acct_Terminate_Cause_Lost_Service 3
#define Acct_Terminate_Cause_Idle_Timeout 4
#define Acct_Terminate_Cause_Session_Timeout 5
#define Acct_Terminate_Cause_Admin_Reset 6
#define Acct_Terminate_Cause_Admin_Reboot 7
#define Acct_Terminate_Cause_Port_Error 8
#define Acct_Terminate_Cause_NAS_Error 9
#define Acct_Terminate_Cause_NAS_Request 10
#define Acct_Terminate_Cause_NAS_Reboot 11
#define Acct_Terminate_Cause_Port_Unneeded 12
#define Acct_Terminate_Cause_Port_Preempted 13
#define Acct_Terminate_Cause_Port_Suspended 14
#define Acct_Terminate_Cause_Service_Unavailable 15
#define Acct_Terminate_Cause_Callback 16
#define Acct_Terminate_Cause_User_Error 17
#define Acct_Terminate_Cause_Host_Request 18
#define Acct_Terminate_Cause_Supplicant_Restart 19
#define Acct_Terminate_Cause_Reauthentication_Failure 20
#define Acct_Terminate_Cause_Port_Reinit 21
#define Acct_Terminate_Cause_Port_Disabled 22

#define Tunnel_Type_PPTP 1
#define Tunnel_Type_L2F 2
#define Tunnel_Type_L2TP 3
#define Tunnel_Type_ATMP 4
#define Tunnel_Type_VTP 5
#define Tunnel_Type_AH 6
#define Tunnel_Type_IP 7
#define Tunnel_Type_MIN_IP 8
#define Tunnel_Type_ESP 9
#define Tunnel_Type_GRE 10
#define Tunnel_Type_DVS 11
#define Tunnel_Type_IP_in_IP 12
#define Tunnel_Type_VLAN 13

#define Tunnel_Medium_Type_IP 1
#define Tunnel_Medium_Type_IPv4 1
#define Tunnel_Medium_Type_IPv6 2
#define Tunnel_Medium_Type_NSAP 3
#define Tunnel_Medium_Type_HDLC 4
#define Tunnel_Medium_Type_BBN_1822 5
#define Tunnel_Medium_Type_IEEE_802 6
#define Tunnel_Medium_Type_E_163 7
#define Tunnel_Medium_Type_E_164 8
#define Tunnel_Medium_Type_F_69 9
#define Tunnel_Medium_Type_X_121 10
#define Tunnel_Medium_Type_IPX 11
#define Tunnel_Medium_Type_Appletalk 12
#define Tunnel_Medium_Type_DecNet_IV 13
#define Tunnel_Medium_Type_Banyan_Vines 14
#define Tunnel_Medium_Type_E_164_NSAP 15

#define ARAP_Zone_Access_Default_Zone 1
#define ARAP_Zone_Access_Zone_Filter_Inclusive 2
#define ARAP_Zone_Access_Zone_Filter_Exclusive 4

#define Prompt_No_Echo 0
#define Prompt_Echo 1

#define Error_Cause_Residual_Context_Removed 201
#define Error_Cause_Invalid_EAP_Packet 202
#define Error_Cause_Unsupported_Attribute 401
#define Error_Cause_Missing_Attribute 402
#define Error_Cause_NAS_Identification_Mismatch 403
#define Error_Cause_Invalid_Request 404
#define Error_Cause_Unsupported_Service 405
#define Error_Cause_Unsupported_Extension 406
#define Error_Cause_Invalid_Attribute_Value 407
#define Error_Cause_Administratively_Prohibited 501
#define Error_Cause_Proxy_Request_Not_Routable 502
#define Error_Cause_Session_Context_Not_Found 503
#define Error_Cause_Session_Context_Not_Removable 504
#define Error_Cause_Proxy_Processing_Error 505
#define Error_Cause_Resources_Unavailable 506
#define Error_Cause_Request_Initiated 507
#define Error_Cause_Multiple_Session_Selection_Unsupported 508

#define MS_CHAP_Response 1
#define MS_CHAP_Error 2
#define MS_CHAP_CPW_1 3
#define MS_CHAP_CPW_2 4
#define MS_CHAP_LM_Enc_PW 5
#define MS_CHAP_NT_Enc_PW 6
#define MS_MPPE_Encryption_Policy 7
#define MS_MPPE_Encryption_Type 8
#define MS_MPPE_Encryption_Types 8
#define MS_RAS_Vendor 9
#define MS_CHAP_Domain 10
#define MS_CHAP_Challenge 11
#define MS_CHAP_MPPE_Keys 12
#define MS_BAP_Usage 13
#define MS_Link_Utilization_Threshold 14
#define MS_Link_Drop_Time_Limit 15
#define MS_MPPE_Send_Key 16
#define MS_MPPE_Recv_Key 17
#define MS_RAS_Version 18
#define MS_Old_ARAP_Password 19
#define MS_New_ARAP_Password 20
#define MS_ARAP_PW_Change_Reason 21
#define MS_Filter 22
#define MS_Acct_Auth_Type 23
#define MS_Acct_EAP_Type 24
#define MS_CHAP2_Response 25
#define MS_CHAP2_Success 26
#define MS_CHAP2_CPW 27
#define MS_Primary_DNS_Server 28
#define MS_Secondary_DNS_Server 29
#define MS_Primary_NBNS_Server 30
#define MS_Secondary_NBNS_Server 31
#define MS_BAP_Usage_Not_Allowed 0
#define MS_BAP_Usage_Allowed 1
#define MS_BAP_Usage_Required 2
#define MS_ARAP_PW_Change_Reason_Just_Change_Password 1
#define MS_ARAP_PW_Change_Reason_Expired_Password 2
#define MS_ARAP_PW_Change_Reason_Admin_Requires_Password_Change 3
#define MS_ARAP_PW_Change_Reason_Password_Too_Short 4
#define MS_Acct_Auth_Type_PAP 1
#define MS_Acct_Auth_Type_CHAP 2
#define MS_Acct_Auth_Type_MS_CHAP_1 3
#define MS_Acct_Auth_Type_MS_CHAP_2 4
#define MS_Acct_Auth_Type_EAP 5
#define MS_Acct_EAP_Type_MD5 4
#define MS_Acct_EAP_Type_OTP 5
#define MS_Acct_EAP_Type_Generic_Token_Card 6
#define MS_Acct_EAP_Type_TLS 13

/* Mikrotik vendor specific attributes */
#define VENDOR_Mikrotik 14988
#define Mikrotik_Rate_Limit 8
#define Mikrotik_Force_Disconnect 19  // ID arbitrário para nosso atributo personalizado
