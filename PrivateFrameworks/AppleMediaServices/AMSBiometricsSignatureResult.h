//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMSBiometricsSignatureRequest, NSString;

__attribute__((visibility("hidden")))
@interface AMSBiometricsSignatureResult : NSObject
{
    AMSBiometricsSignatureRequest *_originalRequest;
    NSString *_signature;
}

@property(retain) NSString *signature; // @synthesize signature=_signature;
@property(retain) AMSBiometricsSignatureRequest *originalRequest; // @synthesize originalRequest=_originalRequest;
- (void).cxx_destruct;

@end

