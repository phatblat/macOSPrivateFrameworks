//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol VCControlChannelMessageProtocol <NSObject>
@property(readonly) NSString *VCCCPayloadKey;
@property(readonly) NSData *VCCCData;
@property(readonly) NSString *VCCCString;
@property(readonly) unsigned long long VCCCLength;
- (BOOL)VCCCGetBytes:(char *)arg1 size:(unsigned int)arg2;
@end

