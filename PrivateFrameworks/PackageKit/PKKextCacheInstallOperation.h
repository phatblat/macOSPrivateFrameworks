//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@interface PKKextCacheInstallOperation : PKInstallOperation
{
}

- (void)main;
- (BOOL)_updateKextCachesReturningError:(id *)arg1;
- (int)installState;
- (BOOL)_shouldUpdateKextCaches;
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3;

@end

