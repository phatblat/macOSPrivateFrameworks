//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _TVRCMRTelevisionWrapper, _TVRCMediaRemoteDeviceQuery;

@protocol _TVRCMediaRemoteDeviceQueryDelegate <NSObject>

@optional
- (void)mediaRemoteDeviceQuery:(_TVRCMediaRemoteDeviceQuery *)arg1 removedTelevision:(_TVRCMRTelevisionWrapper *)arg2;
- (void)mediaRemoteDeviceQuery:(_TVRCMediaRemoteDeviceQuery *)arg1 addedTelevision:(_TVRCMRTelevisionWrapper *)arg2;
@end
