//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/WFStorageServiceInputAction.h>

@interface WFGetFileLinkAction : WFStorageServiceInputAction
{
}

- (void)uploadWorkflowRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadInput:(id)arg1 storageService:(id)arg2 useShortURL:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;

@end
