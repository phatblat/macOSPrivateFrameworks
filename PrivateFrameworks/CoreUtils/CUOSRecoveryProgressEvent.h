//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSString;

__attribute__((visibility("hidden")))
@interface CUOSRecoveryProgressEvent : NSObject
{
    int _type;
    NSString *_authenticationText;
    NSDictionary *_configInfo;
    NSError *_error;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSDictionary *configInfo; // @synthesize configInfo=_configInfo;
@property(nonatomic) NSString *authenticationText; // @synthesize authenticationText=_authenticationText;
- (void).cxx_destruct;

@end
