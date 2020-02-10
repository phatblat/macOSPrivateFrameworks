//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppSSOKerberos/SOAsynchronousOperation.h>

@class NSString;

@interface SOAsynchronousLDAPOperation : SOAsynchronousOperation
{
    unsigned short _port;
    CDUnknownBlockType _completion;
    NSString *_realm;
    NSString *_host;
    NSString *_bundleIdentifier;
}

@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)main;
- (id)initWithRealm:(id)arg1 andHost:(id)arg2 andPort:(unsigned short)arg3 andBundleIdentifier:(id)arg4 andCompetion:(CDUnknownBlockType)arg5;

@end
