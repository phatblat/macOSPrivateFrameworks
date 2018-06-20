//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"

@class HMDDataStreamTransportCommandStatus, HMDDataStreamTransportTCPParameters;

@interface HMDDataStreamTransportSetupResult : HMDTLVBase <HMDTLVCreateParse>
{
    HMDDataStreamTransportCommandStatus *_status;
    HMDDataStreamTransportTCPParameters *_protocolParameters;
}

@property(readonly, copy, nonatomic) HMDDataStreamTransportTCPParameters *protocolParameters; // @synthesize protocolParameters=_protocolParameters;
@property(readonly, copy, nonatomic) HMDDataStreamTransportCommandStatus *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithCommandStatus:(id)arg1 protocolParameters:(id)arg2;

@end

