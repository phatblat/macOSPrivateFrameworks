//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, VCSecureDataChannel;

@protocol VCSecureDataChannelDelegate <NSObject>
- (void)vcSecureDataChannel:(VCSecureDataChannel *)arg1 messageType:(unsigned int)arg2 receivedData:(NSData *)arg3;
@end

