//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OpenDirectoryConfig/ODCAction.h>

@class NSString;

@interface ODCGetODServerInfoAction : ODCAction
{
    NSString *_serverName;
}

+ (long long)securityLevelFromResponse:(id)arg1;
@property(copy) NSString *serverName; // @synthesize serverName=_serverName;
- (void)startExecution;
- (void)legacyServerInfo;
- (void)serverInfo;
- (void)dealloc;
- (id)init;
- (void)setResults:(id)arg1;
- (void)_setResults:(id)arg1;

@end

