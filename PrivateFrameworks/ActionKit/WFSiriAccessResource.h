//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAccessResource.h"

@interface WFSiriAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)workflowLevelStatus;
- (unsigned long long)globalLevelStatus;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;

@end

