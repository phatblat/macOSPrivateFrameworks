//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface SiriCoreErrorInfo : NSObject
{
    BOOL _isPeerConnectionError;
    BOOL _isPeerNotNearbyError;
    NSError *_error;
}

@property(nonatomic) BOOL isPeerNotNearbyError; // @synthesize isPeerNotNearbyError=_isPeerNotNearbyError;
@property(nonatomic) BOOL isPeerConnectionError; // @synthesize isPeerConnectionError=_isPeerConnectionError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end

