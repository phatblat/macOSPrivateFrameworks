//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFIMAPClientOperation.h>

@interface ICNFIMAPClientSuspendOperation : ICNFIMAPClientOperation
{
    BOOL _shouldExecuteSynchronously;
}

@property BOOL shouldExecuteSynchronously; // @synthesize shouldExecuteSynchronously=_shouldExecuteSynchronously;
- (long long)maxAllowedConnectionState;
- (BOOL)alwaysAllowToComplete;
- (id)commandTypeString;
- (id)init;

@end
