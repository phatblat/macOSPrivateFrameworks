//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIUnmountPayloadElement : OSIInstallQueueElement
{
}

- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)_ejectDiskImageWithPath:(id)arg1 withError:(id *)arg2;
- (BOOL)runReturningError:(id *)arg1;
- (id)initWithOptions:(id)arg1;

@end

