//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFAccessResource.h"

@interface WFiCloudDriveAccessResource : WFAccessResource
{
}

+ (BOOL)isSystemResource;
+ (BOOL)mustBeAvailableForDisplay;
- (void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1;
- (unsigned long long)globalLevelStatus;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1;
- (id)protectedResourceDescription;
- (id)associatedAppIdentifier;

@end
