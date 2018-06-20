//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InternetAccounts/IAAccountSetupInput.h>

@class NSString;

@interface IACardDAVAccountSetupInput : IAAccountSetupInput
{
    NSString *_serverAddress;
    NSString *_autoHostname;
    NSString *_autoSchema;
    BOOL _migrateLocalData;
    NSString *_emailAddress;
}

@property(retain) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property BOOL migrateLocalData; // @synthesize migrateLocalData=_migrateLocalData;
@property(retain) NSString *autoSchema; // @synthesize autoSchema=_autoSchema;
@property(retain) NSString *autoHostname; // @synthesize autoHostname=_autoHostname;
@property(retain) NSString *serverAddress; // @synthesize serverAddress=_serverAddress;
- (void).cxx_destruct;

@end

