//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSLink.h"

@class IDSSockAddrWrapper, NSDictionary, NSString;

@interface IDSUDPLink : NSObject <IDSLink>
{
    int _socket;
    int _addressFamily;
    IDSSockAddrWrapper *_localAddress;
    IDSSockAddrWrapper *_destinationAddress;
    BOOL _hasFixedDestination;
    NSDictionary *_destinationAddressToDeviceIDMap;
    unsigned short _port;
    BOOL _wantsAWDL;
    BOOL _wantsWiFi;
    BOOL _wantsCellular;
    BOOL _useDefaultInterfaceOnly;
    BOOL _allowsLinkLocal;
    BOOL _skipTransportThread;
    BOOL _needToConnect;
    BOOL _hasTemporaryError;
    BOOL _isInvalidated;
    double _lastDestinationSent;
    double _lastDestinationReceived;
    CDStruct_e844bd1c *_incomingPacketBuffer;
    unsigned long long _state;
    unsigned long long _totalBytesSent;
    unsigned long long _totalPacketsSent;
    unsigned long long _totalBytesReceived;
    unsigned long long _totalPacketsReceived;
    unsigned long long _previousBytesSent;
    unsigned long long _previousPacketsSent;
    unsigned long long _previousBytesReceived;
    unsigned long long _previousPacketsReceived;
    double _previousReportTime;
    NSString *_cbuuid;
    NSString *_deviceUniqueID;
    id <IDSLinkDelegate> _delegate;
    id <IDSLinkDelegate> _alternateDelegate;
}

@property BOOL allowsLinkLocal; // @synthesize allowsLinkLocal=_allowsLinkLocal;
@property BOOL skipTransportThread; // @synthesize skipTransportThread=_skipTransportThread;
@property __weak id <IDSLinkDelegate> alternateDelegate; // @synthesize alternateDelegate=_alternateDelegate;
@property __weak id <IDSLinkDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) double lastDestinationReceived; // @synthesize lastDestinationReceived=_lastDestinationReceived;
@property double lastDestinationSent; // @synthesize lastDestinationSent=_lastDestinationSent;
@property(readonly) BOOL isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property BOOL useDefaultInterfaceOnly; // @synthesize useDefaultInterfaceOnly=_useDefaultInterfaceOnly;
@property(readonly) int socket; // @synthesize socket=_socket;
@property unsigned short port; // @synthesize port=_port;
@property(retain) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(retain) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(readonly) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (BOOL)setTrafficClass:(int)arg1;
- (id)generateLinkReport:(double)arg1 isCurrentLink:(BOOL)arg2;
- (unsigned long long)sendPacketBufferArray:(CDStruct_183601bc **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_e844bd1c *)arg1 sourceInterface:(id)arg2 destination:(id)arg3 toDeviceID:(id)arg4;
- (unsigned long long)sendPacketBuffer:(CDStruct_e844bd1c *)arg1 destination:(id)arg2 toDeviceID:(id)arg3;
- (unsigned long long)sendPacketBuffer:(CDStruct_e844bd1c *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;
- (id)copyCurrentNetworkInterfaces;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4;
- (id)newSocketWithIPVersion:(unsigned long long)arg1 wantsAWDL:(BOOL)arg2 wantsWiFi:(BOOL)arg3 wantsCellular:(BOOL)arg4 clientUUID:(unsigned char [16])arg5;
- (void)reconnectWithLocalAddress:(id)arg1;
- (BOOL)setDestinationAddressToDeviceIDMap:(id)arg1;
- (BOOL)setDestinationAddress:(id)arg1 isFixedDestination:(BOOL)arg2 fromAddress:(id)arg3;
- (void)invalidate;
- (void)removeSocket;
- (id)copyLinkStatsDict;
@property(readonly, getter=linkTypeString) NSString *linkTypeString;
@property(readonly) unsigned long long headerOverhead;
- (unsigned long long)_sendBytesArray:(const void **)arg1 lengthArray:(unsigned long long *)arg2 arraySize:(int)arg3 localInterfaceIndex:(int)arg4 localAddress:(const struct sockaddr *)arg5 destinationAddress:(const struct sockaddr *)arg6 trafficClass:(unsigned short)arg7;
- (unsigned long long)_sendBytes:(const void *)arg1 length:(unsigned long long)arg2 destinationAddress:(const struct sockaddr *)arg3;
- (unsigned long long)_sendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)_processIncomingPacket;
- (void)dealloc;
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

