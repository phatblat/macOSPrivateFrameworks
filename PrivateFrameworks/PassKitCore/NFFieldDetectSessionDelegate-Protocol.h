//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NFFieldDetectSession, NFTechnologyEvent;

@protocol NFFieldDetectSessionDelegate <NSObject>

@optional
- (void)fieldDetectSessionDidEndUnexpectedly:(NFFieldDetectSession *)arg1;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectTechnology:(NFTechnologyEvent *)arg2;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectField:(BOOL)arg2;
@end

