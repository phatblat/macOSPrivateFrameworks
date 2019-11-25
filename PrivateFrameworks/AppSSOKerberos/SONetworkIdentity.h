//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_nw_path>, NSString;

@interface SONetworkIdentity : NSObject
{
    NSString *_networkFingerprint;
    NSString *_realm;
    NSString *_bundleIdentifier;
    NSObject<OS_nw_path> *_lastpath;
}

@property(retain, nonatomic) NSObject<OS_nw_path> *lastpath; // @synthesize lastpath=_lastpath;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *networkFingerprint; // @synthesize networkFingerprint=_networkFingerprint;
- (void).cxx_destruct;
- (id)getInterfaceSignature:(id)arg1;
- (id)getVPNServerSignature:(id)arg1;
- (void)determineNetworkFingerprint;
- (id)initForRealm:(id)arg1 andBundleIdentifier:(id)arg2;

@end

