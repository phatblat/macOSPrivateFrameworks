//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDTLVBase.h>

#import "HMDTLVCreateParse.h"

@class NSNumber;

@interface HMDDataStreamTransportTCPParameters : HMDTLVBase <HMDTLVCreateParse>
{
    NSNumber *_port;
}

@property(readonly, copy, nonatomic) NSNumber *port; // @synthesize port=_port;
- (void).cxx_destruct;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (BOOL)_parseFromTLVData;
- (id)initWithPort:(id)arg1;

@end

