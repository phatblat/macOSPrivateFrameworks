//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCVirtualTTYDevice, NSError;

@protocol AVCVirtualTTYDeviceDelegate <NSObject>
- (void)device:(AVCVirtualTTYDevice *)arg1 didReceiveCharacter:(unsigned short)arg2;
- (void)deviceDidStop:(AVCVirtualTTYDevice *)arg1;
- (void)device:(AVCVirtualTTYDevice *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;
@end

